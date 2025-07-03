#include "Utils/HorizonBlueprintLibrary.h"
#include "Framework/HorizonSubsystem.h"
#include "Core/Horizon.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Misc/Guid.h"
#include "Misc/DateTime.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

UHorizonWebSocketClient* UHorizonBlueprintLibrary::CreateWebSocket(const UObject* WorldContext)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->CreateWebSocket();
	}

	UE_LOG(LogHorizon, Error, TEXT("Failed to get Horizon subsystem"));
	return nullptr;
}

UHorizonWebSocketClient* UHorizonBlueprintLibrary::QuickConnect(const UObject* WorldContext, const FString& URL, const FString& Protocol)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->CreateAndConnectWebSocket(URL, Protocol);
	}

	UE_LOG(LogHorizon, Error, TEXT("Failed to get Horizon subsystem for quick connect"));
	return nullptr;
}

int32 UHorizonBlueprintLibrary::BroadcastToAllClients(const UObject* WorldContext, const FString& Message)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->BroadcastMessage(Message);
	}

	return 0;
}

void UHorizonBlueprintLibrary::DisconnectAllClients(const UObject* WorldContext)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		Subsystem->DisconnectAllClients();
	}
}

bool UHorizonBlueprintLibrary::IsHorizonWebSocketAvailable()
{
	return FHorizonModule::IsAvailable() && FHorizonModule::Get().IsWebSocketAvailable();
}

FString UHorizonBlueprintLibrary::ConnectionStateToString(EHorizonWebSocketState State)
{
	switch (State)
	{
		case EHorizonWebSocketState::Disconnected:
			return TEXT("Disconnected");
		case EHorizonWebSocketState::Connecting:
			return TEXT("Connecting");
		case EHorizonWebSocketState::Connected:
			return TEXT("Connected");
		case EHorizonWebSocketState::Reconnecting:
			return TEXT("Reconnecting");
		case EHorizonWebSocketState::Failed:
			return TEXT("Failed");
		case EHorizonWebSocketState::Closing:
			return TEXT("Closing");
		default:
			return TEXT("Unknown");
	}
}

TArray<UHorizonWebSocketClient*> UHorizonBlueprintLibrary::GetAllActiveClients(const UObject* WorldContext)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->GetAllWebSockets();
	}

	return TArray<UHorizonWebSocketClient*>();
}

TArray<UHorizonWebSocketClient*> UHorizonBlueprintLibrary::GetAllConnectedClients(const UObject* WorldContext)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->GetConnectedWebSockets();
	}

	return TArray<UHorizonWebSocketClient*>();
}

TArray<UHorizonWebSocketClient*> UHorizonBlueprintLibrary::FindClientsByURL(const UObject* WorldContext, const FString& URL)
{
	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		return Subsystem->FindWebSocketsByURL(URL);
	}

	return TArray<UHorizonWebSocketClient*>();
}

void UHorizonBlueprintLibrary::GetConnectionStatistics(const UObject* WorldContext, int32& OutTotalCreated, int32& OutTotalAttempts, int32& OutTotalSuccessful, float& OutSuccessRate)
{
	OutTotalCreated = 0;
	OutTotalAttempts = 0;
	OutTotalSuccessful = 0;
	OutSuccessRate = 0.0f;

	if (UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext))
	{
		OutTotalCreated = Subsystem->GetTotalClientsCreated();
		OutTotalAttempts = Subsystem->GetTotalConnectionAttempts();
		OutTotalSuccessful = Subsystem->GetTotalSuccessfulConnections();
		OutSuccessRate = Subsystem->GetConnectionSuccessRate();
	}
}

UHorizonWebSocketClient* UHorizonBlueprintLibrary::CreateConfiguredWebSocket(
	const UObject* WorldContext,
	bool bEnableHeartbeat,
	float HeartbeatInterval,
	int32 MaxReconnectAttempts,
	bool bAutoReconnect,
	bool bVerboseLogging)
{
	UHorizonWebSocketClient* Client = CreateWebSocket(WorldContext);
	if (Client)
	{
		ConfigureWebSocket(Client, bEnableHeartbeat, HeartbeatInterval, MaxReconnectAttempts, bAutoReconnect, bVerboseLogging);
	}

	return Client;
}

void UHorizonBlueprintLibrary::ConfigureWebSocket(
	UHorizonWebSocketClient* Client,
	bool bEnableHeartbeat,
	float HeartbeatInterval,
	int32 MaxReconnectAttempts,
	bool bAutoReconnect,
	bool bVerboseLogging)
{
	if (!Client)
	{
		UE_LOG(LogHorizon, Warning, TEXT("Cannot configure null WebSocket client"));
		return;
	}

	Client->bEnableHeartbeat = bEnableHeartbeat;
	Client->HeartbeatIntervalSeconds = FMath::Clamp(HeartbeatInterval, 5.0f, 300.0f);
	Client->MaxReconnectAttempts = FMath::Clamp(MaxReconnectAttempts, 1, 10);
	Client->bAutoReconnect = bAutoReconnect;
	Client->bVerboseLogging = bVerboseLogging;

	UE_LOG(LogHorizon, Log, TEXT("Configured Horizon WebSocket client - Heartbeat: %s (%.1fs), Max Reconnects: %d, Auto Reconnect: %s, Verbose: %s"),
		bEnableHeartbeat ? TEXT("Yes") : TEXT("No"),
		HeartbeatInterval,
		MaxReconnectAttempts,
		bAutoReconnect ? TEXT("Yes") : TEXT("No"),
		bVerboseLogging ? TEXT("Yes") : TEXT("No"));
}

FString UHorizonBlueprintLibrary::GetHorizonVersion()
{
	return FHorizonModule::GetVersion();
}

bool UHorizonBlueprintLibrary::IsHorizonFeatureAvailable(const FString& FeatureName)
{
	if (!FHorizonModule::IsAvailable())
	{
		return false;
	}

	// Check for specific features
	if (FeatureName.Equals(TEXT("WebSocket"), ESearchCase::IgnoreCase))
	{
		return FHorizonModule::Get().IsWebSocketAvailable();
	}

	// Future features can be added here
	// Example: if (FeatureName.Equals(TEXT("HTTP"), ESearchCase::IgnoreCase)) { return IsHTTPAvailable(); }

	return false;
}

UHorizonSubsystem* UHorizonBlueprintLibrary::GetHorizonSubsystem(const UObject* WorldContext)
{
	if (!WorldContext)
	{
		UE_LOG(LogHorizon, Error, TEXT("WorldContext is null"));
		return nullptr;
	}

	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		UE_LOG(LogHorizon, Error, TEXT("Could not get world from context object"));
		return nullptr;
	}

	UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance)
	{
		UE_LOG(LogHorizon, Error, TEXT("Could not get game instance"));
		return nullptr;
	}

	return GameInstance->GetSubsystem<UHorizonSubsystem>();
}