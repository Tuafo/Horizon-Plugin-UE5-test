#include "WebSocket/HorizonWebSocketSender.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketProtocol.h"
#include "Core/Horizon.h"
#include "Sockets.h"

FHorizonWebSocketSender::FHorizonWebSocketSender(UHorizonWebSocketClient* InClient)
    : Client(InClient)
    , SocketMutex(&InClient->SocketMutex)
{
}

FHorizonWebSocketSender::~FHorizonWebSocketSender()
{
}

bool FHorizonWebSocketSender::SendData(const TArray<uint8>& Data)
{
    return Client->SendSocketData(Data);
}

void FHorizonWebSocketSender::HandleOutgoingMessages()
{
    // Handle text messages
    FString OutgoingMessage;
    while (Client->DequeueOutgoingMessage(OutgoingMessage))
    {
        TArray<uint8> Frame = FHorizonWebSocketProtocol::CreateWebSocketFrame(OutgoingMessage, false);
        if (SendData(Frame))
        {
            Client->OnWebSocketMessageSent(OutgoingMessage);
        }
    }

    // Handle binary messages
    TArray<uint8> OutgoingBinary;
    while (Client->DequeueOutgoingBinaryMessage(OutgoingBinary))
    {
        if (SendData(OutgoingBinary))
        {
            // For binary messages, we'll just log the size
            Client->OnWebSocketMessageSent(FString::Printf(TEXT("Binary data (%d bytes)"), OutgoingBinary.Num()));
        }
    }
}

bool FHorizonWebSocketSender::EnqueueMessage(const FString& Message)
{
    if (Message.IsEmpty())
    {
        return false;
    }
    
    if (!Client->IsConnected())
    {
        Client->LogSocketMessage(FString::Printf(TEXT("Cannot enqueue message, not connected: %s"), *Message), true);
        return false;
    }

    // Add to the client's queue for processing by the worker thread
    Client->OutgoingMessages.Enqueue(Message);
    Client->LogSocketMessage(FString::Printf(TEXT("Queued message: %s"), *Message));
    
    return true;
}

bool FHorizonWebSocketSender::EnqueueBinaryMessage(const TArray<uint8>& Data)
{
    if (Data.Num() == 0)
    {
        return false;
    }
    
    if (!Client->IsConnected())
    {
        Client->LogSocketMessage(FString::Printf(TEXT("Cannot enqueue binary message, not connected: %d bytes"), Data.Num()), true);
        return false;
    }

    // Add to the client's queue for processing by the worker thread
    Client->OutgoingBinaryMessages.Enqueue(Data);
    Client->LogSocketMessage(FString::Printf(TEXT("Queued binary message: %d bytes"), Data.Num()));
    
    return true;
} 