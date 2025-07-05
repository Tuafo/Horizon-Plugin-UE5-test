#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"

class UHorizonWebSocketClient;
class UHorizonWebSocketComponent;
class FSocket;

/**
 * HorizonWebSocketSender
 * Responsible for all message sending operations
 */
class HORIZON_API FHorizonWebSocketSender
{
public:
    FHorizonWebSocketSender(UHorizonWebSocketClient* InClient);
    ~FHorizonWebSocketSender();

    // Core sending methods
    bool SendData(const TArray<uint8>& Data);
    void HandleOutgoingMessages();
    
    // Message enqueueing methods (non-blocking)
    bool EnqueueMessage(const FString& Message);
    bool EnqueueBinaryMessage(const TArray<uint8>& Data);

private:
    UHorizonWebSocketClient* Client;
    FCriticalSection* SocketMutex;
    
    friend class UHorizonWebSocketComponent;
}; 