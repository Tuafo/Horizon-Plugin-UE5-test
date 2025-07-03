#pragma once

#include "CoreMinimal.h"

class UHorizonWebSocketClient;
class FSocket;

class HORIZON_API FHorizonWebSocketReceiver
{
public:
    FHorizonWebSocketReceiver(UHorizonWebSocketClient* InClient);
    ~FHorizonWebSocketReceiver();

    bool ReceiveData(TArray<uint8>& OutData);
    void HandleIncomingMessages();
    void ProcessReceivedData();
    void ProcessIncomingMessageImmediate(const TArray<uint8>& Data);

private:
    UHorizonWebSocketClient* Client;
    FCriticalSection* SocketMutex;
    TArray<uint8> FrameBuffer;
}; 