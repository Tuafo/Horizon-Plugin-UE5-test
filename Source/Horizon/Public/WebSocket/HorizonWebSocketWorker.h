#pragma once

#include "CoreMinimal.h"
#include "HAL/Runnable.h"
#include "HAL/ThreadSafeBool.h"
#include <atomic>

// Forward declarations
class UHorizonWebSocketClient;

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
	std::atomic<bool> bProcessingMessage{ false };
}; 