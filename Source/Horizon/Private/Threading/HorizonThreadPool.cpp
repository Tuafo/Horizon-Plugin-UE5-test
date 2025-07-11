#include "Threading/HorizonThreadPool.h"
#include "Core/Horizon.h"
#include "HAL/PlatformProcess.h"
#include "Misc/ScopeLock.h"
#include "Misc/Timespan.h"

namespace Horizon
{
namespace Threading
{

// Static member initialization
TSharedPtr<FThreadPool> FThreadPool::ThreadPoolInstance;

// Gets or creates the singleton thread pool
TSharedPtr<FThreadPool> FThreadPool::Get()
{
    if (!ThreadPoolInstance.IsValid())
    {
        ThreadPoolInstance = MakeShared<FThreadPool>();
    }
    return ThreadPoolInstance;
}

// Shuts down and releases the singleton instance
void FThreadPool::ShutdownSingleton()
{
    if (ThreadPoolInstance.IsValid())
    {
        UE_LOG(LogHorizon, Log, TEXT("Shutting down thread pool singleton"));
        
        // First shutdown the instance
        ThreadPoolInstance->Shutdown();
        
        // Then reset the shared pointer
        ThreadPoolInstance.Reset();
        
        UE_LOG(LogHorizon, Log, TEXT("Thread pool singleton shutdown complete"));
    }
    else
    {
        UE_LOG(LogHorizon, Verbose, TEXT("Thread pool singleton was already shut down"));
    }
}

// Worker implementation
FThreadPool::FWorker::FWorker(FThreadPool* InPool, int32 InWorkerId)
    : Pool(InPool)
    , WorkerId(InWorkerId)
    , bStopRequested(false)
    , Thread(nullptr)
{
}

FThreadPool::FWorker::~FWorker()
{
    // Thread lifecycle is managed by the ThreadPool, not the Worker
    // Just ensure stop is requested if not already done
    bStopRequested = true;
    Thread = nullptr; // Don't delete, ThreadPool handles it
}

bool FThreadPool::FWorker::Init()
{
    return true;
}

uint32 FThreadPool::FWorker::Run()
{
    UE_LOG(LogHorizon, Verbose, TEXT("Horizon worker thread %d started"), WorkerId);
    
    while (!bStopRequested && !Pool->bShutdown.load())
    {
        FTask Task;
        bool HasTask = Pool->DequeueTask(Task);
        
        if (HasTask && Task.Function)
        {
            try
            {
                bool Result = Task.Function();
                
                // Signal completion if needed
                if (Task.CompletionEvent)
                {
                    Task.CompletionEvent->Trigger();
                }
                
                if (Task.CompletionFlag)
                {
                    Task.CompletionFlag->store(Result);
                }
            }
            catch (const std::exception& e)
            {
                // Safer string conversion with error handling
                const char* ExceptionMessage = e.what();
                if (ExceptionMessage)
                {
                    // Use FString for safer conversion
                    FString ErrorMessage = FString::Printf(TEXT("Exception in worker thread %d: %s"), 
                        WorkerId, UTF8_TO_TCHAR(ExceptionMessage));
                    UE_LOG(LogHorizon, Error, TEXT("%s"), *ErrorMessage);
                }
                else
                {
                    UE_LOG(LogHorizon, Error, TEXT("Exception in worker thread %d: <null message>"), WorkerId);
                }
                
                // Ensure task completion is properly signaled even on exception
                if (Task.CompletionEvent)
                {
                    Task.CompletionEvent->Trigger();
                }
                
                if (Task.CompletionFlag)
                {
                    Task.CompletionFlag->store(false); // Indicate failure
                }
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Error, TEXT("Unknown exception in worker thread %d"), WorkerId);
                
                // Ensure task completion is properly signaled even on exception
                if (Task.CompletionEvent)
                {
                    Task.CompletionEvent->Trigger();
                }
                
                if (Task.CompletionFlag)
                {
                    Task.CompletionFlag->store(false); // Indicate failure
                }
            }
        }
        else if (!bStopRequested && !Pool->bShutdown.load())
        {
            // Wait for work with a shorter timeout and check shutdown flags more frequently
            if (Pool->TaskAvailableEvent)
            {
                Pool->TaskAvailableEvent->Wait(50); // Reduced timeout for more responsive shutdown
            }
            else
            {
                // Fallback if event is null (shouldn't happen but be safe)
                FPlatformProcess::Sleep(0.05f);
            }
        }
    }
    
    UE_LOG(LogHorizon, Verbose, TEXT("Horizon worker thread %d stopped"), WorkerId);
    return 0;
}

void FThreadPool::FWorker::Stop()
{
    bStopRequested = true;
}

void FThreadPool::FWorker::Exit()
{
    // Nothing to clean up
}

// ThreadPool implementation
FThreadPool::FThreadPool(int32 InNumThreads, uint32 InThreadStackSize, EThreadPriority InThreadPriority, const FString& InThreadName)
    : bShutdown(false)
    , TotalTaskCount(0)
{
    // Create event for signaling when tasks are available
    TaskAvailableEvent = FPlatformProcess::GetSynchEventFromPool(false);
    
    // Determine thread count - auto-configure if not specified
    int32 NumThreads = InNumThreads;
    if (NumThreads <= 0)
    {
        NumThreads = FMath::Max(1, FPlatformMisc::NumberOfCores() - 1);
    }
    
    // Use reasonable default stack size if not specified
    uint32 ThreadStackSize = InThreadStackSize;
    if (ThreadStackSize == 0)
    {
        ThreadStackSize = 128 * 1024; // 128KB
    }
    
    UE_LOG(LogHorizon, Log, TEXT("Creating Horizon thread pool with %d worker threads"), NumThreads);
    
    // Create worker threads
    for (int32 i = 0; i < NumThreads; ++i)
    {
        FWorker* Worker = new FWorker(this, i);
        Workers.Add(Worker);
        
        FString ThreadName = FString::Printf(TEXT("%s%d"), *InThreadName, i);
        FRunnableThread* Thread = FRunnableThread::Create(Worker, *ThreadName, ThreadStackSize, InThreadPriority, FPlatformAffinity::GetNoAffinityMask());
        
        if (Thread)
        {
            Worker->SetThread(Thread);
            Threads.Add(Thread);
        }
        else
        {
            UE_LOG(LogHorizon, Error, TEXT("Failed to create worker thread %d"), i);
            delete Worker;
            Workers.RemoveAt(Workers.Num() - 1);
        }
    }
}

FThreadPool::~FThreadPool()
{
    // Ensure shutdown is called
    Shutdown();
    
    // Return event to pool safely
    if (TaskAvailableEvent)
    {
        FPlatformProcess::ReturnSynchEventToPool(TaskAvailableEvent);
        TaskAvailableEvent = nullptr;
    }
}

bool FThreadPool::EnqueueTask(FTaskFunction Function)
{
    if (bShutdown || !Function)
    {
        return false;
    }
    
    FTask Task(MoveTemp(Function));
    
    {
        FScopeLock Lock(&QueueLock);
        TaskQueue.Enqueue(MoveTemp(Task));
        QueueSize.fetch_add(1);
    }
    
    // Increment counter and signal a waiting thread
    TotalTaskCount.fetch_add(1);
    TaskAvailableEvent->Trigger();
    
    return true;
}

bool FThreadPool::EnqueueAndWait(FTaskFunction Function, float TimeoutSeconds)
{
    if (bShutdown || !Function)
    {
        return false;
    }
    
    // Create event to wait on
    FEvent* CompletionEvent = FPlatformProcess::GetSynchEventFromPool(false);
    std::atomic<bool> TaskResult(false);
    
    FTask Task;
    Task.Function = [Function = MoveTemp(Function), &TaskResult]() {
        bool Result = Function();
        TaskResult.store(Result);
        return Result;
    };
    Task.CompletionEvent = CompletionEvent;
    
    {
        FScopeLock Lock(&QueueLock);
        TaskQueue.Enqueue(MoveTemp(Task));
        QueueSize.fetch_add(1);
    }
    
    // Increment counter and signal a waiting thread
    TotalTaskCount.fetch_add(1);
    TaskAvailableEvent->Trigger();
    
    // Wait for completion with timeout
    bool bTimedOut = false;
    if (TimeoutSeconds > 0.0f)
    {
        bTimedOut = !CompletionEvent->Wait(FTimespan::FromSeconds(TimeoutSeconds));
    }
    else
    {
        CompletionEvent->Wait();
    }
    
    // Return event to pool
    FPlatformProcess::ReturnSynchEventToPool(CompletionEvent);
    
    // Return false on timeout, otherwise return task result
    return !bTimedOut && TaskResult;
}

int32 FThreadPool::GetPendingTaskCount() const
{
    return QueueSize.load();
}

bool FThreadPool::HasPendingTasks() const
{
    return QueueSize.load() > 0;
}

bool FThreadPool::WaitForAll(float TimeoutSeconds)
{
    const double StartTime = FPlatformTime::Seconds();
    const double EndTime = (TimeoutSeconds > 0.0f) ? (StartTime + TimeoutSeconds) : DBL_MAX;
    
    while (HasPendingTasks())
    {
        if (FPlatformTime::Seconds() >= EndTime)
        {
            return false;
        }
        
        FPlatformProcess::Sleep(0.01f);
    }
    
    return true;
}

void FThreadPool::Shutdown()
{
    // Get old value and set to true atomically
    bool wasShutdown = bShutdown.exchange(true);
    if (wasShutdown)
    {
        return;  // Already shut down
    }

    UE_LOG(LogHorizon, Log, TEXT("Shutting down Horizon thread pool with %d worker threads"), Workers.Num());

    // Signal all workers to stop
    for (FWorker* Worker : Workers)
    {
        if (Worker)
        {
            try
            {
                Worker->RequestStop();
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Warning, TEXT("Exception while requesting worker stop"));
            }
        }
    }
    
    // Signal any waiting threads multiple times to ensure all threads wake up
    if (TaskAvailableEvent)
    {
        // Trigger multiple times to wake up all waiting threads
        for (int32 i = 0; i < Workers.Num() + 1; ++i)
        {
            TaskAvailableEvent->Trigger();
        }
    }
    
    // Wait for threads to complete gracefully with a reasonable timeout
    const float MaxWaitTime = 5.0f; // 5 seconds total
    const float CheckInterval = 0.1f; // Check every 100ms
    
    for (int32 ThreadIndex = 0; ThreadIndex < Threads.Num(); ++ThreadIndex)
    {
        FRunnableThread* Thread = Threads[ThreadIndex];
        if (Thread)
        {
            try
            {
                float ThreadWaitTime = 0.0f;
                
                // Wait for thread completion with timeout and periodic checks
                // Since WaitForCompletion() doesn't support timeout, we need to use a different approach
                while (ThreadWaitTime < MaxWaitTime)
                {
                    // Check if the worker thread has finished by checking the stop flag
                    bool bThreadFinished = false;
                    if (ThreadIndex < Workers.Num() && Workers[ThreadIndex])
                    {
                        // The thread should finish when stop is requested and it's no longer executing tasks
                        bThreadFinished = Workers[ThreadIndex]->IsStopRequested();
                    }
                    
                    if (bThreadFinished)
                    {
                        // Give it a moment to actually exit and then call WaitForCompletion
                        FPlatformProcess::Sleep(0.01f);
                        Thread->WaitForCompletion();
                        UE_LOG(LogHorizon, Verbose, TEXT("Thread %d completed gracefully"), ThreadIndex);
                        break;
                    }
                    
                    FPlatformProcess::Sleep(CheckInterval);
                    ThreadWaitTime += CheckInterval;
                    
                    if (ThreadWaitTime >= 1.0f && FMath::Fmod(ThreadWaitTime, 1.0f) < CheckInterval) // Log every second
                    {
                        UE_LOG(LogHorizon, Warning, TEXT("Thread %d still running after %.1f seconds"), ThreadIndex, ThreadWaitTime);
                    }
                }
                
                if (ThreadWaitTime >= MaxWaitTime)
                {
                    UE_LOG(LogHorizon, Warning, TEXT("Thread %d did not complete within timeout, forcing termination"), ThreadIndex);
                    // Force kill the thread as last resort
                    Thread->Kill(true);
                }
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Warning, TEXT("Exception while waiting for thread %d completion"), ThreadIndex);
                try
                {
                    Thread->Kill(true);
                }
                catch (...)
                {
                    UE_LOG(LogHorizon, Error, TEXT("Exception while force killing thread %d"), ThreadIndex);
                }
            }
        }
    }
    
    // Clean up workers first
    for (int32 WorkerIndex = 0; WorkerIndex < Workers.Num(); ++WorkerIndex)
    {
        FWorker* Worker = Workers[WorkerIndex];
        if (Worker)
        {
            try
            {
                delete Worker;
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Warning, TEXT("Exception while deleting worker %d"), WorkerIndex);
            }
        }
    }
    
    // Clean up threads - they should be properly terminated after WaitForCompletion
    for (int32 ThreadIndex = 0; ThreadIndex < Threads.Num(); ++ThreadIndex)
    {
        FRunnableThread* Thread = Threads[ThreadIndex];
        if (Thread)
        {
            try
            {
                // Don't call Kill() here since we already waited for completion or forced kill above
                delete Thread;
            }
            catch (...)
            {
                UE_LOG(LogHorizon, Warning, TEXT("Exception while deleting thread %d"), ThreadIndex);
            }
        }
    }
    
    Workers.Empty();
    Threads.Empty();
    
    // Clear the task queue safely
    {
        FScopeLock Lock(&QueueLock);
        try
        {
            FTask DummyTask;
            int32 ClearedTasks = 0;
            while (!TaskQueue.IsEmpty())
            {
                TaskQueue.Dequeue(DummyTask);
                ClearedTasks++;
            }
            // Reset the queue size counter since we've cleared everything
            QueueSize.store(0);
            
            if (ClearedTasks > 0)
            {
                UE_LOG(LogHorizon, Log, TEXT("Cleared %d pending tasks during shutdown"), ClearedTasks);
            }
        }
        catch (...)
        {
            UE_LOG(LogHorizon, Warning, TEXT("Exception while clearing task queue"));
            QueueSize.store(0); // Still reset the counter
        }
    }
    
    UE_LOG(LogHorizon, Log, TEXT("Horizon thread pool shutdown completed"));
}

bool FThreadPool::DequeueTask(FTask& OutTask)
{
    FScopeLock Lock(&QueueLock);
    
    if (TaskQueue.IsEmpty())
    {
        return false;
    }
    
    bool bDequeued = TaskQueue.Dequeue(OutTask);
    if (bDequeued)
    {
        QueueSize.fetch_sub(1);
    }
    return bDequeued;
}

} // namespace Threading
} // namespace Horizon