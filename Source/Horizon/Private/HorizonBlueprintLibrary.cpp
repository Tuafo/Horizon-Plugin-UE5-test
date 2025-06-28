
#include "HorizonBlueprintLibrary.h"
#include "HorizonSubsystem.h"
#include "Horizon.h"
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

bool UHorizonBlueprintLibrary::ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath)
{
	// Reset output parameters
	OutProtocol.Empty();
	OutHost.Empty();
	OutPort = 0;
	OutPath.Empty();

	if (URL.IsEmpty())
	{
		return false;
	}

	FString WorkingURL = URL;

	// Extract protocol
	int32 ProtocolEnd = WorkingURL.Find(TEXT("://"));
	if (ProtocolEnd == INDEX_NONE)
	{
		return false;
	}

	OutProtocol = WorkingURL.Left(ProtocolEnd).ToLower();
	if (OutProtocol != TEXT("ws") && OutProtocol != TEXT("wss"))
	{
		return false;
	}

	WorkingURL = WorkingURL.Mid(ProtocolEnd + 3);

	// Extract path (everything after the first '/')
	int32 PathStart = WorkingURL.Find(TEXT("/"));
	if (PathStart != INDEX_NONE)
	{
		OutPath = WorkingURL.Mid(PathStart);
		WorkingURL = WorkingURL.Left(PathStart);
	}
	else
	{
		OutPath = TEXT("/");
	}

	// Extract port (everything after the last ':')
	int32 PortStart = WorkingURL.Find(TEXT(":"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	if (PortStart != INDEX_NONE)
	{
		FString PortString = WorkingURL.Mid(PortStart + 1);
		OutPort = FCString::Atoi(*PortString);
		OutHost = WorkingURL.Left(PortStart);
	}
	else
	{
		// Use default ports
		OutPort = (OutProtocol == TEXT("wss")) ? 443 : 80;
		OutHost = WorkingURL;
	}

	return !OutHost.IsEmpty() && OutPort > 0;
}

bool UHorizonBlueprintLibrary::IsValidWebSocketURL(const FString& URL)
{
	FString Protocol, Host, Path;
	int32 Port;
	return ParseWebSocketURL(URL, Protocol, Host, Port, Path);
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

FString UHorizonBlueprintLibrary::CreateJSONMessage(const FString& MessageType, const TMap<FString, FString>& Parameters)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	
	// Add message type
	JsonObject->SetStringField(TEXT("type"), MessageType);
	JsonObject->SetStringField(TEXT("timestamp"), FDateTime::Now().ToIso8601());

	// Add parameters
	TSharedPtr<FJsonObject> ParamsObject = MakeShareable(new FJsonObject);
	for (const auto& Param : Parameters)
	{
		ParamsObject->SetStringField(Param.Key, Param.Value);
	}
	JsonObject->SetObjectField(TEXT("data"), ParamsObject);

	// Serialize to string
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return OutputString;
}

bool UHorizonBlueprintLibrary::ParseJSONMessage(const FString& JSONMessage, FString& OutMessageType, TMap<FString, FString>& OutParameters)
{
	OutMessageType.Empty();
	OutParameters.Empty();

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONMessage);

	if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
	{
		return false;
	}

	// Extract message type
	if (!JsonObject->TryGetStringField(TEXT("type"), OutMessageType))
	{
		return false;
	}

	// Extract parameters from data object
	const TSharedPtr<FJsonObject>* DataObject;
	if (JsonObject->TryGetObjectField(TEXT("data"), DataObject) && DataObject->IsValid())
	{
		for (const auto& Field : (*DataObject)->Values)
		{
			FString Value;
			if (Field.Value->TryGetString(Value))
			{
				OutParameters.Add(Field.Key, Value);
			}
		}
	}

	return true;
}

TArray<uint8> UHorizonBlueprintLibrary::StringToByteArray(const FString& StringData)
{
	TArray<uint8> ByteArray;
	
	// Convert string to UTF-8 bytes
	FTCHARToUTF8 UTF8String(*StringData);
	ByteArray.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());

	return ByteArray;
}

FString UHorizonBlueprintLibrary::ByteArrayToString(const TArray<uint8>& ByteData)
{
	// Convert UTF-8 bytes to string
	FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(ByteData.GetData()), ByteData.Num());
	return FString(TCHARData.Length(), TCHARData.Get());
}

FString UHorizonBlueprintLibrary::GenerateClientID()
{
	// Generate a unique client ID using GUID and timestamp
	FGuid NewGuid = FGuid::NewGuid();
	FString Timestamp = FString::FromInt(FDateTime::Now().ToUnixTimestamp());
	
	return FString::Printf(TEXT("Horizon_%s_%s"), *NewGuid.ToString(EGuidFormats::DigitsWithHyphensInBraces), *Timestamp);
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