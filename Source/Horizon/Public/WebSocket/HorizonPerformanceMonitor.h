#pragma once

#include "CoreMinimal.h"
#include <atomic>

/**
 * @file HorizonPerformanceMonitor.h
 * @brief Real-time performance monitoring for WebSocket operations
 * 
 * This file provides comprehensive performance monitoring capabilities for the
 * Horizon WebSocket plugin, including throughput tracking, latency measurement,
 * and error rate monitoring. All metrics are thread-safe and updated in real-time.
 */

namespace Horizon
{
namespace WebSocket
{

/**
 * @class FHorizonPerformanceMonitor
 * @brief Real-time performance monitoring system for WebSocket operations
 * 
 * This class provides comprehensive performance monitoring for WebSocket connections,
 * tracking metrics such as message throughput, latency, error rates, and connection
 * statistics. All operations are thread-safe and designed for minimal performance impact.
 * 
 * The monitor uses a combination of atomic counters for lock-free operations and
 * protected sections for complex calculations. Metrics are updated in real-time
 * and can be queried at any time for monitoring dashboards or debugging.
 * 
 * Key Features:
 * - Thread-safe performance tracking
 * - Real-time throughput calculation
 * - Latency measurement (send and processing)
 * - Error rate monitoring
 * - Connection lifecycle tracking
 * - Rolling averages for smooth metrics
 * - Singleton pattern for global access
 * 
 * Usage:
 * @code{.cpp}
 * // Get the monitor instance
 * auto Monitor = FHorizonPerformanceMonitor::Get();
 * 
 * // Track a sent message
 * Monitor->TrackMessageSent(MessageSize, SendLatency);
 * 
 * // Get current metrics
 * auto Metrics = Monitor->GetMetrics();
 * UE_LOG(LogHorizon, Log, TEXT("Throughput: %.2f MB/s"), 
 *        Metrics.ThroughputBytesPerSecond / 1024.0 / 1024.0);
 * @endcode
 * 
 * @note All tracking methods are thread-safe and can be called from any thread
 * @see UHorizonSettings for performance monitoring configuration
 */
class HORIZON_API FHorizonPerformanceMonitor : public TSharedFromThis<FHorizonPerformanceMonitor>
{
public:
    /**
     * @struct FPerformanceMetrics
     * @brief Comprehensive performance metrics data structure
     * 
     * Contains all performance metrics tracked by the monitor, including
     * throughput, latency, error rates, and connection statistics.
     */
    struct FPerformanceMetrics
    {
        /** Total number of messages sent since monitoring started */
        uint64 TotalMessagesSent = 0;
        /** Total number of messages received since monitoring started */
        uint64 TotalMessagesReceived = 0;
        /** Total bytes sent since monitoring started */
        uint64 TotalBytesSent = 0;
        /** Total bytes received since monitoring started */
        uint64 TotalBytesReceived = 0;
        /** Total number of connections established */
        uint64 ConnectionCount = 0;
        /** Total number of disconnections */
        uint64 DisconnectionCount = 0;
        /** Total number of errors encountered */
        uint64 ErrorCount = 0;
        /** Average message size in bytes */
        double AverageMessageSize = 0.0;
        /** Average latency for sending messages in milliseconds */
        double AverageSendLatency = 0.0;
        /** Peak latency for sending messages in milliseconds */
        double PeakSendLatency = 0.0;
        /** Average processing time for received messages in milliseconds */
        double AverageProcessingTime = 0.0;
        /** Peak processing time for received messages in milliseconds */
        double PeakProcessingTime = 0.0;
        /** Current throughput in bytes per second */
        double ThroughputBytesPerSecond = 0.0;
        /** Current throughput in messages per second */
        double ThroughputMessagesPerSecond = 0.0;
        /** Total uptime in seconds */
        double UptimeSeconds = 0.0;
        /** Number of currently active connections */
        int32 ActiveConnections = 0;
        /** Number of pending tasks in the thread pool */
        int32 PendingTasks = 0;
        /** Current thread pool size */
        int32 ThreadPoolSize = 0;
    };

    /**
     * Gets the singleton instance of the performance monitor
     * @return Shared pointer to the global performance monitor instance
     */
    static TSharedPtr<FHorizonPerformanceMonitor> Get();

    /**
     * Initializes the performance monitor with thread pool information
     * @param InThreadPoolSize Size of the thread pool to monitor
     */
    void Initialize(int32 InThreadPoolSize);

    /**
     * Resets all metrics to zero
     * Useful for starting fresh monitoring sessions
     */
    void Reset();

    /**
     * Updates the performance metrics calculations
     * Should be called periodically to update throughput and rolling averages
     * @param DeltaTime Time elapsed since last update in seconds
     */
    void Update(float DeltaTime);

    /**
     * @name Message Tracking
     * Methods for tracking message send and receive operations
     * @{
     */

    /**
     * Tracks a message being sent
     * Updates sent message count, bytes sent, and latency metrics
     * @param Size Size of the message in bytes
     * @param LatencyMs Optional sending latency in milliseconds
     */
    void TrackMessageSent(int32 Size, double LatencyMs = 0.0);

    /**
     * Tracks a message being received
     * Updates received message count, bytes received, and processing time metrics
     * @param Size Size of the message in bytes
     * @param ProcessingTimeMs Optional processing time in milliseconds
     */
    void TrackMessageReceived(int32 Size, double ProcessingTimeMs = 0.0);

    /** @} */

    /**
     * @name Connection Tracking
     * Methods for tracking connection lifecycle events
     * @{
     */

    /**
     * Tracks a new connection being established
     * Updates connection count and active connections
     */
    void TrackConnection();

    /**
     * Tracks a connection being closed
     * Updates disconnection count and active connections
     */
    void TrackDisconnection();

    /**
     * Tracks an error occurrence
     * Updates error count for error rate calculations
     */
    void TrackError();

    /** @} */

    /**
     * @name Task Tracking
     * Methods for tracking background task performance
     * @{
     */

    /**
     * Updates the pending tasks count
     * Used for monitoring thread pool performance
     * @param PendingCount Current number of pending tasks
     */
    void TrackPendingTasks(int32 PendingCount);

    /** @} */

    /**
     * @name Metrics Access
     * Methods for accessing current performance metrics
     * @{
     */

    /**
     * Gets the current performance metrics
     * @return Complete performance metrics structure
     */
    FPerformanceMetrics GetMetrics() const;

    /**
     * Gets current metrics formatted as a human-readable string
     * @param bIncludeDetailedStats Whether to include detailed metrics
     * @return Formatted metrics string
     */
    FString GetStatsAsString(bool bIncludeDetailedStats = false) const;

    /**
     * Alias for GetStatsAsString for backward compatibility
     * @param bIncludeDetailedStats Whether to include detailed metrics
     * @return Formatted metrics string
     */
    FString GetMetricsString(bool bIncludeDetailedStats = false) const
    {
        return GetStatsAsString(bIncludeDetailedStats);
    }

    /** @} */

    /**
     * @name Monitor Control
     * Methods for controlling monitor behavior
     * @{
     */

    /**
     * Checks if the monitor is currently active
     * @return True if monitoring is active, false otherwise
     */
    bool IsActive() const { return bActive; }

    /**
     * Enables or disables the performance monitor
     * @param bEnable True to enable monitoring, false to disable
     */
    void SetActive(bool bEnable);

    /** @} */

private:
    /** Private constructor for singleton pattern */
    FHorizonPerformanceMonitor();

    /** Singleton instance */
    static TSharedPtr<FHorizonPerformanceMonitor> Instance;

    /** Critical section for thread-safe access to complex metrics */
    mutable FCriticalSection MetricsLock;

    /** Current performance metrics */
    FPerformanceMetrics Metrics;

    /**
     * @name Atomic Counters
     * Lock-free counters for high-frequency operations
     * @{
     */

    /** Atomic counter for sent messages */
    std::atomic<uint64> SentCount{0};
    /** Atomic counter for received messages */
    std::atomic<uint64> ReceivedCount{0};
    /** Atomic counter for sent bytes */
    std::atomic<uint64> SentBytes{0};
    /** Atomic counter for received bytes */
    std::atomic<uint64> ReceivedBytes{0};
    /** Atomic counter for connections */
    std::atomic<uint64> ConnectionCounter{0};
    /** Atomic counter for disconnections */
    std::atomic<uint64> DisconnectionCounter{0};
    /** Atomic counter for errors */
    std::atomic<uint64> ErrorCounter{0};

    /** @} */

    /**
     * @name Rolling Average Tracking
     * Variables for calculating rolling averages and throughput
     * @{
     */

    /** Messages sent in the last second */
    double SentLastSecond = 0.0;
    /** Messages received in the last second */
    double ReceivedLastSecond = 0.0;
    /** Bytes sent in the last second */
    double BytesSentLastSecond = 0.0;
    /** Bytes received in the last second */
    double BytesReceivedLastSecond = 0.0;
    /** Time when monitoring started */
    double StartTime = 0.0;
    /** Time of last update */
    double LastUpdateTime = 0.0;

    /** @} */

    /** Flag indicating if monitoring is active */
    std::atomic<bool> bActive{false};

    /**
     * Updates a rolling average with a new value
     * @param CurrentAvg Current average value
     * @param NewValue New value to incorporate
     * @param Weight Weight for the new value (0.0 to 1.0)
     * @return Updated average
     */
    static double UpdateRollingAverage(double CurrentAvg, double NewValue, double Weight = 0.1);
};

} // namespace WebSocket
} // namespace Horizon 