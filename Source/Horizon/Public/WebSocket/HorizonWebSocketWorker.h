#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "HAL/ThreadSafeBool.h"
#include <atomic>

// Forward declarations
class UHorizonWebSocketClient;
class FHorizonWebSocketSender;
class FHorizonWebSocketReceiver;
class UHorizonWebSocketComponent;

/**
 * HorizonWebSocketWorker
 * Manages WebSocket communication on a separate thread
 */
class HORIZON_API FHorizonWebSocketWorker : public FRunnable
{
	friend class UHorizonWebSocketClient;
	friend class UHorizonWebSocketComponent;
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
	
	// Message enqueueing methods (non-blocking)
	bool EnqueueMessage(const FString& Message);
	bool EnqueueBinaryMessage(const TArray<uint8>& Data);

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

	// Sender and Receiver
	TUniquePtr<FHorizonWebSocketSender> Sender;
	TUniquePtr<FHorizonWebSocketReceiver> Receiver;

	// Internal methods
	bool PerformHandshake();
	bool SendData(const TArray<uint8>& Data);
	bool ReceiveData(TArray<uint8>& OutData);
	virtual void HandleIncomingMessages();
	virtual void HandleOutgoingMessages();

	// Process incoming messages
	void ProcessIncomingMessageImmediate(const TArray<uint8>& Data);

private:
	std::atomic<bool> bProcessingMessage{ false };
}; 