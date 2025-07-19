# Horizon WebSocket Plugin for Unreal Engine 5

A high-performance, thread-safe WebSocket client implementation for Unreal Engine 5, designed for real-time communication with custom servers. Built from the ground up for single-player applications with enterprise-grade reliability and performance.

## 🚀 Key Features

- ✅ **Performance Optimized**: Advanced message batching and thread-pool architecture
- ✅ **Thread-Safe**: Complete thread safety with proper synchronization
- ✅ **Auto-Reconnection**: Intelligent reconnection with exponential backoff
- ✅ **Immediate Sending**: High-priority message bypassing for time-critical data
- ✅ **Blueprint Compatible**: Full Blueprint node support with comprehensive API
- ✅ **Message Pooling**: Memory-efficient object reuse for high-frequency messaging
- ✅ **Comprehensive Logging**: Detailed debugging and performance monitoring
- ✅ **WebSocket Compliant**: Full RFC 6455 implementation with WSS support
- ✅ **Single-Client Architecture**: Optimized for single-player games and applications

## 🏗️ Architecture Overview

The Horizon WebSocket Plugin follows a clean, scalable architecture designed for single-player applications:

```mermaid
graph TD
    subgraph "Game Instance Layer"
        GI[Game Instance]
        HS[Horizon Subsystem]
        GI --> HS
    end
    
    subgraph "Actor/Component Layer"
        AC[Your Actor]
        HC[Horizon WebSocket Component]
        AC --> HC
    end
    
    subgraph "Core WebSocket Layer"
        WC[Horizon WebSocket Client]
        TM[Thread Manager]
        MB[Message Batcher]
        PM[Performance Monitor]
        MF[Message Factory]
        
        WC --> TM
        WC --> MB
        WC --> PM
        WC --> MF
    end
    
    subgraph "Message System"
        MSG[Message Container]
        MP[Message Pool]
        MF --> MSG
        MSG --> MP
    end
    
    subgraph "Utility Layer"
        HU[Horizon Utility]
        HBL[Horizon Blueprint Library]
    end
    
    subgraph "Protocol Layer"
        WSP[WebSocket Protocol]
        MSG[Message System]
        CONN[Connection Manager]
    end
    
    HC --> HS
    HS --> WC
    WC --> WSP
    WC --> MSG
    WC --> CONN
    
    HC --> HBL
    WC --> HU
    MF --> MSG
    MSG --> MP
    
    WSP -.-> SERVER[WebSocket Server]
```

## 📊 Message Flow Architecture

Understanding how messages flow through the system is crucial for optimal performance:

```mermaid
sequenceDiagram
    participant BP as Blueprint/C++
    participant HC as WebSocket Component
    participant WC as WebSocket Client
    participant MB as Message Batcher
    participant TM as Thread Manager
    participant SERVER as WebSocket Server
    
    BP->>HC: Connect("ws://server:8080")
    HC->>WC: Create & Configure Client
    WC->>SERVER: WebSocket Handshake
    SERVER->>WC: Handshake Response
    WC->>HC: OnConnected Event
    HC->>BP: OnConnected Delegate
    
    BP->>HC: SendMessage("Hello Server")
    HC->>WC: QueueMessage(Message)
    
    alt Immediate Sending Mode
        WC->>TM: Execute Immediate Send
        TM->>SERVER: Send Message Directly
    else Batched Sending Mode
        WC->>MB: Add to Batch Queue
        MB->>MB: Wait for Batch Size/Timer
        MB->>TM: Execute Batch Send
        TM->>SERVER: Send Batched Messages
    end
    
    SERVER->>WC: Message Sent Confirmation
    WC->>HC: OnMessageSent Event
    HC->>BP: OnMessageSent Delegate
    
    SERVER->>WC: Incoming Message
    WC->>TM: Process on Background Thread
    TM->>WC: Parsed Message
    WC->>HC: OnMessage Event
    HC->>BP: OnMessage Delegate
    
    WC->>PM: Update Metrics
    PM->>PM: Calculate Throughput
    PM->>BP: Performance Stats (if requested)
```

## 🔧 Message Utility System

The plugin provides a comprehensive utility system for creating and sending messages:

```mermaid
graph TD
    subgraph "Message Creation Layer"
        UH[UHorizonUtility]
        subgraph "Utility Methods"
            TEXT[CreateJSONMessage]
            CHAT[CreateChatMessage]
            GAME[CreateGameActionMessage]
            SYS[CreateSystemMessage]
            STATUS[CreatePlayerStatusMessage]
            IMMEDIATE[SendMessageImmediately]
        end
        
        UH --> TEXT
        UH --> CHAT
        UH --> GAME
        UH --> SYS
        UH --> STATUS
        UH --> IMMEDIATE
    end
    
    subgraph "WebSocket Layer"
        WC[WebSocket Client]
        SEND[Send Methods]
        
        WC --> SEND
    end
    
    TEXT --> WC
    CHAT --> WC
    GAME --> WC
    SYS --> WC
    STATUS --> WC
    IMMEDIATE --> WC
```

### Key Benefits:

1. **Centralized Message Creation**: All message creation handled by `UHorizonUtility`
2. **Blueprint Integration**: Full Blueprint node support for all functions
3. **Type Safety**: Proper message validation and formatting
4. **Consistent Structure**: All messages follow the same JSON patterns
5. **Immediate Sending**: High-priority message bypassing for critical data

### Usage Examples:

```cpp
// Create messages using the utility
FString ChatMessage = UHorizonUtility::CreateChatMessage("player123", "Hello world!", "general");
FString GameMessage = UHorizonUtility::CreateGameActionMessage("player123", "jump", {{"x", "100"}, {"y", "200"}});
FString SystemMessage = UHorizonUtility::CreateSystemMessage("maintenance", {{"duration", "5 minutes"}});

// Send messages
WebSocket->SendMessage(ChatMessage);
UHorizonUtility::SendMessageImmediately(WebSocket, GameMessage);
```

## �🔄 Batching vs Immediate Sending

The plugin supports two distinct sending modes, each optimized for different use cases:

```mermaid
graph TD
    subgraph "Message Types"
        CRITICAL[Critical Messages]
        BULK[Bulk Messages]
    end
    
    subgraph "Immediate Sending Path"
        IS[Immediate Send]
        BT[Bypass Batching]
        DS[Direct Socket Send]
        
        CRITICAL --> IS
        IS --> BT
        BT --> DS
    end
    
    subgraph "Batched Sending Path"
        BS[Batch Queue]
        BW[Batch Wait]
        BC[Batch Combine]
        BSS[Batch Socket Send]
        
        BULK --> BS
        BS --> BW
        BW --> BC
        BC --> BSS
    end
    
    subgraph "Performance Impact"
        LOW[Low Latency - Higher CPU]
        HIGH[High Throughput - Lower CPU]
        
        DS --> LOW
        BSS --> HIGH
    end
```

## 🎯 Blueprint Integration

The plugin provides comprehensive Blueprint support with intuitive nodes:

```mermaid
graph LR
    subgraph "Connection Management"
        CBP[Create WebSocket]
        CONN[Connect]
        DISC[Disconnect]
        
        CBP --> CONN
        CONN --> DISC
    end
    
    subgraph "Message Handling"
        SEND[Send Message]
        RECV[On Message Received]
        SENT[On Message Sent]
        
        SEND --> SENT
        RECV --> SENT
    end
    
    subgraph "Status Monitoring"
        STAT[Get Connection State]
        PERF[Get Performance Stats]
        
        STAT --> PERF
    end
    
    subgraph "Event Handling"
        OCONN[On Connected]
        OERR[On Error]
        OCLOSE[On Closed]
        
        OCONN --> OERR
        OERR --> OCLOSE
    end
```

## 🧵 Threading and Performance

The plugin uses a sophisticated threading model for optimal performance:

```mermaid
graph TD
    subgraph "Main Game Thread"
        GT[Game Thread]
        UI[UI Updates]
        
        GT --> UI
    end
    
    subgraph "WebSocket Thread Pool"
        subgraph "Worker Threads"
            WT1[Worker Thread 1]
            WT2[Worker Thread 2]
            WT3[Worker Thread 3]
            WTN[Worker Thread N]
        end
        
        TM[Thread Manager]
        TM --> WT1
        TM --> WT2
        TM --> WT3
        TM --> WTN
    end
    
    subgraph "Performance Monitoring"
        PM[Performance Monitor]
        STATS[Statistics Collection]
        
        PM --> STATS
    end
    
    subgraph "Memory Management"
        MP[Message Pool]
        GC[Garbage Collection]
        
        MP --> GC
    end
    
    GT -.-> TM
    TM -.-> GT
    
    WT1 --> PM
    WT2 --> PM
    WT3 --> PM
    WTN --> PM
    
    WT1 --> MP
    WT2 --> MP
    WT3 --> MP
    WTN --> MP
```

## 🔧 Configuration and Settings

The plugin provides comprehensive configuration options through the Project Settings:

```mermaid
graph TD
    subgraph "Project Settings - Plugins - Horizon"
        subgraph "WebSocket Settings"
            WS_AUTO[Auto-connect on Start]
            WS_URL[Default Server URL]
            WS_PROTO[WebSocket Protocol]
            WS_TIMEOUT[Connection Timeout]
            WS_HEARTBEAT[Heartbeat Interval]
            WS_RECONNECT[Auto-reconnect Settings]
        end
        
        subgraph "Performance Settings"
            PERF_THREADS[Thread Pool Size]
            PERF_BATCH[Batch Size]
            PERF_DELAY[Batch Delay]
            PERF_POOL[Message Pool Size]
            PERF_BUFFER[Buffer Sizes]
        end
        
        subgraph "Logging Settings"
            LOG_LEVEL[Log Level]
            LOG_VERBOSE[Verbose Logging]
            LOG_CONN[Connection Events]
            LOG_MSG[Message Events]
            LOG_PERF[Performance Metrics]
        end
        
        subgraph "Security Settings"
            SEC_SSL[SSL Certificate Verification]
            SEC_INSECURE[Allow Insecure Connections]
            SEC_MAXSIZE[Maximum Message Size]
            SEC_TIMEOUT[Security Timeouts]
        end
        
        subgraph "Development Settings"
            DEV_DEBUG[Debug Mode]
            DEV_SERVERS[Debug Server URLs]
            DEV_AUTOCONNECT[Auto-connect in PIE]
            DEV_SIMULATE[Simulate Failures]
        end
    end
    
    WS_AUTO --> PERF_THREADS
    PERF_THREADS --> LOG_LEVEL
    LOG_LEVEL --> SEC_SSL
    SEC_SSL --> DEV_DEBUG
```

## 🎮 Usage Examples

### Blueprint Usage

1. **Add WebSocket Component to your Actor:**
   ```
   Components > Add Component > Horizon WebSocket Component
   ```

2. **Configure the component:**
   - Set `Auto Connect` to `true`
   - Set `Auto Connect URL` to your server (e.g., `ws://localhost:8080`)
   - Configure performance settings as needed

3. **Handle WebSocket events:**
   ```
   Event Graph:
   - Event OnConnected → Print "Connected to server!"
   - Event OnMessage → Print "Received: " + Message
   - Event OnClosed → Print "Disconnected from server"
   ```

4. **Send messages:**
   ```
   Input Event → WebSocket Component → Send Message → "Hello Server!"
   ```

### C++ Usage

1. **Include the necessary headers:**
   ```cpp
   #include "Utils/HorizonBlueprintLibrary.h"
   #include "WebSocket/HorizonWebSocketClient.h"
   #include "WebSocket/HorizonMessage.h"
   ```

2. **Create and configure a WebSocket client:**
   ```cpp
   // Create WebSocket client
   UHorizonWebSocketClient* WebSocket = UHorizonBlueprintLibrary::CreateWebSocket();
   
   // Bind to events
   WebSocket->OnConnected.AddDynamic(this, &AMyActor::OnWebSocketConnected);
   WebSocket->OnMessage.AddDynamic(this, &AMyActor::OnWebSocketMessage);
   WebSocket->OnClosed.AddDynamic(this, &AMyActor::OnWebSocketClosed);
   
   // Connect to server
   WebSocket->Connect(TEXT("ws://localhost:8080"));
   ```

3. **Handle WebSocket events:**
   ```cpp
   UFUNCTION()
   void AMyActor::OnWebSocketConnected(bool bSuccess)
   {
       if (bSuccess)
       {
           UE_LOG(LogTemp, Log, TEXT("Connected to WebSocket server"));
           
           // Create and send a message using the utility
           FString WelcomeMessage = UHorizonUtility::CreateChatMessage(
               TEXT("player123"), 
               TEXT("Hello from Unreal!"), 
               TEXT("general")
           );
           WebSocket->SendMessage(WelcomeMessage);
       }
   }
   
   UFUNCTION()
   void AMyActor::OnWebSocketMessage(const FString& Message)
   {
       UE_LOG(LogTemp, Log, TEXT("Received message: %s"), *Message);
       
       // Parse incoming message
       FString Namespace, Event, Data;
       if (UHorizonUtility::ParseJSONMessage(Message, Namespace, Event, Data))
       {
           UE_LOG(LogTemp, Log, TEXT("Parsed - Namespace: %s, Event: %s"), *Namespace, *Event);
       }
   }
   
   UFUNCTION()
   void AMyActor::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
   {
       UE_LOG(LogTemp, Log, TEXT("WebSocket closed: %d - %s"), StatusCode, *Reason);
   }
   ```

### Advanced C++ Usage

1. **Using the Horizon Subsystem directly:**
   ```cpp
   // Get the Horizon subsystem
   UHorizonSubsystem* HorizonSubsystem = GetGameInstance()->GetSubsystem<UHorizonSubsystem>();
   
   // Create and configure WebSocket
   UHorizonWebSocketClient* WebSocket = HorizonSubsystem->CreateWebSocket();
   WebSocket->SetBatchSize(1000);
   WebSocket->SetMaxPendingMessages(10000);
   
   // Connect with custom protocol
   WebSocket->Connect(TEXT("ws://localhost:8080"), TEXT("my-custom-protocol"));
   ```

2. **Performance monitoring:**
   ```cpp
   // Get performance metrics
   FString PerformanceStats = WebSocket->GetPerformanceStats(true);
   UE_LOG(LogTemp, Log, TEXT("WebSocket Performance: %s"), *PerformanceStats);
   
   // Check connection state
   EHorizonWebSocketState State = WebSocket->GetConnectionState();
   bool bIsConnected = WebSocket->IsConnected();
   ```

3. **Advanced message handling with utility:**
   ```cpp
   // Create different message types
   FString ChatMessage = UHorizonUtility::CreateChatMessage(
       TEXT("player123"), 
       TEXT("Hello everyone!"), 
       TEXT("general")
   );
   
   FString GameActionMessage = UHorizonUtility::CreateGameActionMessage(
       TEXT("player123"), 
       TEXT("jump"), 
       {
           {TEXT("x"), TEXT("100.5")},
           {TEXT("y"), TEXT("200.0")},
           {TEXT("z"), TEXT("50.0")}
       }
   );
   
   FString SystemMessage = UHorizonUtility::CreateSystemMessage(
       TEXT("maintenance"), 
       {
           {TEXT("duration"), TEXT("5 minutes")},
           {TEXT("reason"), TEXT("Server update")}
       }
   );
   
   // Send messages with different priorities
   WebSocket->SendMessage(ChatMessage);           // Normal priority (batched)
   UHorizonUtility::SendMessageImmediately(WebSocket, GameActionMessage);  // High priority (immediate)
   WebSocket->SendMessage(SystemMessage);         // Normal priority (batched)
   
   // Send binary data
   TArray<uint8> BinaryData = {0x48, 0x65, 0x6C, 0x6C, 0x6F}; // "Hello"
   WebSocket->SendBinaryMessageNow(BinaryData);
   ```

## 📝 Configuration Reference

### WebSocket Settings

| Setting | Default | Description |
|---------|---------|-------------|
| `Default Heartbeat Enabled` | `true` | Enable automatic heartbeat messages |
| `Default Heartbeat Interval` | `30.0s` | Time between heartbeat messages |
| `Default Max Reconnect Attempts` | `3` | Maximum reconnection attempts |
| `Default Reconnect Delay` | `5.0s` | Delay between reconnection attempts |
| `Default Auto Reconnect` | `true` | Enable automatic reconnection |
| `Default Heartbeat Message` | `"ping"` | Content of heartbeat messages |

### Performance Settings

| Setting | Default | Description |
|---------|---------|-------------|
| `Thread Pool Size` | `0` (auto) | Number of worker threads |
| `Thread Stack Size` | `256KB` | Stack size for worker threads |
| `Thread Priority` | `Above Normal` | Priority for worker threads |
| `Enable Message Pooling` | `true` | Enable object pooling for messages |
| `Max Pool Size` | `5000` | Maximum pooled message objects |
| `Initial Pool Size` | `500` | Initial pooled message objects |
| `Default Batch Size` | `500` | Messages per batch |
| `Max Batch Delay` | `0.05s` | Maximum batching delay |

### Logging Settings

| Setting | Default | Description |
|---------|---------|-------------|
| `Enable Verbose Logging` | `false` | Enable detailed debug logging |
| `Log Connection Events` | `true` | Log connection/disconnection events |
| `Log Message Events` | `false` | Log message send/receive events |
| `Log Heartbeat Events` | `false` | Log heartbeat message events |

### Security Settings

| Setting | Default | Description |
|---------|---------|-------------|
| `Allow Insecure Connections` | `true` | Allow `ws://` connections |
| `Verify SSL Certificates` | `true` | Verify SSL certificates for `wss://` |
| `Connection Timeout` | `30.0s` | Connection establishment timeout |
| `Max Message Size` | `1MB` | Maximum incoming message size |

## 🔍 Performance Monitoring

The plugin includes comprehensive performance monitoring:

```cpp
// Get detailed performance metrics
FString PerfStats = WebSocket->GetPerformanceStats(true);

// Performance metrics include:
// - Messages sent/received per second
// - Bytes sent/received per second
// - Average and peak latency
// - Thread pool utilization
// - Memory pool efficiency
// - Connection uptime
// - Error rates
```

## 🛠️ Troubleshooting

### Common Issues

1. **Connection fails immediately:**
   - Check if the server URL is correct
   - Verify the server is running and accepting connections
   - Check firewall settings

2. **Messages not being received:**
   - Ensure event delegates are properly bound
   - Check if the connection is still active
   - Verify server is sending valid WebSocket frames

3. **Performance issues:**
   - Increase thread pool size for high-throughput scenarios
   - Adjust batch size based on your message patterns
   - Enable message pooling for frequent messaging

4. **Memory issues:**
   - Check message pool configuration
   - Monitor for memory leaks in message handling
   - Ensure proper cleanup of WebSocket clients

### Debug Settings

Enable debug mode in Project Settings > Plugins > Horizon:
- `Enable Debug Mode`: Shows additional logging
- `Debug Server URLs`: Pre-configured test servers
- `Auto Connect in PIE`: Automatically connect when playing in editor
- `Simulate Connection Failures`: Test error handling

## 🎯 Best Practices

1. **Use the WebSocket Component for simple scenarios:**
   ```cpp
   // Best for: Simple actor-based WebSocket usage
   UHorizonWebSocketComponent* Component = CreateDefaultSubobject<UHorizonWebSocketComponent>(TEXT("WebSocket"));
   ```

2. **Use the Subsystem for complex scenarios:**
   ```cpp
   // Best for: Game-wide WebSocket management
   UHorizonSubsystem* Subsystem = GetGameInstance()->GetSubsystem<UHorizonSubsystem>();
   ```

3. **Choose the right sending mode:**
   ```cpp
   // For time-critical data (position updates, input)
   WebSocket->SendMessageNow(TEXT("Critical data"));
   
   // For bulk data (chat, game events)
   WebSocket->SendMessage(TEXT("Regular data"));
   ```

4. **Monitor performance:**
   ```cpp
   // Regularly check performance metrics
   FString Stats = WebSocket->GetPerformanceStats();
   UE_LOG(LogTemp, Log, TEXT("WebSocket Performance: %s"), *Stats);
   ```

5. **Handle errors gracefully:**
   ```cpp
   WebSocket->OnConnectionError.AddDynamic(this, &AMyActor::OnConnectionError);
   WebSocket->OnClosed.AddDynamic(this, &AMyActor::OnConnectionClosed);
   ```

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## 📞 Support

For support, please:
1. Check the [Issues](https://github.com/your-repo/horizon-plugin/issues) page
2. Review the troubleshooting section above
3. Enable debug logging for detailed diagnostics

---

**Made with ❤️ for the Unreal Engine community**
