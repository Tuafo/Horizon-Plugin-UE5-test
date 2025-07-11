#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HAL/ThreadSafeBool.h"
#include "HAL/CriticalSection.h"
#include "Containers/Queue.h"
#include "Tickable.h"
#include "WebSocket/HorizonMessage.h"
#include "Protocol/HorizonWebSocketProtocol.h"
#include "Core/HorizonDelegates.h"
#include <atomic>

#include "HorizonWebSocketClient.generated.h"

UENUM(BlueprintType)
enum class EHorizonWebSocketState : uint8
{
	Disconnected,
	Connecting,
	Connected,
	Closing,
	Closed,
	Failed,
	Reconnecting
};

// Forward declarations
class UHorizonWebSocketComponent;
class FSocket;

namespace Horizon
{
	namespace Threading
	{
		class FThreadPool;
	}
	
	namespace WebSocket
	{
		class FHorizonMessage;
	}
}

/**
 * @class UHorizonWebSocketClient
 * @brief High-performance WebSocket client for UE5 applications
 * 
 * The HorizonWebSocketClient provides a robust, thread-safe WebSocket implementation
 * designed for real-time communication with custom servers. It handles connection
 * management, message batching, automatic reconnection, and performance optimization.
 * 
 * Key Features:
 * - Thread-safe asynchronous message processing
 * - Configurable message batching for optimal throughput
 * - Automatic reconnection with exponential backoff
 * - Built-in heartbeat mechanism for connection health
 * - Performance monitoring and statistics
 * - Blueprint and C++ API support
 * 
 * Architecture:
 * The client operates on multiple threads:
 * - Main Thread: Handles UI updates and Blueprint callbacks
 * - Worker Threads: Process message serialization and network I/O
 * - Timer Thread: Manages heartbeat and reconnection logic
 * 
 * Message Flow:
 * 1. Messages are queued in thread-safe containers
 * 2. Batching system collects messages for efficient transmission
 * 3. Worker threads handle JSON serialization and network sending
 * 4. Incoming messages are processed asynchronously and dispatched to main thread
 * 
 * Usage Example:
 * @code
 * // Create and configure client
 * UHorizonWebSocketClient* Client = Subsystem->CreateWebSocket();
 * Client->Connect("ws://localhost:8080", "my-protocol");
 * 
 * // Send immediate message
 * Client->SendMessage("Hello Server", true); // true = high priority
 * 
 * // Send batched message using message factory
 * auto ChatMessage = FHorizonMessageFactory::CreateChatMessage("Player1", "Hello World", "general");
 * Client->SendMessage(ChatMessage);
 * @endcode
 * 
 * @see UHorizonWebSocketComponent for Blueprint integration
 * @see FHorizonMessageFactory for message creation
 */
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "Horizon WebSocket Client"))
class HORIZON_API UHorizonWebSocketClient : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	/** Default constructor - initializes default values and thread-safe containers */
	UHorizonWebSocketClient();
	
	/** Destructor - ensures proper cleanup of threads and connections */
	virtual ~UHorizonWebSocketClient();
	
	/**
	 * Associates this client with a component for automatic event forwarding
	 * @param Component The UHorizonWebSocketComponent that owns this client
	 */
	void SetOwningComponent(class UHorizonWebSocketComponent* Component);
	
	/**
	 * Sends a heartbeat message to maintain connection health
	 * Called automatically by the heartbeat timer when enabled
	 */
	void SendHeartbeat();

	// UObject interface
	
	/**
	 * Called when the object is being destroyed
	 * Ensures proper cleanup of network connections and worker threads
	 */
	virtual void BeginDestroy() override;
	
	/**
	 * Gets the world context for this client
	 * @return The UWorld instance this client belongs to
	 */
	virtual UWorld* GetWorld() const override;

	// FTickableGameObject interface
	
	/**
	 * Main tick function - processes queued messages and handles connection state
	 * @param DeltaTime Time elapsed since last tick
	 */
	virtual void Tick(float DeltaTime) override;
	
	/**
	 * Gets the stat ID for profiling
	 * @return TStatId for performance tracking
	 */
	virtual TStatId GetStatId() const override;
	
	/**
	 * Determines if this object should be ticked
	 * @return true if the client is active and should receive tick updates
	 */
	virtual bool IsTickable() const override { return !bShouldShutdown; }

	/**
	 * Initializes the WebSocket client with current configuration
	 * Sets up thread pool, message queues, and internal state
	 * Must be called before attempting to connect
	 */
	void Initialize();

	// Connection Information
	
	/**
	 * Gets the current server URL
	 * @return The WebSocket URL this client is connected to or attempting to connect to
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	FString GetServerURL() const;
	
	/**
	 * Gets the current WebSocket protocol
	 * @return The protocol string used for this connection
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	FString GetServerProtocol() const;
	
	/**
	 * Gets the current number of reconnection attempts
	 * @return Number of times reconnection has been attempted
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Info")
	int32 GetCurrentReconnectAttempts() const;

	// Connection Management
	
	/**
	 * Initiates a WebSocket connection to the specified server
	 * @param URL The WebSocket URL (ws:// or wss://)
	 * @param Protocol Optional protocol string for the WebSocket handshake
	 * @return true if the connection attempt was initiated successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Gracefully closes the WebSocket connection
	 * Sends a close frame and waits for server acknowledgment
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void Disconnect();

	/**
	 * Forces an immediate reconnection attempt
	 * Closes the current connection and initiates a new one
	 * Use this when you need to reset the connection state
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void ForceReconnect();

	// Message Transmission
	
	/**
	 * Sends a message through the WebSocket connection
	 * 
	 * This is the primary method for sending data to the server. Messages can be
	 * sent in two modes:
	 * - Batched: Messages are collected and sent in groups for efficiency
	 * - High Priority: Messages bypass batching and are sent immediately
	 * 
	 * Message Format:
	 * - Plain text messages are automatically wrapped in JSON format
	 * - Use UHorizonUtility helper functions for structured messages
	 * - All messages automatically include UUID and timestamp fields
	 * 
	 * @param Message The message content (plain text or JSON string)
	 * @param bHighPriority If true, bypasses batching and sends immediately
	 * @return true if the message was successfully queued for transmission
	 * 
	 * @see UHorizonUtility::CreateChatMessage() for chat messages
	 * @see UHorizonUtility::CreateGameActionMessage() for game events
	 * @see SendMessageNow() for immediate sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages")
	bool SendMessage(const FString& Message, bool bHighPriority = false);

	/**
	 * Sends a message immediately, bypassing batching
	 * 
	 * This method sends messages with the highest priority, bypassing the batching
	 * system for time-critical communications. Use this for:
	 * - Real-time position updates
	 * - Input events
	 * - Critical game state changes
	 * - Emergency notifications
	 * 
	 * The message is sent directly to the network layer without waiting for
	 * batch timers or size limits.
	 * 
	 * @param Message The message content (plain text or JSON string)
	 * @return true if the message was successfully sent immediately
	 * 
	 * @see SendMessage() for normal batched sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages", meta = (DisplayName = "Send Message Now"))
	bool SendMessageNow(const FString& Message);

	/**
	 * Sends binary data through the WebSocket connection
	 * 
	 * Binary messages are sent as WebSocket binary frames, which are more efficient
	 * for large data transfers or when you need to send non-text data.
	 * 
	 * @param Data The binary data to send
	 * @param bHighPriority If true, bypasses batching and sends immediately
	 * @return true if the binary message was successfully queued for transmission
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages")
	bool SendBinaryMessage(const TArray<uint8>& Data, bool bHighPriority = false);

	/**
	 * Sends binary data immediately, bypassing batching
	 * 
	 * @param Data The binary data to send immediately
	 * @return true if the binary message was successfully sent immediately
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messages", meta = (DisplayName = "Send Binary Message Now"))
	bool SendBinaryMessageNow(const TArray<uint8>& Data);

	// Connection Status
	
	/**
	 * Checks if the WebSocket is currently connected
	 * @return true if connected and ready to send/receive messages
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Status")
	bool IsConnected() const;

	/**
	 * Gets the current connection state
	 * @return Current state of the WebSocket connection
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Horizon|WebSocket|Status")
	EHorizonWebSocketState GetConnectionState() const;

	// Connection Configuration
	
	/**
	 * Enable or disable automatic reconnection
	 * When enabled, the client will automatically attempt to reconnect
	 * after connection loss with exponential backoff
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection")
	bool bAutoReconnect = true;

	/**
	 * Maximum number of reconnection attempts before giving up
	 * Set to 0 for unlimited attempts
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection", meta = (ClampMin = "0", ClampMax = "20"))
	int32 MaxReconnectAttempts = 5;

	/**
	 * Delay between reconnection attempts in seconds
	 * Each attempt uses exponential backoff: delay * (2 ^ attempt_number)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Connection", meta = (ClampMin = "0.5", ClampMax = "60.0"))
	float ReconnectDelaySeconds = 2.0f;

	// Heartbeat Configuration
	
	/**
	 * Enable heartbeat messages to maintain connection health
	 * Heartbeats help detect connection issues and prevent timeouts
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat")
	bool bEnableHeartbeat = true;

	/**
	 * Interval between heartbeat messages in seconds
	 * Shorter intervals provide faster disconnect detection but use more bandwidth
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat", meta = (ClampMin = "5.0", ClampMax = "300.0"))
	float HeartbeatIntervalSeconds = 30.0f;
	
	/**
	 * Message content for heartbeat packets
	 * Can be customized to match your server's expected format
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Heartbeat")
	FString HeartbeatMessage = TEXT("ping");
	
	// Logging Configuration
	
	/**
	 * Enable detailed logging for debugging
	 * Shows connection events, message flow, and error details
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Logging")
	bool bVerboseLogging = false;
	
	// Performance Configuration
	
	/**
	 * Maximum number of messages to include in a single batch
	 * 
	 * Higher values:
	 * - Reduce network overhead by combining multiple messages
	 * - Better throughput for high-frequency messaging
	 * - Slightly increased latency as messages wait for batch completion
	 * 
	 * Lower values:
	 * - Reduced latency as messages are sent more frequently
	 * - Higher network overhead due to more individual transmissions
	 * - Better for real-time applications requiring immediate responses
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance", meta = (ClampMin = "100", ClampMax = "100000"))
	int32 BatchSize = 500;
	
	/**
	 * Number of worker threads in the thread pool
	 * 
	 * 0 = Auto-configure based on CPU cores (recommended)
	 * 1+ = Manual thread count
	 * 
	 * More threads can improve performance when:
	 * - Sending high volumes of messages
	 * - Using complex message serialization
	 * - Running on multi-core systems
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance", meta = (ClampMin = "0", ClampMax = "10"))
	int32 ThreadPoolSize = 0;
	
	/**
	 * Maximum number of messages that can be queued for sending
	 * 
	 * Acts as a backpressure mechanism to prevent memory exhaustion
	 * when messages are generated faster than they can be transmitted.
	 * When the queue is full, new messages will be dropped.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance")
	int32 MaxPendingMessages = 50000;
	
	/**
	 * Enables message object pooling for memory efficiency
	 * 
	 * When enabled:
	 * - Message objects are reused to reduce garbage collection
	 * - Better performance for high-frequency messaging
	 * - Slightly more memory usage for the object pool
	 * 
	 * When disabled:
	 * - New message objects are created for each message
	 * - More garbage collection but lower baseline memory usage
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance")
	bool bEnableMessagePooling = true;
	
	/**
	 * Maximum time to wait before flushing a batch (in seconds)
	 * 
	 * This setting controls the trade-off between latency and throughput:
	 * - Higher values: Better batching efficiency, higher latency
	 * - Lower values: Lower latency, less efficient batching
	 * - 0.0: Disable batching entirely (send immediately)
	 * 
	 * Default: 0.01 seconds (10ms) provides good balance
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float BatchTimeoutSeconds = 0.01f;
	
	/**
	 * Disable batching entirely - send all messages immediately
	 * 
	 * When true:
	 * - All messages are sent with high priority
	 * - Minimum latency but maximum network overhead
	 * - Best for real-time applications where every millisecond matters
	 * 
	 * When false:
	 * - Messages are batched according to BatchSize and BatchTimeoutSeconds
	 * - Better throughput and network efficiency
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Performance")
	bool bDisableBatching = false;
	
	// Internal Interface Methods
	
	/**
	 * Internal method for sending raw socket data
	 * @param Data The raw byte data to send
	 * @return true if data was sent successfully
	 */
	bool SendSocketData(const TArray<uint8>& Data);
	
	/**
	 * Internal method for receiving raw socket data
	 * @param OutData Array to store received data
	 * @return true if data was received
	 */
	bool ReceiveSocketData(TArray<uint8>& OutData);
	
	/**
	 * Internal method for queuing incoming data for processing
	 * @param Data The raw incoming data to queue
	 */
	void EnqueueIncomingData(const TArray<uint8>& Data);
	
	/**
	 * Internal method for dequeuing outgoing messages
	 * @param OutMessage The message to send
	 * @return true if a message was dequeued
	 */
	bool DequeueOutgoingMessage(FString& OutMessage);
	
	/**
	 * Internal method for dequeuing outgoing binary messages
	 * @param OutData The binary data to send
	 * @return true if data was dequeued
	 */
	bool DequeueOutgoingBinaryMessage(TArray<uint8>& OutData);
	
	/**
	 * Internal method for logging socket messages
	 * @param Message The message to log
	 * @param bIsError Whether this is an error message
	 */
	void LogSocketMessage(const FString& Message, bool bIsError = false) const;
	
	/**
	 * Gets detailed performance statistics for this client
	 * @param bIncludeDetailedStats Whether to include detailed metrics
	 * @return String containing performance metrics
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Performance")
	FString GetPerformanceStats(bool bIncludeDetailedStats = false) const;
	
	// Event delegates - Blueprint bindable
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnected OnConnected;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessage OnMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketRawMessage OnRawMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessageSent OnMessageSent;
	
	// WebSocket frame methods
	TArray<uint8> CreateWebSocketFrame(const FString& Message);
	TArray<uint8> CreateBinaryFrame(const TArray<uint8>& Data);
	TArray<uint8> CreatePingFrame();
	TArray<uint8> CreatePongFrame();
	TArray<uint8> CreateCloseFrame(uint16 Code = 1000, const FString& Reason = TEXT(""));
	
	// Socket connection helper
	bool WaitForSocketConnection();
	
	// Friend classes for access
	friend class UHorizonWebSocketComponent;

protected:
	// Component reference for direct event callbacks
	UPROPERTY()
	class UHorizonWebSocketComponent* OwningComponent;

	// Internal connection state
	mutable FCriticalSection StateMutex;
	EHorizonWebSocketState ConnectionState;
	FThreadSafeBool bConnectionEstablished;

	// Reconnection handling
	int32 CurrentReconnectAttempts;
	FThreadSafeBool bShouldShutdown;
	FThreadSafeBool bCleaningUp;
	bool bIsReconnecting;
	double LastHeartbeatTime;
	double LastMessageReceivedTime;
	double ReconnectScheduledTime;

	// Socket and networking
	mutable FCriticalSection SocketMutex;
	FSocket* Socket;
	FString ServerURL;
	FString ServerHost;
	FString ServerPath;
	FString ServerProtocol;
	int32 ServerPort;
	bool bIsSecureConnection;
	
	// Handshake data
	FString WebSocketKey;
	Horizon::Protocol::FWebSocketProtocol::FExtensionFlags ExtensionFlags;
	TArray<FString> AcceptedExtensions;

	// Thread pool for async operations
	TSharedPtr<Horizon::Threading::FThreadPool> ThreadPool;
	
	// High-performance message queues
	std::atomic<int32> PendingMessagesCount{0};
	TQueue<TSharedPtr<Horizon::WebSocket::FHorizonMessage>> OutgoingHighPriorityMessages;
	TQueue<TSharedPtr<Horizon::WebSocket::FHorizonMessage>> OutgoingMessages;
	TQueue<TSharedPtr<Horizon::WebSocket::FHorizonMessage>> IncomingMessages;
	TQueue<TArray<uint8>> IncomingData;
	TQueue<TArray<uint8>> OutgoingBinaryMessages;
	
	// Batching support
	TArray<TSharedPtr<Horizon::WebSocket::FHorizonMessage>> BatchedMessages;
	double LastBatchSendTime;
	FCriticalSection BatchMutex;
	
	// Frame buffer for WebSocket frame processing
	TArray<uint8> FrameBuffer;

	// Statistics
	std::atomic<uint64> SentMessagesCount{0};
	std::atomic<uint64> ReceivedMessagesCount{0};
	std::atomic<uint64> SentBytesCount{0};
	std::atomic<uint64> ReceivedBytesCount{0};
	std::atomic<uint64> ErrorsCount{0};
	
	// Internal methods
	void CleanupWebSocket();
	void SetConnectionState(EHorizonWebSocketState NewState);
	void HandleReconnection();
	void LogMessage(const FString& Message, bool bIsError = false) const;
	bool ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure);
	
	// Connection methods
	bool PerformHandshake();
	bool SendHandshakeRequest();
	bool ProcessHandshakeResponse(const FString& Response);
	
	// Batch processing
	void ProcessOutgoingBatch(bool bForceFlush = false);
	
	// High-performance message handling
	void ProcessReceivedMessage(TSharedPtr<Horizon::WebSocket::FHorizonMessage> Message);
	void ProcessReceivedFrame(bool bFinal, uint8 Opcode, const TArray<uint8>& Payload);
	
	// Worker task management
	bool CreateWorkerTask(TFunction<void()> TaskFunction);
	
	// Event handlers
	void OnWebSocketConnected();
	void OnWebSocketConnectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void OnWebSocketMessage(const FString& Message);
	void OnWebSocketRawMessage(const TArray<uint8>& Data);
	void OnWebSocketMessageSent(const FString& Message);
};

/**
 * Simplified WebSocket Message API (Single-Client Architecture)
 * 
 * This WebSocket client uses a single, clear way to send messages:
 * - Use SendMessage() for all message types (text/JSON)
 * - Plain text is automatically wrapped in JSON format for server compatibility
 * - For structured messages, use FHorizonMessageFactory helper functions:
 *   - FHorizonMessageFactory::CreateChatMessage() for chat messages
 *   - FHorizonMessageFactory::CreateGameActionMessage() for game actions
 *   - FHorizonMessageFactory::CreateSystemMessage() for system messages
 *   - FHorizonMessageFactory::CreatePlayerStatusMessage() for player status updates
 *   - FHorizonMessageFactory::CreateJSONMessage() for custom messages
 * 
 * All FHorizonMessageFactory helper functions automatically add UUID and timestamp fields.
 * 
 * Example usage:
 *   // Simple text message (auto-wrapped with UUID and timestamp)
 *   Client->SendMessage("Hello World");
 *   
 *   // Chat message using FHorizonMessageFactory
 *   auto ChatMsg = FHorizonMessageFactory::CreateChatMessage("player123", "Hello!", "general");
 *   Client->SendMessage(ChatMsg);
 *   
 *   // Game action message
 *   TMap<FString, FString> ActionData;
 *   ActionData.Add("x", "100.5");
 *   ActionData.Add("y", "200.0");
 *   auto ActionMsg = FHorizonMessageFactory::CreateGameActionMessage("player123", "move", ActionData);
 *   Client->SendMessage(ActionMsg);
 *   
 *   // Custom structured message
 *   TMap<FString, FString> CustomData;
 *   CustomData.Add("custom_field", "value");
 *   auto CustomMsg = FHorizonMessageFactory::CreateJSONMessage("custom", "event", CustomData);
 *   Client->SendMessage(CustomMsg);
 */
