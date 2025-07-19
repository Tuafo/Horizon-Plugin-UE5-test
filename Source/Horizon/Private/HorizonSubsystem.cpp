
#include "HorizonSubsystem.h"
#include "HorizonWebSocketClient.h"
#include "Horizon.h"
#include "Engine/World.h"

void UHorizonSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem initialized"));
}

void UHorizonSubsystem::Deinitialize()
{
	// Disconnect and clean up the client
	if (WebSocketClient)
	{
		UnregisterClientEventHandlers();
		WebSocketClient->Disconnect();
		WebSocketClient = nullptr;
	}

	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem deinitialized. Connection attempts: %d, Success rate: %.1f%%"), 
		TotalConnectionAttempts, GetConnectionSuccessRate());

	Super::Deinitialize();
}

UHorizonWebSocketClient* UHorizonSubsystem::GetWebSocketClient()
{
	if (!WebSocketClient)
	{
		WebSocketClient = NewObject<UHorizonWebSocketClient>(this);
		if (WebSocketClient)
		{
			RegisterClientEventHandlers();
			UE_LOG(LogHorizon, Log, TEXT("Created Horizon WebSocket client"));
		}
		else
		{
			UE_LOG(LogHorizon, Error, TEXT("Failed to create Horizon WebSocket client"));
		}
	}

	return WebSocketClient;
}

bool UHorizonSubsystem::Connect(const FString& URL, const FString& Protocol)
{
	UHorizonWebSocketClient* Client = GetWebSocketClient();
	if (!Client)
	{
		return false;
	}

	TotalConnectionAttempts++;
	
	bool bResult = Client->Connect(URL, Protocol);
	if (bResult)
	{
		UE_LOG(LogHorizon, Log, TEXT("Connecting Horizon WebSocket client to %s"), *URL);
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to connect Horizon WebSocket client to %s"), *URL);
	}

	return bResult;
}

void UHorizonSubsystem::Disconnect()
{
	if (WebSocketClient)
	{
		WebSocketClient->Disconnect();
		UE_LOG(LogHorizon, Log, TEXT("Disconnecting Horizon WebSocket client"));
	}
}

bool UHorizonSubsystem::SendMessage(const FString& Message)
{
	if (WebSocketClient)
	{
		return WebSocketClient->SendMessage(Message);
	}
	return false;
}

bool UHorizonSubsystem::SendBinaryMessage(const TArray<uint8>& Data)
{
	if (WebSocketClient)
	{
		return WebSocketClient->SendBinaryMessage(Data);
	}
	return false;
}

bool UHorizonSubsystem::IsConnected() const
{
	return WebSocketClient ? WebSocketClient->IsConnected() : false;
}

EHorizonWebSocketState UHorizonSubsystem::GetConnectionState() const
{
	return WebSocketClient ? WebSocketClient->GetConnectionState() : EHorizonWebSocketState::Disconnected;
}

void UHorizonSubsystem::SetHeartbeatEnabled(bool bEnabled)
{
	if (WebSocketClient)
	{
		WebSocketClient->bEnableHeartbeat = bEnabled;
	}
}

void UHorizonSubsystem::SetHeartbeatInterval(float IntervalSeconds)
{
	if (WebSocketClient)
	{
		WebSocketClient->HeartbeatIntervalSeconds = IntervalSeconds;
	}
}

void UHorizonSubsystem::SetAutoReconnect(bool bEnabled)
{
	if (WebSocketClient)
	{
		WebSocketClient->bAutoReconnect = bEnabled;
	}
}

void UHorizonSubsystem::SetMaxReconnectAttempts(int32 MaxAttempts)
{
	if (WebSocketClient)
	{
		WebSocketClient->MaxReconnectAttempts = MaxAttempts;
	}
}

FString UHorizonSubsystem::GetHorizonStatus() const
{
	if (!WebSocketClient)
	{
		return TEXT("No WebSocket client");
	}

	FString StateStr;
	switch (WebSocketClient->GetConnectionState())
	{
		case EHorizonWebSocketState::Disconnected: StateStr = TEXT("Disconnected"); break;
		case EHorizonWebSocketState::Connecting: StateStr = TEXT("Connecting"); break;
		case EHorizonWebSocketState::Connected: StateStr = TEXT("Connected"); break;
		case EHorizonWebSocketState::Closing: StateStr = TEXT("Closing"); break;
		case EHorizonWebSocketState::Closed: StateStr = TEXT("Closed"); break;
		case EHorizonWebSocketState::Failed: StateStr = TEXT("Failed"); break;
		case EHorizonWebSocketState::Reconnecting: StateStr = TEXT("Reconnecting"); break;
		default: StateStr = TEXT("Unknown"); break;
	}

	return FString::Printf(TEXT("State: %s, Server: %s, Attempts: %d/%d"), 
		*StateStr, 
		*WebSocketClient->GetServerURL(), 
		WebSocketClient->GetCurrentReconnectAttempts(),
		WebSocketClient->MaxReconnectAttempts);
}

void UHorizonSubsystem::RegisterClientEventHandlers()
{
	if (WebSocketClient)
	{
		WebSocketClient->OnConnected.AddDynamic(this, &UHorizonSubsystem::HandleClientConnected);
		WebSocketClient->OnConnectionError.AddDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
		WebSocketClient->OnClosed.AddDynamic(this, &UHorizonSubsystem::HandleClientClosed);
		WebSocketClient->OnMessage.AddDynamic(this, &UHorizonSubsystem::HandleClientMessage);
	}
}

void UHorizonSubsystem::UnregisterClientEventHandlers()
{
	if (WebSocketClient)
	{
		WebSocketClient->OnConnected.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnected);
		WebSocketClient->OnConnectionError.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
		WebSocketClient->OnClosed.RemoveDynamic(this, &UHorizonSubsystem::HandleClientClosed);
		WebSocketClient->OnMessage.RemoveDynamic(this, &UHorizonSubsystem::HandleClientMessage);
	}
}

void UHorizonSubsystem::HandleClientConnected(bool bSuccess)
{
	if (bSuccess)
	{
		TotalSuccessfulConnections++;
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket client connected successfully"));
	}
	else
	{
		UE_LOG(LogHorizon, Warning, TEXT("Horizon WebSocket client connection failed"));
	}
	
	OnConnected.Broadcast(bSuccess);
}

void UHorizonSubsystem::HandleClientConnectionError(const FString& ErrorMessage)
{
	UE_LOG(LogHorizon, Error, TEXT("Horizon WebSocket connection error: %s"), *ErrorMessage);
	OnConnectionError.Broadcast(ErrorMessage);
}

void UHorizonSubsystem::HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket connection closed: %d - %s (Clean: %s)"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
	OnClosed.Broadcast(StatusCode, Reason, bWasClean);
}

void UHorizonSubsystem::HandleClientMessage(const FString& Message)
{
	UE_LOG(LogHorizon, VeryVerbose, TEXT("Horizon WebSocket received message: %s"), *Message);
	OnMessage.Broadcast(Message);
}
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client))
		{
			ValidClients.Add(Client);
		}
	}
	return ValidClients;
}

TArray<UHorizonWebSocketClient*> UHorizonSubsystem::GetConnectedWebSockets() const
{
	TArray<UHorizonWebSocketClient*> ConnectedClients;
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client) && Client->IsConnected())
		{
			ConnectedClients.Add(Client);
		}
	}
	return ConnectedClients;
}

TArray<UHorizonWebSocketClient*> UHorizonSubsystem::FindWebSocketsByURL(const FString& URL) const
{
	TArray<UHorizonWebSocketClient*> MatchingClients;
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client) && Client->GetServerURL() == URL)
		{
			MatchingClients.Add(Client);
		}
	}
	return MatchingClients;
}

void UHorizonSubsystem::DisconnectAllClients()
{
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client))
		{
			Client->Disconnect();
		}
	}
	
	UE_LOG(LogHorizon, Log, TEXT("Disconnected all Horizon WebSocket clients"));
}

int32 UHorizonSubsystem::GetActiveClientCount() const
{
	int32 Count = 0;
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client))
		{
			Count++;
		}
	}
	return Count;
}

int32 UHorizonSubsystem::GetConnectedClientCount() const
{
	int32 Count = 0;
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client) && Client->IsConnected())
		{
			Count++;
		}
	}
	return Count;
}

int32 UHorizonSubsystem::BroadcastMessage(const FString& Message)
{
	if (Message.IsEmpty())
	{
		return 0;
	}

	int32 SentCount = 0;
	TArray<UHorizonWebSocketClient*> ConnectedClients = GetConnectedWebSockets();
	
	for (UHorizonWebSocketClient* Client : ConnectedClients)
	{
		if (Client->SendMessage(Message))
		{
			SentCount++;
		}
	}

	UE_LOG(LogHorizon, Log, TEXT("Broadcast message to %d/%d clients: %s"), SentCount, ConnectedClients.Num(), *Message);
	return SentCount;
}

int32 UHorizonSubsystem::BroadcastBinaryMessage(const TArray<uint8>& Data)
{
	if (Data.Num() == 0)
	{
		return 0;
	}

	int32 SentCount = 0;
	TArray<UHorizonWebSocketClient*> ConnectedClients = GetConnectedWebSockets();
	
	for (UHorizonWebSocketClient* Client : ConnectedClients)
	{
		if (Client->SendBinaryMessage(Data))
		{
			SentCount++;
		}
	}

	UE_LOG(LogHorizon, Log, TEXT("Broadcast binary message (%d bytes) to %d/%d clients"), Data.Num(), SentCount, ConnectedClients.Num());
	return SentCount;
}

void UHorizonSubsystem::CleanupInvalidClients()
{
	int32 RemovedCount = ManagedClients.RemoveAll([](UHorizonWebSocketClient* Client)
	{
		return !IsValid(Client);
	});

	if (RemovedCount > 0)
	{
		UE_LOG(LogHorizon, Log, TEXT("Cleaned up %d invalid Horizon WebSocket clients. Active clients: %d"), RemovedCount, ManagedClients.Num());
	}
}

void UHorizonSubsystem::RegisterClientEventHandlers(UHorizonWebSocketClient* Client)
{
	if (Client)
	{
		Client->OnConnected.AddDynamic(this, &UHorizonSubsystem::HandleClientConnected);
		Client->OnConnectionError.AddDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
		Client->OnClosed.AddDynamic(this, &UHorizonSubsystem::HandleClientClosed);
	}
}

void UHorizonSubsystem::UnregisterClientEventHandlers(UHorizonWebSocketClient* Client)
{
	if (Client)
	{
		Client->OnConnected.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnected);
		Client->OnConnectionError.RemoveDynamic(this, &UHorizonSubsystem::HandleClientConnectionError);
		Client->OnClosed.RemoveDynamic(this, &UHorizonSubsystem::HandleClientClosed);
	}
}

void UHorizonSubsystem::HandleClientConnected(bool bSuccess)
{
	if (bSuccess)
	{
		TotalSuccessfulConnections++;
		UE_LOG(LogHorizon, Log, TEXT("Subsystem: Horizon WebSocket client connected successfully. Total successful connections: %d"), TotalSuccessfulConnections);
	}
	
	OnAnyClientConnected.Broadcast(bSuccess);
}

void UHorizonSubsystem::HandleClientConnectionError(const FString& ErrorMessage)
{
	UE_LOG(LogHorizon, Warning, TEXT("Subsystem: Horizon WebSocket client connection error: %s"), *ErrorMessage);
	OnAnyClientConnectionError.Broadcast(ErrorMessage);
}

void UHorizonSubsystem::HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogHorizon, Log, TEXT("Subsystem: Horizon WebSocket client closed - Code: %d, Reason: %s, Clean: %s"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
	OnAnyClientClosed.Broadcast(StatusCode, Reason, bWasClean);
}

FString UHorizonSubsystem::GetHorizonStatus() const
{
	FString Status = FString::Printf(TEXT("Horizon v%s - "), *FHorizonModule::GetVersion());
	Status += FString::Printf(TEXT("Active: %d, Connected: %d, "), GetActiveClientCount(), GetConnectedClientCount());
	Status += FString::Printf(TEXT("Total Created: %d, Success Rate: %.1f%%"), TotalClientsCreated, GetConnectionSuccessRate());
	
	if (bGlobalDebugMode)
	{
		Status += TEXT(" [DEBUG MODE]");
	}
	
	return Status;
}

void UHorizonSubsystem::SetGlobalDebugMode(bool bEnableDebug)
{
	bGlobalDebugMode = bEnableDebug;
	
	// Apply to existing clients
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client))
		{
			Client->bVerboseLogging = bEnableDebug;
		}
	}
	
	UE_LOG(LogHorizon, Log, TEXT("Global debug mode %s"), bEnableDebug ? TEXT("enabled") : TEXT("disabled"));
}

void UHorizonSubsystem::SetGlobalHeartbeatSettings(bool bEnable, float Interval)
{
	bGlobalHeartbeatEnabled = bEnable;
	GlobalHeartbeatInterval = FMath::Clamp(Interval, 5.0f, 300.0f);
	
	// Apply to existing clients
	for (UHorizonWebSocketClient* Client : ManagedClients)
	{
		if (IsValid(Client))
		{
			Client->bEnableHeartbeat = bEnable;
			Client->HeartbeatIntervalSeconds = GlobalHeartbeatInterval;
		}
	}
	
	UE_LOG(LogHorizon, Log, TEXT("Global heartbeat settings updated - Enabled: %s, Interval: %.1fs"), 
		bEnable ? TEXT("Yes") : TEXT("No"), GlobalHeartbeatInterval);
}