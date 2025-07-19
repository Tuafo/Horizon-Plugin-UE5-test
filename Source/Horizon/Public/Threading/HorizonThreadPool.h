#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "HAL/ThreadSafeBool.h"
#include "Containers/Queue.h"
#include <atomic>
#include <functional>

/**
 * @file HorizonThreadPool.h
 * @brief High-performance thread pool for asynchronous task execution
 * 
 * This file provides a thread pool implementation optimized for WebSocket operations
 * and other background tasks. The thread pool manages a configurable number of worker
 * threads that can execute tasks in parallel with minimal overhead.
 */

namespace Horizon
{
namespace Threading
{

/**
 * @typedef FTaskFunction
 * @brief Function type for tasks executed by the thread pool
 * 
 * Tasks are functions that return a boolean indicating success (true) or failure (false).
 * The thread pool will handle the execution context and thread safety.
 */
using FTaskFunction = TFunction<bool()>;

/**
 * @struct FTask
 * @brief Task description for thread pool execution
 * 
 * Contains the task function and optional synchronization objects for waiting
 * on task completion. Tasks can be fire-and-forget or synchronous.
 */
struct FTask
{
    /** The function to execute */
    FTaskFunction Function;
    /** Optional event to signal when task completes */
    FEvent* CompletionEvent = nullptr;
    /** Optional atomic flag to set when task completes */
    std::atomic<bool>* CompletionFlag = nullptr;
    
    /** Default constructor */
    FTask() = default;
    
    /**
     * Constructor with function
     * @param InFunction The task function to execute
     */
    explicit FTask(FTaskFunction InFunction)
        : Function(MoveTemp(InFunction))
    {
    }
};

/**
 * @class FThreadPool
 * @brief High-performance thread pool for asynchronous task execution
 * 
 * This class manages a pool of worker threads that can execute tasks in parallel.
 * It's designed for high-throughput scenarios with minimal overhead and efficient
 * task distribution. The thread pool supports both fire-and-forget and synchronous
 * task execution patterns.
 * 
 * Key Features:
 * - Configurable number of worker threads (auto-detects CPU cores by default)
 * - Thread-safe task queuing and execution
 * - Support for both async and sync task execution
 * - Efficient task distribution with minimal locking
 * - Performance monitoring and statistics
 * - Graceful shutdown with task completion
 * - Singleton pattern for global access
 * 
 * Usage:
 * @code{.cpp}
 * // Get the thread pool instance
 * auto ThreadPool = FThreadPool::Get();
 * 
 * // Execute a task asynchronously
 * ThreadPool->EnqueueTask([]() -> bool {
 *     // Perform background work
 *     return true; // Success
 * });
 * 
 * // Execute a task synchronously
 * bool Success = ThreadPool->EnqueueAndWait([]() -> bool {
 *     // Perform work and wait for completion
 *     return true;
 * });
 * @endcode
 * 
 * @note The thread pool is optimized for WebSocket operations but can be used for any background tasks
 * @see UHorizonSettings for thread pool configuration options
 */
class HORIZON_API FThreadPool : public TSharedFromThis<FThreadPool>
{
public:
    /**
     * Constructor - creates and initializes the thread pool
     * @param InNumThreads Number of worker threads (0 = auto-detect based on CPU cores)
     * @param InThreadStackSize Stack size for each thread in bytes (0 = use default)
     * @param InThreadPriority Priority for worker threads
     * @param InThreadName Base name for worker threads (will be numbered)
     */
    FThreadPool(
        int32 InNumThreads = 0,
        uint32 InThreadStackSize = 0,
        EThreadPriority InThreadPriority = TPri_Normal,
        const FString& InThreadName = TEXT("HorizonWorker")
    );
    
    /**
     * Destructor - shuts down the thread pool and waits for all threads to complete
     * @note This will block until all pending tasks are completed
     */
    ~FThreadPool();
    
    /**
     * Gets the singleton instance of the thread pool
     * Creates the instance if it doesn't exist
     * @return Shared pointer to the thread pool instance
     */
    static TSharedPtr<FThreadPool> Get();
    
    /**
     * Shuts down and releases the singleton instance
     * Should only be called during application shutdown
     * @note This will block until all threads are safely terminated
     */
    static void ShutdownSingleton();
    
    /**
     * @name Task Execution
     * Methods for executing tasks on the thread pool
     * @{
     */

    /**
     * Enqueues a task for asynchronous execution
     * The task will be executed when a worker thread becomes available
     * @param Function The task function to execute
     * @return True if task was enqueued successfully, false if thread pool is shutting down
     */
    bool EnqueueTask(FTaskFunction Function);
    
    /**
     * Enqueues a task and waits for its completion
     * This is a blocking operation that will wait until the task completes
     * @param Function The task function to execute
     * @param TimeoutSeconds Maximum time to wait in seconds (0 = wait forever)
     * @return Task execution result, or false on timeout/failure
     */
    bool EnqueueAndWait(FTaskFunction Function, float TimeoutSeconds = 0.0f);
    
    /** @} */

    /**
     * @name Status and Statistics
     * Methods for monitoring thread pool performance
     * @{
     */

    /**
     * Gets the number of pending tasks in the queue
     * @return Number of tasks waiting to be executed
     */
    int32 GetPendingTaskCount() const;
    
    /**
     * Checks if there are any pending tasks
     * @return True if there are tasks waiting to be executed
     */
    bool HasPendingTasks() const;
    
    /**
     * Waits for all pending tasks to complete
     * @param TimeoutSeconds Timeout in seconds (0 = wait forever)
     * @return True if all tasks completed, false on timeout
     */
    bool WaitForAll(float TimeoutSeconds = 0.0f);
    
    /**
     * Shuts down the thread pool
     */
    void Shutdown();
    
    /**
     * Gets the number of worker threads
     * @return Worker thread count
     */
    int32 GetThreadCount() const { return Workers.Num(); }
    
    /**
     * Gets the total number of tasks processed
     * @return Total task count
     */
    int64 GetTotalTaskCount() const { return TotalTaskCount.load(); }

private:
    /** Worker thread implementation */
    class FWorker : public FRunnable
    {
    public:
        /**
         * Constructor
         * @param InPool Owner thread pool
         * @param InWorkerId Worker ID
         */
        FWorker(FThreadPool* InPool, int32 InWorkerId);
        
        /** Destructor */
        virtual ~FWorker();
        
        // FRunnable interface
        virtual bool Init() override;
        virtual uint32 Run() override;
        virtual void Stop() override;
        virtual void Exit() override;
        
        /**
         * Signals the worker to stop
         */
        void RequestStop() { bStopRequested = true; }
        
        /**
         * Check if stop is requested
         */
        bool IsStopRequested() const { return bStopRequested; }
        
        /**
         * Sets the thread pointer
         */
        void SetThread(FRunnableThread* InThread) { Thread = InThread; }
        
    private:
        FThreadPool* Pool;
        int32 WorkerId;
        FThreadSafeBool bStopRequested;
        FRunnableThread* Thread;
    };
    
    /**
     * Internal function to dequeue a task
     * @param OutTask Output task
     * @return True if a task was dequeued
     */
    bool DequeueTask(FTask& OutTask);
    
    /** Thread pool shutdown flag */
    std::atomic<bool> bShutdown;
    
    /** Worker threads */
    TArray<FWorker*> Workers;
    
    /** Thread objects */
    TArray<FRunnableThread*> Threads;
    
    /** Task queue */
    mutable FCriticalSection QueueLock;
    TQueue<FTask> TaskQueue;
    
    /** Queue size tracking (since TQueue doesn't have Num()) */
    std::atomic<int32> QueueSize{0};
    
    /** Event for signaling when tasks are available */
    FEvent* TaskAvailableEvent;
    
    /** Total task count */
    std::atomic<int64> TotalTaskCount;
    
    /** Singleton instance */
    static TSharedPtr<FThreadPool> ThreadPoolInstance;
};

} // namespace Threading
} // namespace Horizon 