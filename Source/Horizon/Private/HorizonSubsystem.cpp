
#include "HorizonSubsystem.h"
#include "HorizonWebSocketClient.h"
#include "Horizon.h"
#include "Engine/World.h"
#include "TimerManager.h"

void UHorizonSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem initialized"));

	// Set up periodic cleanup timer (every 30 seconds)
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(CleanupTimer, this, &UHorizonSubsystem::CleanupInvalidClients, 30.0f, true);
	}
}

void UHorizonSubsystem::Deinitialize()
{
	// Clear cleanup timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(CleanupTimer);
	}

	// Disconnect and clean up all clients
	DisconnectAllClients();
	ManagedClients.Empty();

	UE_LOG(LogHorizon, Log, TEXT("Horizon Subsystem deinitialized. Total clients created: %d, Success rate: %.1f%%"), 
		TotalClientsCreated, GetConnectionSuccessRate());

	Super::Deinitialize();
}

UHorizonWebSocketClient* UHorizonSubsystem::CreateWebSocket()
{
	UHorizonWebSocketClient* NewClient = NewObject<UHorizonWebSocketClient>(this);
	if (NewClient)
	{
		// Apply global settings
		NewClient->bEnableHeartbeat = bGlobalHeartbeatEnabled;
		NewClient->HeartbeatIntervalSeconds = GlobalHeartbeatInterval;
		NewClient->bVerboseLogging = bGlobalDebugMode;

		ManagedClients.Add(NewClient);
		RegisterClientEventHandlers(NewClient);
		TotalClientsCreated++;

		UE_LOG(LogHorizon, Log, TEXT("Created Horizon WebSocket client. Total managed clients: %d"), ManagedClients.Num());
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to create Horizon WebSocket client"));
	}

	return NewClient;
}

UHorizonWebSocketClient* UHorizonSubsystem::CreateAndConnectWebSocket(const FString& URL, const FString& Protocol)
{
	UHorizonWebSocketClient* NewClient = CreateWebSocket();
	if (NewClient)
	{
		TotalConnectionAttempts++;
		
		if (NewClient->Connect(URL, Protocol))
		{
			UE_LOG(LogHorizon, Log, TEXT("Created and connecting Horizon WebSocket client to %s"), *URL);
			return NewClient;
		}
		else
		{
			UE_LOG(LogHorizon, Error, TEXT("Failed to connect Horizon WebSocket client to %s"), *URL);
			RemoveWebSocket(NewClient);
			return nullptr;
		}
	}

	return nullptr;
}

void UHorizonSubsystem::RemoveWebSocket(UHorizonWebSocketClient* Client)
{
	if (Client && ManagedClients.Contains(Client))
	{
		UnregisterClientEventHandlers(Client);
		Client->Disconnect();
		ManagedClients.Remove(Client);
		
		UE_LOG(LogHorizon, Log, TEXT("Removed Horizon WebSocket client. Total managed clients: %d"), ManagedClients.Num());
	}
}

TArray<UHorizonWebSocketClient*> UHorizonSubsystem::GetAllWebSockets() const
{
	TArray<UHorizonWebSocketClient*> ValidClients;
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