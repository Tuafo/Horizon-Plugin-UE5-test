// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Engine.h"
#include "Tickable.h"
#include "HAL/ThreadSafeBool.h"
#include "Async/AsyncWork.h"
#include "Templates/SharedPointer.h"
#include "Containers/Queue.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "HAL/CriticalSection.h"
#include "HorizonDelegates.h"

#include "HorizonWebSocketClient.generated.h"

// Forward declarations
class FHorizonWebSocketWorker;

UENUM(BlueprintType)
enum class EHorizonWebSocketState : uint8
{
	Disconnected		UMETA(DisplayName = "Disconnected"),
	Connecting			UMETA(DisplayName = "Connecting"),
	Connected			UMETA(DisplayName = "Connected"),
	Reconnecting		UMETA(DisplayName = "Reconnecting"),
	Failed				UMETA(DisplayName = "Failed"),
	Closing				UMETA(DisplayName = "Closing")
};

/**
 * Horizon WebSocket Client - Standalone Implementation
 * A robust WebSocket client with automatic reconnection, heartbeat monitoring, and comprehensive event handling
 * No external dependencies - uses only UE5 core networking
 */
UCLASS(BlueprintType, Blueprintable, Category = "Horizon")
class HORIZON_API UHorizonWebSocketClient : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UHorizonWebSocketClient();
	virtual ~UHorizonWebSocketClient();

	// UObject overrides
	virtual void BeginDestroy() override;
	virtual UWorld* GetWorld() const override;

	// FTickableGameObject overrides
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override { return true; }
	virtual bool IsTickableWhenPaused() const override { return false; }
	virtual bool IsTickableInEditor() const override { return false; }
	virtual TStatId GetStatId() const override;

	// Event delegates
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

	// Configuration properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration")
	bool bEnableHeartbeat = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration", meta = (ClampMin = "5", ClampMax = "300"))
	float HeartbeatIntervalSeconds = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration", meta = (ClampMin = "1", ClampMax = "10"))
	int32 MaxReconnectAttempts = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration")
	float ReconnectDelaySeconds = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration")
	FString HeartbeatMessage = TEXT("ping");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Configuration")
	bool bAutoReconnect = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Debug")
	bool bVerboseLogging = false;

	// Public API
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void Disconnect();

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging")
	bool SendMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging")
	bool SendBinaryMessage(const TArray<uint8>& Data);

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	bool IsConnected() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	EHorizonWebSocketState GetConnectionState() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerURL() const { return ServerURL; }

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerProtocol() const { return ServerProtocol; }

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	int32 GetCurrentReconnectAttempts() const { return CurrentReconnectAttempts; }

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void ForceReconnect();

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Heartbeat")
	void SendHeartbeat();

protected:
	// Internal methods
	void CleanupWebSocket();
	void SetConnectionState(EHorizonWebSocketState NewState);
	void HandleReconnection();
	void LogMessage(const FString& Message, bool bIsError = false) const;

	// WebSocket protocol implementation
	bool ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure);
	FString GenerateWebSocketKey();
	FString CreateHandshakeRequest(const FString& Host, const FString& Path, const FString& Key, const FString& Protocol);
	bool ValidateHandshakeResponse(const FString& Response, const FString& Key);
	
	// Frame handling
	void ProcessReceivedData();
	bool ProcessWebSocketFrame(const TArray<uint8>& FrameData);
	TArray<uint8> CreateWebSocketFrame(const FString& Message, bool bIsBinary = false);
	TArray<uint8> CreateCloseFrame(uint16 Code = 1000, const FString& Reason = TEXT(""));

	// Event handlers (called from worker thread)
	void OnWebSocketConnected();
	void OnWebSocketConnectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void OnWebSocketMessage(const FString& Message);
	void OnWebSocketRawMessage(const TArray<uint8>& Data);
	void OnWebSocketMessageSent(const FString& Message);

private:
	// Connection data
	FString ServerURL;
	FString ServerProtocol;
	FString ServerHost;
	int32 ServerPort;
	FString ServerPath;
	bool bIsSecureConnection;

	// State management
	EHorizonWebSocketState ConnectionState;
	int32 CurrentReconnectAttempts;
	FThreadSafeBool bShouldShutdown;
	FThreadSafeBool bIsReconnecting;

	// Socket connection
	FSocket* Socket;
	
	// Timing
	double LastHeartbeatTime;
	double LastMessageReceivedTime;
	double ReconnectScheduledTime;

	// Worker thread for socket operations
	TUniquePtr<FHorizonWebSocketWorker> WebSocketWorker;
	FRunnableThread* WorkerThread;

	// Message queues (thread-safe)
	TQueue<FString> OutgoingMessages;
	TQueue<TArray<uint8>> OutgoingBinaryMessages;
	TQueue<TArray<uint8>> IncomingData;

	// Frame buffer for partial frame reception
	TArray<uint8> FrameBuffer;

	// Thread safety
	mutable FCriticalSection StateMutex;
	mutable FCriticalSection SocketMutex;

	friend class FHorizonWebSocketWorker;
};

/**
 * Worker thread for WebSocket operations
 */
class FHorizonWebSocketWorker : public FRunnable
{
public:
	FHorizonWebSocketWorker(UHorizonWebSocketClient* InClient);
	virtual ~FHorizonWebSocketWorker();

	// FRunnable interface
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;

	// Control methods
	void StartConnection(const FString& Host, int32 Port, const FString& Path, const FString& Protocol, bool bIsSecure);
	void StopConnection();

private:
	// WebSocket client reference
	UHorizonWebSocketClient* Client;
	
	// Worker state
	FThreadSafeBool bStopRequested;
	FThreadSafeBool bIsConnecting;
	
	// Connection parameters
	FString ConnectHost;
	int32 ConnectPort;
	FString ConnectPath;
	FString ConnectProtocol;
	bool bConnectIsSecure;

	// Socket operations
	bool PerformHandshake();
	bool SendData(const TArray<uint8>& Data);
	bool ReceiveData(TArray<uint8>& OutData);
	void HandleIncomingMessages();
	void HandleOutgoingMessages();
};