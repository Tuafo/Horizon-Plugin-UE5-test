#pragma once

#include "CoreMinimal.h"

class ISocketSubsystem;
class FInternetAddr;
class FSocket;

namespace Horizon
{
namespace Transport
{

/**
 * WebSocketConnection handles low-level socket communication for WebSockets.
 * This class is responsible for network I/O operations and manages the raw socket.
 */
class HORIZON_API FWebSocketConnection
{
public:
    /** Constructor */
    FWebSocketConnection();
    
    /** Destructor */
    ~FWebSocketConnection();
    
    /**
     * Connects to a WebSocket server
     * @param Host Hostname or IP address
     * @param Port Server port
     * @param bSecure Whether to use secure connection (WSS)
     * @return True if connection initiated successfully
     */
    bool Connect(const FString& Host, int32 Port, bool bSecure = false);
    
    /**
     * Disconnects from the server
     */
    void Disconnect();
    
    /**
     * Sends data over the socket
     * @param Data Data to send
     * @param bImmediately If true, blocks until data is sent
     * @return True if data was sent successfully
     */
    bool Send(const TArray<uint8>& Data, bool bImmediately = false);
    
    /**
     * Receives data from the socket
     * @param OutData Output data buffer
     * @return True if data was received
     */
    bool Receive(TArray<uint8>& OutData);
    
    /**
     * Checks if the socket has pending data
     * @param OutPendingDataSize Size of pending data if any
     * @return True if data is available
     */
    bool HasPendingData(uint32& OutPendingDataSize);
    
    /**
     * Checks if the socket is valid and connected
     * @return True if connected
     */
    bool IsConnected() const;
    
    /**
     * Sets socket options
     * @param bNoDelay Whether to disable Nagle's algorithm
     * @param bNonBlocking Whether socket is non-blocking
     * @param SendBufferSize Size of send buffer (0 = system default)
     * @param ReceiveBufferSize Size of receive buffer (0 = system default)
     */
    void SetSocketOptions(bool bNoDelay = true, bool bNonBlocking = true, int32 SendBufferSize = 0, int32 ReceiveBufferSize = 0);

private:
    /** The socket instance */
    FSocket* Socket;
    
    /** Whether connection is secure (WSS) */
    bool bIsSecure;
    
    /** Socket subsystem reference */
    ISocketSubsystem* SocketSubsystem;
    
    /** Critical section for socket access */
    mutable FCriticalSection SocketLock;
};

} // namespace Transport
} // namespace Horizon 