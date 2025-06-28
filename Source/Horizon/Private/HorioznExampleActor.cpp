
#include "HorizonExampleActor.h"
#include "HorizonWebSocketComponent.h"
#include "Horizon.h"
#include "HorizonBlueprintLibrary.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Misc/DateTime.h"

AHorizonExampleActor::AHorizonExampleActor()
{
	PrimaryActorTick.bCanEverTick = true;

	// Create WebSocket component
	WebSocketComponent = CreateDefaultSubobject<UHorizonWebSocketComponent>(TEXT("HorizonWebSocketComponent"));
	
	// Configure component for auto-connection
	WebSocketComponent->bAutoConnect = false; // We'll handle connection manually for this example
}

void AHorizonExampleActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Bind WebSocket events
	if (WebSocketComponent)
	{
		WebSocketComponent->OnConnected.AddDynamic(this, &AHorizonExampleActor::OnWebSocketConnected);
		WebSocketComponent->OnConnectionError.AddDynamic(this, &AHorizonExampleActor::OnWebSocketConnectionError);
		WebSocketComponent->OnClosed.AddDynamic(this, &AHorizonExampleActor::OnWebSocketClosed);
		WebSocketComponent->OnMessage.AddDynamic(this, &AHorizonExampleActor::OnWebSocketMessage);
		WebSocketComponent->OnRawMessage.AddDynamic(this, &AHorizonExampleActor::OnWebSocketRawMessage);
		WebSocketComponent->OnMessageSent.AddDynamic(this, &AHorizonExampleActor::OnWebSocketMessageSent);

		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor: Event handlers bound"));
	}

	// Auto-connect if enabled
	if (bAutoConnect)
	{
		ConnectToServer();
	}

	LogConnectionEvent(TEXT("Horizon Example Actor initialized"));
}

void AHorizonExampleActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Stop periodic message timer
	StopPeriodicMessageTimer();

	// Disconnect WebSocket
	if (WebSocketComponent)
	{
		WebSocketComponent->Disconnect();
	}

	LogConnectionEvent(FString::Printf(TEXT("Horizon Example Actor ending play. Messages sent: %d, received: %d"), 
		MessagesSentCount, MessagesReceivedCount));

	Super::EndPlay(EndPlayReason);
}

void AHorizonExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check for connection state changes
	bool bCurrentlyConnected = IsConnectedToServer();
	if (bCurrentlyConnected != bWasConnectedLastTick)
	{
		bWasConnectedLastTick = bCurrentlyConnected;
		
		if (bCurrentlyConnected)
		{
			LogConnectionEvent(TEXT("Connection established in Tick"));
			
			// Start periodic messages if enabled
			if (bSendPeriodicMessages)
			{
				StartPeriodicMessageTimer();
			}
		}
		else
		{
			LogConnectionEvent(TEXT("Connection lost in Tick"));
			StopPeriodicMessageTimer();
		}
	}
}

void AHorizonExampleActor::ConnectToServer()
{
	if (!WebSocketComponent)
	{
		LogConnectionEvent(TEXT("Cannot connect: WebSocket component is null"), true);
		return;
	}

	if (ServerURL.IsEmpty())
	{
		LogConnectionEvent(TEXT("Cannot connect: Server URL is empty"), true);
		return;
	}

	LogConnectionEvent(FString::Printf(TEXT("Attempting to connect to: %s"), *ServerURL));
	
	// Configure WebSocket client with example settings
	if (UHorizonWebSocketClient* Client = WebSocketComponent->WebSocket)
	{
		Client->bEnableHeartbeat = true;
		Client->HeartbeatIntervalSeconds = 30.0f;
		Client->MaxReconnectAttempts = 3;
		Client->bAutoReconnect = true;
		Client->bVerboseLogging = true;
		Client->HeartbeatMessage = TEXT("ping");
	}

	WebSocketComponent->Connect(ServerURL);
}

void AHorizonExampleActor::DisconnectFromServer()
{
	if (!WebSocketComponent)
	{
		return;
	}

	LogConnectionEvent(TEXT("Manually disconnecting from server"));
	StopPeriodicMessageTimer();
	WebSocketComponent->Disconnect();
}

void AHorizonExampleActor::SendTestMessage()
{
	if (TestMessages.Num() == 0)
	{
		LogConnectionEvent(TEXT("No test messages configured"), true);
		return;
	}

	// Cycle through test messages
	FString MessageToSend = TestMessages[CurrentTestMessageIndex];
	CurrentTestMessageIndex = (CurrentTestMessageIndex + 1) % TestMessages.Num();

	SendCustomMessage(MessageToSend);
}

void AHorizonExampleActor::SendRandomTestMessage()
{
	if (TestMessages.Num() == 0)
	{
		LogConnectionEvent(TEXT("No test messages configured"), true);
		return;
	}

	int32 RandomIndex = FMath::RandRange(0, TestMessages.Num() - 1);
	SendCustomMessage(TestMessages[RandomIndex]);
}

void AHorizonExampleActor::SendCustomMessage(const FString& Message)
{
	if (!WebSocketComponent || !IsConnectedToServer())
	{
		LogConnectionEvent(TEXT("Cannot send message: Not connected"), true);
		return;
	}

	if (Message.IsEmpty())
	{
		LogConnectionEvent(TEXT("Cannot send empty message"), true);
		return;
	}

	// Add timestamp to message
	FString TimestampedMessage = FString::Printf(TEXT("[%s] %s"), 
		*FDateTime::Now().ToString(TEXT("%H:%M:%S")), *Message);

	if (WebSocketComponent->SendMessage(TimestampedMessage))
	{
		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor sent message: %s"), *TimestampedMessage);
	}
	else
	{
		LogConnectionEvent(TEXT("Failed to send message"), true);
	}
}

void AHorizonExampleActor::SendJSONMessage(const FString& MessageType, const TMap<FString, FString>& Data)
{
	if (!IsConnectedToServer())
	{
		LogConnectionEvent(TEXT("Cannot send JSON message: Not connected"), true);
		return;
	}

	// Add example data
	TMap<FString, FString> MessageData = Data;
	MessageData.Add(TEXT("sender"), TEXT("HorizonExampleActor"));
	MessageData.Add(TEXT("actor_name"), GetName());
	MessageData.Add(TEXT("timestamp"), FDateTime::Now().ToIso8601());
	MessageData.Add(TEXT("horizon_version"), UHorizonBlueprintLibrary::GetHorizonVersion());

	FString JSONMessage = UHorizonBlueprintLibrary::CreateJSONMessage(MessageType, MessageData);
	SendCustomMessage(JSONMessage);
}

void AHorizonExampleActor::SendBinaryTestMessage()
{
	if (!WebSocketComponent || !IsConnectedToServer())
	{
		LogConnectionEvent(TEXT("Cannot send binary message: Not connected"), true);
		return;
	}

	// Create a test binary message
	FString TestString = FString::Printf(TEXT("Binary test message from %s at %s using Horizon v%s"), 
		*GetName(), *FDateTime::Now().ToString(), *UHorizonBlueprintLibrary::GetHorizonVersion());
	
	TArray<uint8> BinaryData = UHorizonBlueprintLibrary::StringToByteArray(TestString);
	
	if (WebSocketComponent->SendBinaryMessage(BinaryData))
	{
		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor sent binary message: %d bytes"), BinaryData.Num());
	}
	else
	{
		LogConnectionEvent(TEXT("Failed to send binary message"), true);
	}
}

void AHorizonExampleActor::TogglePeriodicMessages()
{
	bSendPeriodicMessages = !bSendPeriodicMessages;
	
	if (bSendPeriodicMessages && IsConnectedToServer())
	{
		StartPeriodicMessageTimer();
		LogConnectionEvent(TEXT("Enabled periodic messages"));
	}
	else
	{
		StopPeriodicMessageTimer();
		LogConnectionEvent(TEXT("Disabled periodic messages"));
	}
}

bool AHorizonExampleActor::IsConnectedToServer() const
{
	return WebSocketComponent ? WebSocketComponent->IsConnected() : false;
}

FString AHorizonExampleActor::GetConnectionStatus() const
{
	if (!WebSocketComponent)
	{
		return TEXT("No WebSocket Component");
	}

	EHorizonWebSocketState State = WebSocketComponent->GetConnectionState();
	FString StateString = UHorizonBlueprintLibrary::ConnectionStateToString(State);
	
	if (State == EHorizonWebSocketState::Connected)
	{
		return FString::Printf(TEXT("Connected to %s"), *WebSocketComponent->GetServerURL());
	}
	else if (State == EHorizonWebSocketState::Connecting)
	{
		return FString::Printf(TEXT("Connecting to %s"), *WebSocketComponent->GetServerURL());
	}
	else if (State == EHorizonWebSocketState::Reconnecting)
	{
		int32 Attempts = WebSocketComponent->GetCurrentReconnectAttempts();
		return FString::Printf(TEXT("Reconnecting (%d attempts)"), Attempts);
	}

	return StateString;
}

FString AHorizonExampleActor::GetHorizonStatus() const
{
	return FString::Printf(TEXT("Horizon v%s - %s - Sent: %d, Received: %d"), 
		*UHorizonBlueprintLibrary::GetHorizonVersion(),
		*GetConnectionStatus(),
		MessagesSentCount,
		MessagesReceivedCount);
}

// Event handlers
void AHorizonExampleActor::OnWebSocketConnected(bool bSuccess)
{
	if (bSuccess)
	{
		LogConnectionEvent(TEXT("Successfully connected to Horizon WebSocket server"));
		
		// Send initial connection message
		TMap<FString, FString> ConnectionData;
		ConnectionData.Add(TEXT("action"), TEXT("client_connected"));
		ConnectionData.Add(TEXT("client_type"), TEXT("unreal_engine_horizon"));
		ConnectionData.Add(TEXT("plugin_version"), UHorizonBlueprintLibrary::GetHorizonVersion());
		SendJSONMessage(TEXT("connection"), ConnectionData);
		
		// Start periodic messages if enabled
		if (bSendPeriodicMessages)
		{
			StartPeriodicMessageTimer();
		}
	}
	else
	{
		LogConnectionEvent(TEXT("Failed to connect to Horizon WebSocket server"), true);
	}
}

void AHorizonExampleActor::OnWebSocketConnectionError(const FString& ErrorMessage)
{
	LogConnectionEvent(FString::Printf(TEXT("Connection error: %s"), *ErrorMessage), true);
	StopPeriodicMessageTimer();
}

void AHorizonExampleActor::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	LogConnectionEvent(FString::Printf(TEXT("Connection closed - Code: %d, Reason: %s, Clean: %s"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No")));
	
	StopPeriodicMessageTimer();
}

void AHorizonExampleActor::OnWebSocketMessage(const FString& Message)
{
	MessagesReceivedCount++;
	
	if (bLogReceivedMessages)
	{
		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor received message: %s"), *Message);
	}

	// Try to parse as JSON and respond accordingly
	FString MessageType;
	TMap<FString, FString> Parameters;
	
	if (UHorizonBlueprintLibrary::ParseJSONMessage(Message, MessageType, Parameters))
	{
		if (MessageType == TEXT("ping"))
		{
			// Respond to ping with pong
			TMap<FString, FString> PongData;
			PongData.Add(TEXT("original_message"), Message);
			PongData.Add(TEXT("response_time"), FString::Printf(TEXT("%.3f"), FPlatformTime::Seconds()));
			SendJSONMessage(TEXT("pong"), PongData);
		}
		else if (MessageType == TEXT("echo_request"))
		{
			// Echo back the message
			TMap<FString, FString> EchoData = Parameters;
			EchoData.Add(TEXT("echoed"), TEXT("true"));
			EchoData.Add(TEXT("echo_time"), FDateTime::Now().ToIso8601());
			SendJSONMessage(TEXT("echo_response"), EchoData);
		}
		else if (MessageType == TEXT("horizon_info_request"))
		{
			// Send Horizon plugin information
			TMap<FString, FString> InfoData;
			InfoData.Add(TEXT("version"), UHorizonBlueprintLibrary::GetHorizonVersion());
			InfoData.Add(TEXT("websocket_available"), UHorizonBlueprintLibrary::IsHorizonWebSocketAvailable() ? TEXT("true") : TEXT("false"));
			InfoData.Add(TEXT("messages_sent"), FString::FromInt(MessagesSentCount));
			InfoData.Add(TEXT("messages_received"), FString::FromInt(MessagesReceivedCount));
			SendJSONMessage(TEXT("horizon_info"), InfoData);
		}
	}
}

void AHorizonExampleActor::OnWebSocketRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining)
{
	MessagesReceivedCount++;
	
	if (bLogReceivedMessages)
	{
		FString DataAsString = UHorizonBlueprintLibrary::ByteArrayToString(Data);
		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor received binary message (%d bytes): %s"), Size, *DataAsString);
	}
}

void AHorizonExampleActor::OnWebSocketMessageSent(const FString& Message)
{
	MessagesSentCount++;
	UE_LOG(LogHorizon, VeryVerbose, TEXT("Horizon Example Actor message sent: %s"), *Message);
}

void AHorizonExampleActor::SendPeriodicMessage()
{
	if (!IsConnectedToServer())
	{
		StopPeriodicMessageTimer();
		return;
	}

	// Send a status message
	TMap<FString, FString> StatusData;
	StatusData.Add(TEXT("action"), TEXT("periodic_status"));
	StatusData.Add(TEXT("messages_sent"), FString::FromInt(MessagesSentCount));
	StatusData.Add(TEXT("messages_received"), FString::FromInt(MessagesReceivedCount));
	StatusData.Add(TEXT("uptime"), FString::Printf(TEXT("%.1f"), GetWorld()->GetTimeSeconds()));
	StatusData.Add(TEXT("horizon_version"), UHorizonBlueprintLibrary::GetHorizonVersion());
	StatusData.Add(TEXT("connection_state"), UHorizonBlueprintLibrary::ConnectionStateToString(WebSocketComponent->GetConnectionState()));
	
	SendJSONMessage(TEXT("status"), StatusData);
}

void AHorizonExampleActor::StartPeriodicMessageTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(PeriodicMessageTimer, this, &AHorizonExampleActor::SendPeriodicMessage, MessageInterval, true);
		LogConnectionEvent(FString::Printf(TEXT("Started periodic messages (interval: %.1fs)"), MessageInterval));
	}
}

void AHorizonExampleActor::StopPeriodicMessageTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(PeriodicMessageTimer);
	}
}

void AHorizonExampleActor::LogConnectionEvent(const FString& Event, bool bIsError)
{
	if (bIsError)
	{
		UE_LOG(LogHorizon, Error, TEXT("Horizon Example Actor: %s"), *Event);
	}
	else
	{
		UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor: %s"), *Event);
	}
}