
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "HAL/ThreadSafeBool.h"
#include "HAL/CriticalSection.h"
#include "Containers/Queue.h"
#include "Sockets.h"
#include "Tickable.h"
#include "HorizonDelegates.h"

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
class FHorizonWebSocketWorker;

UCLASS(BlueprintType, Blueprintable)
class HORIZON_API UHorizonWebSocketClient : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UHorizonWebSocketClient();
	virtual ~UHorizonWebSocketClient();
	
	// External heartbeat function
	void SendHeartbeat();

	// UObject interface
	virtual void BeginDestroy() override;
	virtual UWorld* GetWorld() const override;

	// FTickableGameObject interface
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual bool IsTickable() const override { return !bShouldShutdown; }

	// GetServerURL
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WebSocket")
	FString GetServerURL() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WebSocket")
	FString GetServerProtocol() const;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WebSocket")
	int32 GetCurrentReconnectAttempts() const;

	// Connection management
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	void Disconnect();

	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	void ForceReconnect();

	// Message sending
	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool SendMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "WebSocket")
	bool SendBinaryMessage(const TArray<uint8>& Data);

	// Status
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WebSocket")
	bool IsConnected() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WebSocket")
	EHorizonWebSocketState GetConnectionState() const;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketConnected OnConnected;

	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketMessage OnMessage;

	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketRawMessage OnRawMessage;

	UPROPERTY(BlueprintAssignable, Category = "WebSocket")
	FOnHorizonWebSocketMessageSent OnMessageSent;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	bool bAutoReconnect = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	int32 MaxReconnectAttempts = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	float ReconnectDelaySeconds = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	bool bEnableHeartbeat = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	float HeartbeatIntervalSeconds = 30.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	FString HeartbeatMessage = TEXT("ping");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	bool bVerboseLogging = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WebSocket|Config")
	bool bImmediateProcessing = false;
	
protected:
	// Internal connection state
	mutable FCriticalSection StateMutex;
	EHorizonWebSocketState ConnectionState;

	// Reconnection handling
	int32 CurrentReconnectAttempts;
	FThreadSafeBool bShouldShutdown;
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

	// Worker thread
	TUniquePtr<FHorizonWebSocketWorker> WebSocketWorker;
	FRunnableThread* WorkerThread;

	// Message queues
	TQueue<FString, EQueueMode::Mpsc> OutgoingMessages;
	TQueue<TArray<uint8>, EQueueMode::Mpsc> OutgoingBinaryMessages;
	TQueue<TArray<uint8>, EQueueMode::Mpsc> IncomingData;

	// Frame processing
	TArray<uint8> FrameBuffer;

	// Internal methods
	void CleanupWebSocket();
	void SetConnectionState(EHorizonWebSocketState NewState);
	void HandleReconnection();
	void LogMessage(const FString& Message, bool bIsError = false) const;
	void ProcessReceivedData();

	// WebSocket protocol
	bool ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure);
	FString GenerateWebSocketKey();
	FString CreateHandshakeRequest(const FString& Host, const FString& Path, const FString& Key, const FString& Protocol);
	bool ValidateHandshakeResponse(const FString& Response, const FString& Key);
	bool ProcessWebSocketFrame(const TArray<uint8>& FrameData);
	TArray<uint8> CreateWebSocketFrame(const FString& Message, bool bIsBinary);
	TArray<uint8> CreateCloseFrame(uint16 Code, const FString& Reason);

	// Worker thread event handlers
	virtual void OnWebSocketConnected();
	virtual void OnWebSocketConnectionError(const FString& Error);
	virtual void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	virtual void OnWebSocketMessage(const FString& Message);
	virtual void OnWebSocketRawMessage(const TArray<uint8>& Data);
	virtual void OnWebSocketMessageSent(const FString& Message);

	// Immediate processing methods
	bool SendMessageImmediate(const FString& Message);
	bool SendBinaryMessageImmediate(const TArray<uint8>& Data);
	void ProcessIncomingDataImmediate(const TArray<uint8>& Data);

	friend class FHorizonWebSocketWorker;
};

class HORIZON_API FHorizonWebSocketWorker : public FRunnable
{
public:
	FHorizonWebSocketWorker(UHorizonWebSocketClient* InClient);
	virtual ~FHorizonWebSocketWorker();

	// FRunnable interface
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;

	// Connection management
	void StartConnection(const FString& Host, int32 Port, const FString& Path, const FString& Protocol, bool bIsSecure);
	void StopConnection();

protected:
	UHorizonWebSocketClient* Client;
	FThreadSafeBool bStopRequested;
	bool bIsConnecting;

	// Connection parameters
	FString ConnectHost;
	int32 ConnectPort;
	FString ConnectPath;
	FString ConnectProtocol;
	bool bConnectIsSecure;

	// Internal methods
	bool PerformHandshake();
	bool SendData(const TArray<uint8>& Data);
	bool ReceiveData(TArray<uint8>& OutData);
	virtual void HandleIncomingMessages();
	virtual void HandleOutgoingMessages();

	// Immediate processing support
	void ProcessIncomingMessageImmediate(const TArray<uint8>& Data);
	bool SendMessageDataImmediate(const TArray<uint8>& FrameData);

private:
	std::atomic<bool> bProcessingMessage{false};
};