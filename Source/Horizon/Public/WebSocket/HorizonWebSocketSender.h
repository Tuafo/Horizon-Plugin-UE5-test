#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"

class UHorizonWebSocketClient;
class FSocket;

class HORIZON_API FHorizonWebSocketSender
{
public:
    FHorizonWebSocketSender(UHorizonWebSocketClient* InClient);
    ~FHorizonWebSocketSender();

    bool SendData(const TArray<uint8>& Data);
    void HandleOutgoingMessages();
    bool SendMessageDataImmediate(const TArray<uint8>& FrameData);
    bool SendMessageImmediate(const FString& Message);
    bool SendBinaryMessageImmediate(const TArray<uint8>& Data);

private:
    UHorizonWebSocketClient* Client;
    FCriticalSection* SocketMutex;
}; 