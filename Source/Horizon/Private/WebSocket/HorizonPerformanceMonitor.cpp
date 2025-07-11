#include "WebSocket/HorizonPerformanceMonitor.h"
#include "Core/Horizon.h"
#include "Misc/ScopeLock.h"
#include "HAL/PlatformTime.h"

namespace Horizon
{
namespace WebSocket
{

    static FString FormatBytesPerSecond(int64 BytesPerSec);

// Static instance
TSharedPtr<FHorizonPerformanceMonitor> FHorizonPerformanceMonitor::Instance;

// Get singleton instance
TSharedPtr<FHorizonPerformanceMonitor> FHorizonPerformanceMonitor::Get()
{
    if (!Instance.IsValid())
    {
        Instance = TSharedPtr<FHorizonPerformanceMonitor>(new FHorizonPerformanceMonitor());
    }
    return Instance;
}

FHorizonPerformanceMonitor::FHorizonPerformanceMonitor()
    : bActive(false)
    , StartTime(FPlatformTime::Seconds())
    , LastUpdateTime(StartTime)
{
    // Reset all metrics
    Reset();
}

void FHorizonPerformanceMonitor::Initialize(int32 InThreadPoolSize)
{
    FScopeLock Lock(&MetricsLock);
    Metrics.ThreadPoolSize = InThreadPoolSize;
    bActive = true;
    StartTime = FPlatformTime::Seconds();
    LastUpdateTime = StartTime;
    UE_LOG(LogHorizon, Log, TEXT("Performance monitoring initialized with %d threads"), InThreadPoolSize);
}

void FHorizonPerformanceMonitor::Reset()
{
    FScopeLock Lock(&MetricsLock);
    
    // Reset metrics
    Metrics = FPerformanceMetrics();
    Metrics.ThreadPoolSize = Metrics.ThreadPoolSize; // Preserve thread pool size
    
    // Reset atomic counters
    SentCount = 0;
    ReceivedCount = 0;
    SentBytes = 0;
    ReceivedBytes = 0;
    ConnectionCounter = 0;
    DisconnectionCounter = 0;
    ErrorCounter = 0;
    
    // Reset tracking variables
    StartTime = FPlatformTime::Seconds();
    LastUpdateTime = StartTime;
    SentLastSecond = 0.0;
    ReceivedLastSecond = 0.0;
    BytesSentLastSecond = 0.0;
    BytesReceivedLastSecond = 0.0;
    
    UE_LOG(LogHorizon, Log, TEXT("Performance metrics reset"));
}

void FHorizonPerformanceMonitor::Update(float DeltaTime)
{
    if (!bActive)
    {
        return;
    }
    
    const double CurrentTime = FPlatformTime::Seconds();
    const double TimeSinceLastUpdate = CurrentTime - LastUpdateTime;
    
    if (TimeSinceLastUpdate < 0.1) // Only update every 100ms
    {
        return;
    }
    
    // Update metrics with current atomic values
    const uint64 CurrentSentCount = SentCount.load();
    const uint64 CurrentReceivedCount = ReceivedCount.load();
    const uint64 CurrentSentBytes = SentBytes.load();
    const uint64 CurrentReceivedBytes = ReceivedBytes.load();
    const uint64 CurrentConnections = ConnectionCounter.load();
    const uint64 CurrentDisconnections = DisconnectionCounter.load();
    const uint64 CurrentErrors = ErrorCounter.load();
    
    FScopeLock Lock(&MetricsLock);
    
    // Calculate throughput
    const double MessagesSent = static_cast<double>(CurrentSentCount - SentLastSecond);
    const double MessagesReceived = static_cast<double>(CurrentReceivedCount - ReceivedLastSecond);
    const double BytesSent = static_cast<double>(CurrentSentBytes - BytesSentLastSecond);
    const double BytesReceived = static_cast<double>(CurrentReceivedBytes - BytesReceivedLastSecond);
    
    const double MessageThroughput = MessagesSent / TimeSinceLastUpdate;
    const double ByteThroughput = BytesSent / TimeSinceLastUpdate;
    
    // Update metrics
    Metrics.TotalMessagesSent = CurrentSentCount;
    Metrics.TotalMessagesReceived = CurrentReceivedCount;
    Metrics.TotalBytesSent = CurrentSentBytes;
    Metrics.TotalBytesReceived = CurrentReceivedBytes;
    Metrics.ConnectionCount = CurrentConnections;
    Metrics.DisconnectionCount = CurrentDisconnections;
    Metrics.ErrorCount = CurrentErrors;
    Metrics.UptimeSeconds = CurrentTime - StartTime;
    
    // Update throughput with rolling average
    Metrics.ThroughputMessagesPerSecond = UpdateRollingAverage(
        Metrics.ThroughputMessagesPerSecond, MessageThroughput, 0.3);
    Metrics.ThroughputBytesPerSecond = UpdateRollingAverage(
        Metrics.ThroughputBytesPerSecond, ByteThroughput, 0.3);
    
    // Update tracking variables
    SentLastSecond = CurrentSentCount;
    ReceivedLastSecond = CurrentReceivedCount;
    BytesSentLastSecond = CurrentSentBytes;
    BytesReceivedLastSecond = CurrentReceivedBytes;
    LastUpdateTime = CurrentTime;
}

void FHorizonPerformanceMonitor::TrackMessageSent(int32 Size, double LatencyMs)
{
    if (!bActive)
    {
        return;
    }
    
    // Update atomic counters
    SentCount++;
    SentBytes += Size;
    
    FScopeLock Lock(&MetricsLock);
    
    // Update average message size
    const double TotalMessages = static_cast<double>(Metrics.TotalMessagesSent + 1);
    Metrics.AverageMessageSize = ((Metrics.AverageMessageSize * (TotalMessages - 1)) + Size) / TotalMessages;
    
    // Update latency metrics if provided
    if (LatencyMs > 0.0)
    {
        // Update rolling average latency
        Metrics.AverageSendLatency = UpdateRollingAverage(Metrics.AverageSendLatency, LatencyMs);
        
        // Update peak latency
        if (LatencyMs > Metrics.PeakSendLatency)
        {
            Metrics.PeakSendLatency = LatencyMs;
        }
    }
}

void FHorizonPerformanceMonitor::TrackMessageReceived(int32 Size, double ProcessingTimeMs)
{
    if (!bActive)
    {
        return;
    }
    
    // Update atomic counters
    ReceivedCount++;
    ReceivedBytes += Size;
    
    FScopeLock Lock(&MetricsLock);
    
    // Update average message size
    const double TotalMessages = static_cast<double>(Metrics.TotalMessagesReceived + 1);
    Metrics.AverageMessageSize = ((Metrics.AverageMessageSize * (TotalMessages - 1)) + Size) / TotalMessages;
    
    // Update processing time metrics if provided
    if (ProcessingTimeMs > 0.0)
    {
        // Update rolling average processing time
        Metrics.AverageProcessingTime = UpdateRollingAverage(Metrics.AverageProcessingTime, ProcessingTimeMs);
        
        // Update peak processing time
        if (ProcessingTimeMs > Metrics.PeakProcessingTime)
        {
            Metrics.PeakProcessingTime = ProcessingTimeMs;
        }
    }
}

void FHorizonPerformanceMonitor::TrackConnection()
{
    if (!bActive)
    {
        return;
    }
    
    ConnectionCounter++;
    
    FScopeLock Lock(&MetricsLock);
    Metrics.ActiveConnections++;
}

void FHorizonPerformanceMonitor::TrackDisconnection()
{
    if (!bActive)
    {
        return;
    }
    
    DisconnectionCounter++;
    
    FScopeLock Lock(&MetricsLock);
    Metrics.ActiveConnections = FMath::Max(0, Metrics.ActiveConnections - 1);
}

void FHorizonPerformanceMonitor::TrackError()
{
    if (!bActive)
    {
        return;
    }
    
    ErrorCounter++;
}

void FHorizonPerformanceMonitor::TrackPendingTasks(int32 PendingCount)
{
    if (!bActive)
    {
        return;
    }
    
    FScopeLock Lock(&MetricsLock);
    Metrics.PendingTasks = PendingCount;
}

FHorizonPerformanceMonitor::FPerformanceMetrics FHorizonPerformanceMonitor::GetMetrics() const
{
    FScopeLock Lock(&MetricsLock);
    return Metrics;
}

FString FHorizonPerformanceMonitor::GetStatsAsString(bool bIncludeDetailedStats) const
{
    FScopeLock Lock(&MetricsLock);
    
    // Format throughput values
    const FString BytesPerSecond = FormatBytesPerSecond(static_cast<int64>(Metrics.ThroughputBytesPerSecond));
    
    // Basic stats
    FString Stats = FString::Printf(
        TEXT("Sent: %llu msgs (%llu bytes) | Recv: %llu msgs (%llu bytes) | Throughput: %.1f msg/s (%s) | Active: %d | Errors: %llu"),
        Metrics.TotalMessagesSent,
        Metrics.TotalBytesSent,
        Metrics.TotalMessagesReceived,
        Metrics.TotalBytesReceived,
        Metrics.ThroughputMessagesPerSecond,
        *BytesPerSecond,
        Metrics.ActiveConnections,
        Metrics.ErrorCount
    );
    
    // Add detailed stats if requested
    if (bIncludeDetailedStats)
    {
        Stats += FString::Printf(
            TEXT("\nUptime: %.1fs | Avg Size: %.1f bytes | Latency: %.1fms | Processing: %.1fms | Connections: %llu | Disconnections: %llu | Threads: %d | Pending: %d"),
            Metrics.UptimeSeconds,
            Metrics.AverageMessageSize,
            Metrics.AverageSendLatency,
            Metrics.AverageProcessingTime,
            Metrics.ConnectionCount,
            Metrics.DisconnectionCount,
            Metrics.ThreadPoolSize,
            Metrics.PendingTasks
        );
    }
    
    return Stats;
}

void FHorizonPerformanceMonitor::SetActive(bool bEnable)
{
    const bool bWasActive = bActive.exchange(bEnable);
    
    if (bEnable && !bWasActive)
    {
        UE_LOG(LogHorizon, Log, TEXT("Performance monitoring enabled"));
        StartTime = FPlatformTime::Seconds();
        LastUpdateTime = StartTime;
    }
    else if (!bEnable && bWasActive)
    {
        UE_LOG(LogHorizon, Log, TEXT("Performance monitoring disabled"));
    }
}

double FHorizonPerformanceMonitor::UpdateRollingAverage(double CurrentAvg, double NewValue, double Weight)
{
    return (CurrentAvg * (1.0 - Weight)) + (NewValue * Weight);
}

// Helper function to format bytes per second
FString FormatBytesPerSecond(int64 BytesPerSec)
{
    const double KB = 1024.0;
    const double MB = KB * 1024.0;
    const double GB = MB * 1024.0;
    
    if (BytesPerSec < KB)
    {
        return FString::Printf(TEXT("%lld B/s"), BytesPerSec);
    }
    else if (BytesPerSec < MB)
    {
        return FString::Printf(TEXT("%.2f KB/s"), BytesPerSec / KB);
    }
    else if (BytesPerSec < GB)
    {
        return FString::Printf(TEXT("%.2f MB/s"), BytesPerSec / MB);
    }
    else
    {
        return FString::Printf(TEXT("%.2f GB/s"), BytesPerSec / GB);
    }
}

} // namespace WebSocket
} // namespace Horizon 