#include "WebSocket/HorizonWebSocketReceiver.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketProtocol.h"
#include "Core/Horizon.h"
#include "Sockets.h"
#include "Async/Async.h"

FHorizonWebSocketReceiver::FHorizonWebSocketReceiver(UHorizonWebSocketClient* InClient)
    : Client(InClient)
    , SocketMutex(&InClient->SocketMutex)
{
}

FHorizonWebSocketReceiver::~FHorizonWebSocketReceiver()
{
}

bool FHorizonWebSocketReceiver::ReceiveData(TArray<uint8>& OutData)
{
    return Client->ReceiveSocketData(OutData);
}

void FHorizonWebSocketReceiver::HandleIncomingMessages()
{
    TArray<uint8> IncomingData;
    if (ReceiveData(IncomingData))
    {
        Client->EnqueueIncomingData(IncomingData);
    }
}

void FHorizonWebSocketReceiver::ProcessReceivedData()
{
    TArray<uint8> NewData;
    while (Client->IncomingData.Dequeue(NewData))
    {
        FrameBuffer.Append(NewData);

        // Process complete frames
        bool bIsFinal;
        uint8 Opcode;
        TArray<uint8> Payload;
        while (FHorizonWebSocketProtocol::ProcessWebSocketFrame(FrameBuffer, bIsFinal, Opcode, Payload))
        {
            // Handle different opcodes
            switch (Opcode)
            {
            case 0x1: // Text frame
            {
                FString Message = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData())));
                
                // Update last message received time
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();

                // Broadcast on game thread
                AsyncTask(ENamedThreads::GameThread, [this, Message]()
                    {
                        if (IsValid(Client))
                        {
                            Client->OnMessage.Broadcast(Message);
                        }
                    });
                break;
            }
            case 0x2: // Binary frame
            {
                // Update last message received time
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();

                // Broadcast on game thread
                AsyncTask(ENamedThreads::GameThread, [this, Payload]()
                    {
                        if (IsValid(Client))
                        {
                            Client->OnRawMessage.Broadcast(Payload, Payload.Num(), 0);
                        }
                    });
                break;
            }
            case 0x8: // Close frame
            {
                uint16 CloseCode = 1000;
                FString CloseReason;

                if (Payload.Num() >= 2)
                {
                    CloseCode = (Payload[0] << 8) | Payload[1];
                    if (Payload.Num() > 2)
                    {
                        CloseReason = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData() + 2)));
                    }
                }

                // Broadcast on game thread
                AsyncTask(ENamedThreads::GameThread, [this, CloseCode, CloseReason]()
                    {
                        if (IsValid(Client))
                        {
                            Client->OnClosed.Broadcast(CloseCode, CloseReason, true);
                        }
                    });

                Client->CleanupWebSocket();
                break;
            }
            case 0x9: // Ping frame
            {
                // Send pong response
                TArray<uint8> PongFrame = FHorizonWebSocketProtocol::CreateWebSocketFrame(TEXT(""), false);
                PongFrame[0] = (PongFrame[0] & 0xF0) | 0x0A; // Change opcode to pong
                Client->OutgoingBinaryMessages.Enqueue(PongFrame);
                break;
            }
            case 0xA: // Pong frame
            {
                // Handle pong (heartbeat response)
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();
                break;
            }
            }
        }
    }
}

void FHorizonWebSocketReceiver::ProcessIncomingMessageImmediate(const TArray<uint8>& Data)
{
    // Add data to frame buffer
    FrameBuffer.Append(Data);
    
    // Process frames immediately
    bool bIsFinal;
    uint8 Opcode;
    TArray<uint8> Payload;
    
    while (FHorizonWebSocketProtocol::ProcessWebSocketFrame(FrameBuffer, bIsFinal, Opcode, Payload))
    {
        // Handle different opcodes immediately
        switch (Opcode)
        {
        case 0x1: // Text frame
            {
                FString Message = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData())));
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();
                Client->OnWebSocketMessage(Message);
                break;
            }
        case 0x2: // Binary frame
            {
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();
                Client->OnWebSocketRawMessage(Payload);
                break;
            }
        case 0x8: // Close frame
            {
                uint16 CloseCode = 1000;
                FString CloseReason;

                if (Payload.Num() >= 2)
                {
                    CloseCode = (Payload[0] << 8) | Payload[1];
                    if (Payload.Num() > 2)
                    {
                        CloseReason = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData() + 2)));
                    }
                }
                
                Client->OnWebSocketClosed(CloseCode, CloseReason, true);
                break;
            }
        case 0x9: // Ping frame
            {
                // Send immediate pong response
                TArray<uint8> PongFrame = FHorizonWebSocketProtocol::CreateWebSocketFrame(TEXT(""), false);
                PongFrame[0] = (PongFrame[0] & 0xF0) | 0x0A; // Change opcode to pong
                Client->SendSocketData(PongFrame);
                break;
            }
        case 0xA: // Pong frame
            {
                // Handle pong (heartbeat response)
                Client->LastMessageReceivedTime = FPlatformTime::Seconds();
                break;
            }
        }
    }
} 