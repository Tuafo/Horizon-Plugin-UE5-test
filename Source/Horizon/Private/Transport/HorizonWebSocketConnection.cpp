#include "Transport/HorizonWebSocketConnection.h"
#include "Core/Horizon.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "Misc/ScopeLock.h"

namespace Horizon
{
namespace Transport
{

FWebSocketConnection::FWebSocketConnection()
    : Socket(nullptr)
    , bIsSecure(false)
    , SocketSubsystem(nullptr)
{
    SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
}

FWebSocketConnection::~FWebSocketConnection()
{
    Disconnect();
}

bool FWebSocketConnection::Connect(const FString& Host, int32 Port, bool bSecure)
{
    // Make sure socket subsystem is available
    if (!SocketSubsystem)
    {
        UE_LOG(LogHorizon, Error, TEXT("Socket subsystem not available"));
        return false;
    }
    
    FScopeLock Lock(&SocketLock);
    
    // Clean up existing socket
    Disconnect();
    
    // Store connection type
    bIsSecure = bSecure;
    
    // Create TCP socket
    Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("HorizonWebSocketConnection"), bSecure);
    if (!Socket)
    {
        UE_LOG(LogHorizon, Error, TEXT("Failed to create socket"));
        return false;
    }
    
    // Set default socket options
    SetSocketOptions();
    
    // Resolve server address
    TSharedPtr<FInternetAddr> ServerAddr = SocketSubsystem->CreateInternetAddr();
    bool bIsValid = false;
    
    if (Host.IsNumeric())
    {
        ServerAddr->SetIp(*Host, bIsValid);
    }
    else
    {
        // Resolve hostname
        FAddressInfoResult Result = SocketSubsystem->GetAddressInfo(
            *Host, 
            nullptr, 
            EAddressInfoFlags::AllResultsWithMapping | EAddressInfoFlags::OnlyUsableAddresses,
            NAME_None,
            ESocketType::SOCKTYPE_Unknown);
            
        if (Result.ReturnCode != SE_NO_ERROR || Result.Results.Num() == 0)
        {
            UE_LOG(LogHorizon, Error, TEXT("Failed to resolve hostname: %s"), *Host);
            Disconnect();
            return false;
        }
        
        ServerAddr = Result.Results[0].Address;
        bIsValid = true;
    }
    
    // Set port
    ServerAddr->SetPort(Port);
    
    if (!bIsValid)
    {
        UE_LOG(LogHorizon, Error, TEXT("Invalid server address: %s:%d"), *Host, Port);
        Disconnect();
        return false;
    }
    
    // Connect to server
    bool bConnected = Socket->Connect(*ServerAddr);
    if (!bConnected && SocketSubsystem->GetLastErrorCode() != SE_EWOULDBLOCK)
    {
        UE_LOG(LogHorizon, Error, TEXT("Failed to connect to server: %s:%d (Error: %d)"), 
            *Host, Port, SocketSubsystem->GetLastErrorCode());
        Disconnect();
        return false;
    }
    
    return true;
}

void FWebSocketConnection::Disconnect()
{
    FScopeLock Lock(&SocketLock);
    
    if (Socket)
    {
        Socket->Close();
        SocketSubsystem->DestroySocket(Socket);
        Socket = nullptr;
    }
}

bool FWebSocketConnection::Send(const TArray<uint8>& Data, bool bImmediately)
{
    FScopeLock Lock(&SocketLock);
    
    if (!Socket)
    {
        return false;
    }
    
    int32 BytesSent = 0;
    bool bSuccess = Socket->Send(Data.GetData(), Data.Num(), BytesSent);
    
    if (bImmediately && bSuccess && BytesSent < Data.Num())
    {
        // Keep sending until all data is sent
        int32 TotalBytesSent = BytesSent;
        while (TotalBytesSent < Data.Num())
        {
            bSuccess = Socket->Send(Data.GetData() + TotalBytesSent, Data.Num() - TotalBytesSent, BytesSent);
            if (!bSuccess)
            {
                break;
            }
            
            TotalBytesSent += BytesSent;
        }
        
        return TotalBytesSent == Data.Num();
    }
    
    return bSuccess && BytesSent == Data.Num();
}

bool FWebSocketConnection::Receive(TArray<uint8>& OutData)
{
    FScopeLock Lock(&SocketLock);
    
    if (!Socket)
    {
        return false;
    }
    
    uint32 PendingDataSize = 0;
    if (!Socket->HasPendingData(PendingDataSize) || PendingDataSize == 0)
    {
        return false; // No data available
    }
    
    // Resize buffer to fit incoming data
    OutData.SetNumUninitialized(PendingDataSize);
    
    int32 BytesRead = 0;
    bool bSuccess = Socket->Recv(OutData.GetData(), OutData.Num(), BytesRead);
    
    if (!bSuccess || BytesRead <= 0)
    {
        OutData.Empty();
        return false;
    }
    
    // Resize buffer to actual bytes read
    if (BytesRead < OutData.Num())
    {
        OutData.SetNum(BytesRead);
    }
    
    return true;
}

bool FWebSocketConnection::HasPendingData(uint32& OutPendingDataSize)
{
    FScopeLock Lock(&SocketLock);
    
    if (!Socket)
    {
        OutPendingDataSize = 0;
        return false;
    }
    
    return Socket->HasPendingData(OutPendingDataSize);
}

bool FWebSocketConnection::IsConnected() const
{
    FScopeLock Lock(&SocketLock);
    
    if (!Socket)
    {
        return false;
    }
    
    // Check if socket is connected
    ESocketConnectionState ConnectionState = Socket->GetConnectionState();
    return ConnectionState == ESocketConnectionState::SCS_Connected;
}

void FWebSocketConnection::SetSocketOptions(bool bNoDelay, bool bNonBlocking, int32 SendBufferSize, int32 ReceiveBufferSize)
{
    FScopeLock Lock(&SocketLock);
    
    if (!Socket)
    {
        return;
    }
    
    // Set non-blocking mode
    Socket->SetNonBlocking(bNonBlocking);
    
    // Disable Nagle's algorithm for lower latency
    Socket->SetNoDelay(bNoDelay);
    
    // Set buffer sizes if specified
    if (SendBufferSize > 0)
    {
        Socket->SetSendBufferSize(SendBufferSize, SendBufferSize);
    }
    
    if (ReceiveBufferSize > 0)
    {
        Socket->SetReceiveBufferSize(ReceiveBufferSize, ReceiveBufferSize);
    }
}

} // namespace Transport
} // namespace Horizon 