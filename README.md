# HorizonWebSocketClient

A high-performance, thread-safe WebSocket client implementation for Unreal Engine with support for both **batched** and **immediate** message processing modes.

## Features

- ✅ **Dual Processing Modes**: Choose between batched (optimized) or immediate (real-time) processing
- ✅ **Thread-Safe**: All operations are thread-safe with proper mutex protection
- ✅ **Auto-Reconnection**: Configurable reconnection with exponential backoff
- ✅ **Heartbeat Support**: Keep connections alive with customizable ping/pong
- ✅ **Blueprint Compatible**: Full Blueprint node support
- ✅ **Binary & Text Messages**: Support for both message types
- ✅ **WebSocket Protocol Compliant**: Full RFC 6455 implementation
- ✅ **Secure Connections**: Support for both WS and WSS protocols

## Processing Modes

### Batched Processing (Default)
- Messages queued and processed on game thread tick
- **Latency**: ~16ms (one frame at 60fps)
- **CPU Usage**: Lower for high-frequency messaging
- **Use Case**: General messaging, non-critical data

### Immediate Processing
- Messages processed immediately upon receipt/send
- **Latency**: <1ms
- **CPU Usage**: Slightly higher due to immediate processing
- **Use Case**: Real-time games, trading systems, live collaboration

## Quick Start

### Complete Blueprint Implementation Example

```mermaid
graph TD
    %% Main Blueprint Flow
    START[Event BeginPlay] --> CREATE[Create Horizon WebSocket Client Object]
    CREATE --> STORE[Set WebSocket Client Variable]
    
    %% Configuration Chain
    STORE --> CONFIG1[Set Immediate Processing = True]
    CONFIG1 --> CONFIG2[Set Auto Reconnect = True] 
    CONFIG2 --> CONFIG3[Set Max Reconnect Attempts = 5]
    CONFIG3 --> CONFIG4[Set Heartbeat Interval Seconds = 30.0]
    CONFIG4 --> CONFIG5[Set Verbose Logging = True]
    
    %% Event Binding Chain
    CONFIG5 --> BIND1[Bind Event to On Connected]
    BIND1 --> BIND2[Bind Event to On Message]
    BIND2 --> BIND3[Bind Event to On Message Sent]
    BIND3 --> BIND4[Bind Event to On Closed]
    BIND4 --> BIND5[Bind Event to On Raw Message]
    BIND5 --> BIND6[Bind Event to On Connection Error]
    
    %% Connection
    BIND6 --> CONNECT[Connect Node]
    CONNECT --> URL[URL: ws://localhost:8080/websocket]
    CONNECT --> PROTOCOL[Protocol: Leave Empty]
    
    %% Event Handler: On Connected
    subgraph "Custom Event: Handle Connected"
        direction TB
        CONN_START[Event Handle Connected] --> CONN_CHECK{"Success Pin = True?"}
        CONN_CHECK -->|True| CONN_SUCCESS[Print String: WebSocket Connected!]
        CONN_CHECK -->|False| CONN_FAIL[Print String: Connection Failed!]
        
        CONN_SUCCESS --> SEND_HELLO[Send Message: Hello from Blueprint!]
        SEND_HELLO --> MAKE_BINARY[Make Array Byte]
        MAKE_BINARY --> ADD_BYTES[Add: 72,101,108,108,111]
        ADD_BYTES --> SEND_BIN[Send Binary Message]
    end
    
    %% Event Handler: On Message
    subgraph "Custom Event: Handle Message"
        direction TB
        MSG_START[Event Handle Message] --> MSG_PRINT[Print String: Received Message]
        MSG_PRINT --> MSG_FORMAT[Format Text: Echo plus message]
        MSG_FORMAT --> MSG_REPLY[Send Message]
        
        %% Message parsing branch
        MSG_START --> MSG_CONTAINS{"Message Contains: position"}
        MSG_CONTAINS -->|True| PARSE_POS[Parse Position Data]
        MSG_CONTAINS -->|False| MSG_REPLY
        PARSE_POS --> UPDATE_UI[Update Player Position UI]
    end
    
    %% Event Handler: On Message Sent
    subgraph "Custom Event: Handle Message Sent"
        direction TB
        SENT_START[Event Handle Message Sent] --> SENT_PRINT[Print String: Message Sent Successfully]
        SENT_PRINT --> SENT_LOG[Append to Log Widget]
    end
    
    %% Input Handling
    subgraph "Input Action: Send Player Position"
        direction TB
        INPUT_START[InputAction SendPosition] --> GET_PLAYER[Get Player Controller]
        GET_PLAYER --> GET_PAWN[Get Controlled Pawn]
        GET_PAWN --> GET_LOC[Get Actor Location]
        GET_LOC --> BREAK_VEC[Break Vector]
        BREAK_VEC --> FORMAT_POS[Format Text: position X Y Z]
        FORMAT_POS --> SEND_POS[Send Message]
    end
    
    %% Error Handling
    subgraph "Custom Event: Handle Connection Error"
        direction TB
        ERR_START[Event Handle Connection Error] --> ERR_PRINT[Print String: Connection Error]
        ERR_PRINT --> ERR_LOG[Log Error to File]
        ERR_LOG --> ERR_RETRY[Delay 5 Seconds]
        ERR_RETRY --> ERR_RECONNECT[Force Reconnect]
    end
    
    %% Cleanup
    subgraph "Event EndPlay"
        direction TB
        END_START[Event EndPlay] --> END_CHECK{"WebSocket Client Valid?"}
        END_CHECK -->|True| END_DISCONNECT[Disconnect]
        END_CHECK -->|False| END_COMPLETE[End]
        END_DISCONNECT --> END_CLEAR[Clear WebSocket Client Variable]
        END_CLEAR --> END_COMPLETE
    end
    
    %% Styling for different node types
    classDef eventNode fill:#e74c3c,stroke:#c0392b,color:#fff,font-weight:bold
    classDef configNode fill:#3498db,stroke:#2980b9,color:#fff
    classDef bindNode fill:#9b59b6,stroke:#8e44ad,color:#fff
    classDef actionNode fill:#27ae60,stroke:#229954,color:#fff
    classDef conditionNode fill:#f39c12,stroke:#d68910,color:#fff
    classDef dataNode fill:#95a5a6,stroke:#7f8c8d,color:#fff
    
    %% Apply styles
    class START,CONN_START,MSG_START,SENT_START,INPUT_START,ERR_START,END_START eventNode
    class CONFIG1,CONFIG2,CONFIG3,CONFIG4,CONFIG5 configNode
    class BIND1,BIND2,BIND3,BIND4,BIND5,BIND6 bindNode
    class CREATE,CONNECT,SEND_HELLO,SEND_BIN,MSG_REPLY,SEND_POS,END_DISCONNECT actionNode
    class CONN_CHECK,MSG_CONTAINS,END_CHECK conditionNode
    class URL,PROTOCOL,MAKE_BINARY,ADD_BYTES dataNode
```

## Blueprint Step-by-Step Guide

### 1. Initial Setup in Blueprint

```mermaid
graph LR
    A["🎮 Event BeginPlay"] --> B["📦 Create Object from Class"]
    B --> C["🔗 HorizonWebSocketClient"]
    C --> D["💾 Set Variable: WebSocketClient"]
    
    subgraph "Node Details"
        B1["Class: Horizon Web Socket Client<br/>Return Value → WebSocketClient Variable"]
    end
    
    B -.-> B1
```

### 2. Configuration Nodes Chain

```mermaid
graph LR
    A["💾 WebSocketClient Variable"] --> B1["⚡ Set Immediate Processing"]
    B1 --> B2["🔄 Set Auto Reconnect"] 
    B2 --> B3["🔢 Set Max Reconnect Attempts"]
    B3 --> B4["💓 Set Heartbeat Interval Seconds"]
    B4 --> B5["📝 Set Verbose Logging"]
    
    subgraph "Values"
        V1["True"]
        V2["True"]
        V3["5"]
        V4["30.0"]
        V5["True"]
    end
    
    B1 -.-> V1
    B2 -.-> V2
    B3 -.-> V3
    B4 -.-> V4
    B5 -.-> V5
```

### 3. Event Binding Chain

```mermaid
graph LR
    A["📝 Set Verbose Logging"] --> B1["🔗 Bind Event to On Connected"]
    B1 --> B2["🔗 Bind Event to On Message"]
    B2 --> B3["🔗 Bind Event to On Message Sent"]
    B3 --> B4["🔗 Bind Event to On Closed"]
    B4 --> B5["🔗 Bind Event to On Raw Message"]
    B5 --> B6["🔗 Bind Event to On Connection Error"]
    
    subgraph "Custom Events"
        E1["Handle Connected"]
        E2["Handle Message"]
        E3["Handle Message Sent"]
        E4["Handle Closed"]
        E5["Handle Raw Message"]
        E6["Handle Connection Error"]
    end
    
    B1 -.-> E1
    B2 -.-> E2
    B3 -.-> E3
    B4 -.-> E4
    B5 -.-> E5
    B6 -.-> E6
```

### 4. Connection Node

```mermaid
graph LR
    A["🔗 Bind Event to On Connection Error"] --> B["🌐 Connect"]
    
    subgraph "Connect Parameters"
        P1["URL: ws://localhost:8080/websocket"]
        P2["Protocol: (leave empty)"]
    end
    
    B --> P1
    B --> P2
    
    B --> C["✅ Execution continues to event handlers"]
```

## C++ Implementation Examples

### Basic Setup

```cpp
// YourGameMode.h
UCLASS()
class YOURGAME_API AYourGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AYourGameMode();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WebSocket")
    UHorizonWebSocketClient* WebSocketClient;

    // Event handlers
    UFUNCTION()
    void OnWebSocketConnected(bool bSuccess);
    
    UFUNCTION()
    void OnWebSocketMessage(const FString& Message);
    
    UFUNCTION()
    void OnWebSocketMessageSent(const FString& Message);
    
    UFUNCTION()
    void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
    
    UFUNCTION()
    void OnWebSocketConnectionError(const FString& Error);
    
    UFUNCTION()
    void OnWebSocketRawMessage(const TArray<uint8>& Data, int32 Count, int32 Remaining);
};
```

### Implementation with Immediate Processing

```cpp
// YourGameMode.cpp
AYourGameMode::AYourGameMode()
{
    WebSocketClient = CreateDefaultSubobject<UHorizonWebSocketClient>(TEXT("WebSocketClient"));
}

void AYourGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (WebSocketClient)
    {
        // Configure for immediate processing (real-time)
        WebSocketClient->bImmediateProcessing = true;
        
        // Connection settings
        WebSocketClient->bAutoReconnect = true;
        WebSocketClient->MaxReconnectAttempts = 5;
        WebSocketClient->ReconnectDelaySeconds = 2.0f;
        
        // Heartbeat settings
        WebSocketClient->bEnableHeartbeat = true;
        WebSocketClient->HeartbeatIntervalSeconds = 30.0f;
        WebSocketClient->HeartbeatMessage = TEXT("ping");
        
        // Logging
        WebSocketClient->bVerboseLogging = true;

        // Bind events
        WebSocketClient->OnConnected.AddDynamic(this, &AYourGameMode::OnWebSocketConnected);
        WebSocketClient->OnMessage.AddDynamic(this, &AYourGameMode::OnWebSocketMessage);
        WebSocketClient->OnMessageSent.AddDynamic(this, &AYourGameMode::OnWebSocketMessageSent);
        WebSocketClient->OnClosed.AddDynamic(this, &AYourGameMode::OnWebSocketClosed);
        WebSocketClient->OnConnectionError.AddDynamic(this, &AYourGameMode::OnWebSocketConnectionError);
        WebSocketClient->OnRawMessage.AddDynamic(this, &AYourGameMode::OnWebSocketRawMessage);

        // Connect to server
        WebSocketClient->Connect("ws://localhost:8080/websocket", "");
    }
}

void AYourGameMode::OnWebSocketConnected(bool bSuccess)
{
    if (bSuccess)
    {
        UE_LOG(LogTemp, Log, TEXT("✅ WebSocket connected successfully!"));
        
        // Send initial message
        WebSocketClient->SendMessage(TEXT("Hello from Unreal Engine!"));
        
        // Send binary data
        TArray<uint8> BinaryData = {0x48, 0x65, 0x6C, 0x6C, 0x6F}; // "Hello"
        WebSocketClient->SendBinaryMessage(BinaryData);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Failed to connect to WebSocket"));
    }
}

void AYourGameMode::OnWebSocketMessage(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("📨 Received: %s"), *Message);
    
    // Echo back with timestamp
    FDateTime Now = FDateTime::Now();
    FString EchoMessage = FString::Printf(TEXT("Echo at %s: %s"), 
        *Now.ToString(), *Message);
    WebSocketClient->SendMessage(EchoMessage);
}

void AYourGameMode::OnWebSocketMessageSent(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("📤 Sent: %s"), *Message);
}

void AYourGameMode::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
    UE_LOG(LogTemp, Warning, TEXT("🔌 Connection closed - Code: %d, Reason: %s, Clean: %s"), 
        StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
}

void AYourGameMode::OnWebSocketConnectionError(const FString& Error)
{
    UE_LOG(LogTemp, Error, TEXT("💥 Connection error: %s"), *Error);
}

void AYourGameMode::OnWebSocketRawMessage(const TArray<uint8>& Data, int32 Count, int32 Remaining)
{
    UE_LOG(LogTemp, Log, TEXT("📦 Received binary data: %d bytes"), Count);
    
    // Convert to hex string for logging
    FString HexString = FString::Printf(TEXT("Raw data: "));
    for (int32 i = 0; i < FMath::Min(Data.Num(), 20); i++) // Log first 20 bytes
    {
        HexString += FString::Printf(TEXT("%02X "), Data[i]);
    }
    if (Data.Num() > 20)
    {
        HexString += TEXT("...");
    }
    UE_LOG(LogTemp, Log, TEXT("%s"), *HexString);
}
```

### Real-Time Game Example

```cpp
// Real-time multiplayer game example
class YOURGAME_API AMultiplayerGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    // Send player position update
    UFUNCTION(BlueprintCallable)
    void SendPlayerPosition(APlayerController* Player, FVector Position, FRotator Rotation);
    
    // Send game state update
    UFUNCTION(BlueprintCallable)
    void SendGameStateUpdate(const FString& GameState);

protected:
    UPROPERTY()
    UHorizonWebSocketClient* GameWebSocket;
    
    UFUNCTION()
    void OnGameMessage(const FString& Message);
};

void AMultiplayerGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    GameWebSocket = NewObject<UHorizonWebSocketClient>(this);
    
    // CRITICAL: Enable immediate processing for real-time games
    GameWebSocket->bImmediateProcessing = true;
    
    // Optimize for low latency
    GameWebSocket->bEnableHeartbeat = true;
    GameWebSocket->HeartbeatIntervalSeconds = 10.0f; // More frequent heartbeats
    
    GameWebSocket->OnMessage.AddDynamic(this, &AMultiplayerGameMode::OnGameMessage);
    GameWebSocket->Connect("ws://gameserver.com:8080/game", "realtime-game");
}

void AMultiplayerGameMode::SendPlayerPosition(APlayerController* Player, FVector Position, FRotator Rotation)
{
    if (GameWebSocket && GameWebSocket->IsConnected())
    {
        // Create JSON message
        FString PositionMessage = FString::Printf(TEXT(
            "{"
            "\"type\":\"player_position\","
            "\"player_id\":\"%s\","
            "\"position\":{\"x\":%.2f,\"y\":%.2f,\"z\":%.2f},"
            "\"rotation\":{\"pitch\":%.2f,\"yaw\":%.2f,\"roll\":%.2f},"
            "\"timestamp\":%lld"
            "}"), 
            *Player->GetUniqueID().ToString(),
            Position.X, Position.Y, Position.Z,
            Rotation.Pitch, Rotation.Yaw, Rotation.Roll,
            FDateTime::Now().ToUnixTimestamp()
        );
        
        // Send immediately (< 1ms latency with immediate processing)
        GameWebSocket->SendMessage(PositionMessage);
    }
}

void AMultiplayerGameMode::OnGameMessage(const FString& Message)
{
    // Parse and handle game messages immediately
    // This fires within ~1ms of message receipt in immediate mode
    
    // Example: Parse JSON and update game state
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);
    
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        FString MessageType = JsonObject->GetStringField(TEXT("type"));
        
        if (MessageType == TEXT("player_position"))
        {
            // Handle player position update immediately
            FString PlayerID = JsonObject->GetStringField(TEXT("player_id"));
            // ... update player position in real-time
        }
        else if (MessageType == TEXT("game_event"))
        {
            // Handle game events immediately
            FString EventType = JsonObject->GetStringField(TEXT("event"));
            // ... process game event
        }
    }
}
```

### Trading/Financial Data Example

```cpp
// High-frequency trading data example
class YOURGAME_API ATradingDataReceiver : public AActor
{
    GENERATED_BODY()

public:
    ATradingDataReceiver();

protected:
    virtual void BeginPlay() override;

    UPROPERTY()
    UHorizonWebSocketClient* TradingWebSocket;
    
    UFUNCTION()
    void OnMarketData(const FString& Message);
    
    UFUNCTION()
    void OnTradingBinaryData(const TArray<uint8>& Data, int32 Count, int32 Remaining);

private:
    // Track latency for performance monitoring
    TArray<float> LatencyMeasurements;
    FDateTime LastMessageTime;
};

void ATradingDataReceiver::BeginPlay()
{
    Super::BeginPlay();
    
    TradingWebSocket = NewObject<UHorizonWebSocketClient>(this);
    
    // CRITICAL: Immediate processing for financial data
    TradingWebSocket->bImmediateProcessing = true;
    
    // Optimize for ultra-low latency
    TradingWebSocket->bEnableHeartbeat = true;
    TradingWebSocket->HeartbeatIntervalSeconds = 5.0f; // Very frequent heartbeats
    TradingWebSocket->bVerboseLogging = false; // Reduce logging overhead
    
    TradingWebSocket->OnMessage.AddDynamic(this, &ATradingDataReceiver::OnMarketData);
    TradingWebSocket->OnRawMessage.AddDynamic(this, &ATradingDataReceiver::OnTradingBinaryData);
    
    // Connect to trading data feed
    TradingWebSocket->Connect("wss://api.trading.com/v1/feed", "market-data");
}

void ATradingDataReceiver::OnMarketData(const FString& Message)
{
    // Process market data with minimal latency
    FDateTime ReceiveTime = FDateTime::Now();
    
    // Calculate processing latency
    if (!LastMessageTime.GetTicks() == 0)
    {
        float LatencyMs = (ReceiveTime - LastMessageTime).GetTotalMilliseconds();
        LatencyMeasurements.Add(LatencyMs);
        
        // Log every 100 messages
        if (LatencyMeasurements.Num() % 100 == 0)
        {
            float AvgLatency = 0.0f;
            for (float Latency : LatencyMeasurements)
            {
                AvgLatency += Latency;
            }
            AvgLatency /= LatencyMeasurements.Num();
            
            UE_LOG(LogTemp, Log, TEXT("📊 Avg processing latency: %.2fms"), AvgLatency);
            LatencyMeasurements.Empty(); // Reset for next batch
        }
    }
    
    LastMessageTime = ReceiveTime;
    
    // Parse market data immediately
    // {"symbol":"BTCUSD","price":45000.50,"volume":1.25,"timestamp":1640995200}
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);
    
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        FString Symbol = JsonObject->GetStringField(TEXT("symbol"));
        double Price = JsonObject->GetNumberField(TEXT("price"));
        double Volume = JsonObject->GetNumberField(TEXT("volume"));
        
        // Update trading UI immediately (< 1ms with immediate processing)
        // Broadcast to trading widgets, update charts, etc.
    }
}
```

## Configuration Reference

| Property | Type | Default | Description |
|----------|------|---------|-------------|
| `bImmediateProcessing` | `bool` | `false` | Enable immediate message processing (< 1ms latency) |
| `bAutoReconnect` | `bool` | `true` | Automatically reconnect on connection loss |
| `MaxReconnectAttempts` | `int32` | `5` | Maximum number of reconnection attempts |
| `ReconnectDelaySeconds` | `float` | `2.0f` | Base delay between reconnection attempts |
| `bEnableHeartbeat` | `bool` | `true` | Enable heartbeat/keepalive mechanism |
| `HeartbeatIntervalSeconds` | `float` | `30.0f` | Interval between heartbeat messages |
| `HeartbeatMessage` | `FString` | `"ping"` | Message to send for heartbeat |
| `bVerboseLogging` | `bool` | `false` | Enable detailed logging |

## Performance Comparison

```mermaid
graph LR
    subgraph "Batched Processing"
        A1[Message Arrives] --> A2[Queue Message]
        A2 --> A3[Wait for Tick]
        A3 --> A4[Process on Game Thread]
        A4 --> A5[Fire Delegate]
        A5 --> A6[~16ms Total Latency]
    end
    
    subgraph "Immediate Processing"
        B1[Message Arrives] --> B2[Process Immediately]
        B2 --> B3[Dispatch to Game Thread]
        B3 --> B4[Fire Delegate]
        B4 --> B5[<1ms Total Latency]
    end
```

## Thread Safety

```mermaid
graph TD
    A[Worker Thread] --> B[Socket Operations]
    A --> C[Handshake]
    A --> D[Raw Data Handling]
    
    E[Game Thread] --> F[Delegate Callbacks]
    E --> G[Public API Calls]
    E --> H[Blueprint Events]
    
    I[Thread-Safe Components] --> J[Message Queues]
    I --> K[Connection State]
    I --> L[Socket Mutex]
    I --> M[State Mutex]
    
    B -.->|Async Task| F
    D -.->|Immediate/Queue| F
```

## Best Practices

### When to Use Immediate Processing
- ✅ Real-time multiplayer games
- ✅ Trading/financial applications
- ✅ Live collaboration tools
- ✅ IoT sensor data
- ✅ Video streaming control

### When to Use Batched Processing
- ✅ General web communication
- ✅ Non-critical notifications
- ✅ Bulk data transfer
- ✅ High-frequency, non-latency-sensitive data
- ✅ Battery-powered devices

### Performance Tips
1. **Use immediate processing sparingly** - Only when latency matters
2. **Optimize heartbeat intervals** - Lower for critical connections
3. **Disable verbose logging** in production for immediate mode
4. **Monitor CPU usage** with high-frequency immediate processing
5. **Use binary messages** for large data transfers

## Troubleshooting

### Common Issues

**High CPU Usage in Immediate Mode**
```cpp
// Solution: Increase worker thread sleep time slightly
WebSocketClient->bImmediateProcessing = true;
// The worker thread automatically uses 1ms sleep in immediate mode
// vs 10ms in batched mode
```

**Connection Timeouts**
```cpp
// Solution: Adjust heartbeat settings
WebSocketClient->bEnableHeartbeat = true;
WebSocketClient->HeartbeatIntervalSeconds = 15.0f; // More frequent
```

**Memory Leaks**
```cpp
// Ensure proper cleanup in EndPlay
void AYourActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (WebSocketClient)
    {
        WebSocketClient->Disconnect();
        WebSocketClient = nullptr;
    }
    Super::EndPlay(EndPlayReason);
}
```

## Contributing

Please ensure all contributions maintain thread safety and include both Blueprint and C++ examples in documentation.
