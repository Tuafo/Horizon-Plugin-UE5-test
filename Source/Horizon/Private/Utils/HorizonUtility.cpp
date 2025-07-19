#include "Utils/HorizonUtility.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "Framework/HorizonSubsystem.h"
#include "Core/Horizon.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/Guid.h"
#include "Misc/Base64.h"
#include "HAL/PlatformMisc.h"
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "WebSocket/HorizonPerformanceMonitor.h"

bool UHorizonUtility::ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath)
{
	if (!IsValidWebSocketURL(URL))
	{
		return false;
	}

	// Extract protocol (ws:// or wss://)
	int32 ProtocolEnd = URL.Find(TEXT("://"));
	if (ProtocolEnd != INDEX_NONE)
	{
		OutProtocol = URL.Left(ProtocolEnd);
		
		// Default port based on protocol
		OutPort = OutProtocol.Equals(TEXT("wss"), ESearchCase::IgnoreCase) ? 443 : 80;
		
		// Extract host, port, and path
		FString HostPortPath = URL.Mid(ProtocolEnd + 3);
		
		// Extract path
		int32 PathStart = HostPortPath.Find(TEXT("/"));
		if (PathStart != INDEX_NONE)
		{
			OutPath = HostPortPath.Mid(PathStart);
			HostPortPath = HostPortPath.Left(PathStart);
		}
		else
		{
			OutPath = TEXT("/");
		}
		
		// Extract port if specified
		int32 PortStart = HostPortPath.Find(TEXT(":"));
		if (PortStart != INDEX_NONE)
		{
			FString PortStr = HostPortPath.Mid(PortStart + 1);
			OutHost = HostPortPath.Left(PortStart);
			
			if (PortStr.IsNumeric())
			{
				OutPort = FCString::Atoi(*PortStr);
			}
		}
		else
		{
			OutHost = HostPortPath;
		}
		
		return true;
	}
	
	return false;
}

bool UHorizonUtility::IsValidWebSocketURL(const FString& URL)
{
	// Basic validation: must start with ws:// or wss://
	if (URL.StartsWith(TEXT("ws://"), ESearchCase::IgnoreCase) || 
		URL.StartsWith(TEXT("wss://"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	
	return false;
}

FString UHorizonUtility::CreateJSONMessage(const FString& Namespace, const FString& Event, const TMap<FString, FString>& Data, bool bAutoAddUUID, bool bAutoAddTimestamp)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	
	// Add namespace and event
	JsonObject->SetStringField(TEXT("namespace"), Namespace);
	JsonObject->SetStringField(TEXT("event"), Event);
	
	// Create a copy of the data to potentially add UUID and timestamp
	TMap<FString, FString> DataWithExtras = Data;
	
	// Automatically add UUID if not present and requested
	if (bAutoAddUUID && !DataWithExtras.Contains(TEXT("uuid")))
	{
		DataWithExtras.Add(TEXT("uuid"), FGuid::NewGuid().ToString());
	}
	
	// Automatically add timestamp if not present and requested
	if (bAutoAddTimestamp && !DataWithExtras.Contains(TEXT("timestamp")))
	{
		DataWithExtras.Add(TEXT("timestamp"), FString::Printf(TEXT("%lld"), FDateTime::Now().ToUnixTimestamp() * 1000));
	}
	
	// Add data as nested object
	TSharedPtr<FJsonObject> DataObject = MakeShareable(new FJsonObject);
	for (const auto& Pair : DataWithExtras)
	{
		DataObject->SetStringField(Pair.Key, Pair.Value);
	}
	
	JsonObject->SetObjectField(TEXT("data"), DataObject);
	
	// Serialize to string
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	
	return OutputString;
}

bool UHorizonUtility::ParseJSONMessage(const FString& JSONMessage, FString& OutNamespace, FString& OutEvent, FString& OutData)
{
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONMessage);
	
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		// Extract namespace and event
		if (JsonObject->HasField(TEXT("namespace")) && JsonObject->HasField(TEXT("event")))
		{
			OutNamespace = JsonObject->GetStringField(TEXT("namespace"));
			OutEvent = JsonObject->GetStringField(TEXT("event"));
			
			// Extract data object as a string
			if (JsonObject->HasField(TEXT("data")))
			{
				TSharedPtr<FJsonObject> DataObject = JsonObject->GetObjectField(TEXT("data"));
				FString DataString;
				TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&DataString);
				FJsonSerializer::Serialize(DataObject.ToSharedRef(), Writer);
				
				OutData = DataString;
				return true;
			}
		}
	}
	
	return false;
}

TArray<uint8> UHorizonUtility::StringToByteArray(const FString& StringData)
{
	TArray<uint8> ByteArray;
	ByteArray.AddUninitialized(StringData.Len());
	
	StringToBytes(StringData, ByteArray.GetData(), StringData.Len());
	
	return ByteArray;
}

FString UHorizonUtility::ByteArrayToString(const TArray<uint8>& ByteData)
{
	if (ByteData.Num() <= 0)
	{
		return FString();
	}
	
	// Create a null-terminated string
	TArray<ANSICHAR> AnsiBuffer;
	AnsiBuffer.AddUninitialized(ByteData.Num() + 1);
	FMemory::Memcpy(AnsiBuffer.GetData(), ByteData.GetData(), ByteData.Num());
	AnsiBuffer[ByteData.Num()] = '\0';
	
	return FString(ANSI_TO_TCHAR(AnsiBuffer.GetData()));
}

FString UHorizonUtility::GenerateClientID()
{
	FGuid Guid = FGuid::NewGuid();
	return Guid.ToString(EGuidFormats::DigitsWithHyphens);
}

int32 UHorizonUtility::CalculateOptimalBatchSize(int32 AverageMessageSize, int32 MaxThroughputPerSecond)
{
	// Safety checks
	AverageMessageSize = FMath::Max(1, AverageMessageSize);
	MaxThroughputPerSecond = FMath::Max(1, MaxThroughputPerSecond);
	
	// Calculate batch size based on message size and throughput
	// For small messages, use larger batches
	// For large messages, use smaller batches
	
	const int32 MinBatchSize = 100;        // Increased from 10
	const int32 MaxBatchSize = 10000;      // Kept the same
	const int32 DefaultBatchSize = 500;    // New high-performance default
	
	// Base calculation: smaller messages = larger batches
	int32 CalculatedBatchSize = 1000000 / (AverageMessageSize * 10);
	
	// Adjust for throughput: higher throughput = larger batches
	CalculatedBatchSize = CalculatedBatchSize * (MaxThroughputPerSecond / 1000);
	
	// Ensure it's at least the default high-performance value
	CalculatedBatchSize = FMath::Max(CalculatedBatchSize, DefaultBatchSize);
	
	// Clamp to reasonable range
	return FMath::Clamp(CalculatedBatchSize, MinBatchSize, MaxBatchSize);
}

int32 UHorizonUtility::CalculateOptimalThreadPoolSize(int32 ReserveMainThreadCores)
{
	// Get the number of CPU cores
	int32 NumCores = FPlatformMisc::NumberOfCores();
	
	// Reserve cores for the main thread and other processes
	int32 ReservedCores = FMath::Max(1, ReserveMainThreadCores);
	
	// Calculate optimal thread pool size
	int32 OptimalSize = FMath::Max(1, NumCores - ReservedCores);
	
	// Limit to a reasonable maximum
	return FMath::Min(OptimalSize, 16);
}

FString UHorizonUtility::FormatBytes(int64 Bytes)
{
	const int64 KB = 1024;
	const int64 MB = KB * 1024;
	const int64 GB = MB * 1024;
	
	if (Bytes >= GB)
	{
		return FString::Printf(TEXT("%.2f GB"), (float)Bytes / GB);
	}
	else if (Bytes >= MB)
	{
		return FString::Printf(TEXT("%.2f MB"), (float)Bytes / MB);
	}
	else if (Bytes >= KB)
	{
		return FString::Printf(TEXT("%.2f KB"), (float)Bytes / KB);
	}
	else
	{
		return FString::Printf(TEXT("%lld bytes"), Bytes);
	}
}

FString UHorizonUtility::CreateChatMessage(const FString& PlayerID, const FString& Message, const FString& Channel)
{
	TMap<FString, FString> ChatData;
	ChatData.Add(TEXT("player_id"), PlayerID);
	ChatData.Add(TEXT("message"), Message);
	ChatData.Add(TEXT("channel"), Channel);
	
	return CreateJSONMessage(TEXT("chat"), TEXT("message"), ChatData);
}

FString UHorizonUtility::CreateGameActionMessage(const FString& PlayerID, const FString& Action, const TMap<FString, FString>& AdditionalData)
{
	TMap<FString, FString> GameData;
	GameData.Add(TEXT("player_id"), PlayerID);
	GameData.Add(TEXT("action"), Action);
	
	// Add any additional data
	for (const auto& Pair : AdditionalData)
	{
		GameData.Add(Pair.Key, Pair.Value);
	}
	
	return CreateJSONMessage(TEXT("game"), TEXT("player_action"), GameData);
}

FString UHorizonUtility::CreateSystemMessage(const FString& MessageType, const TMap<FString, FString>& Data)
{
	TMap<FString, FString> SystemData;
	SystemData.Add(TEXT("message_type"), MessageType);
	
	// Add provided data
	for (const auto& Pair : Data)
	{
		SystemData.Add(Pair.Key, Pair.Value);
	}
	
	return CreateJSONMessage(TEXT("system"), MessageType, SystemData);
}

FString UHorizonUtility::CreatePlayerStatusMessage(const FString& PlayerID, const FString& Status, const TMap<FString, FString>& AdditionalData)
{
	TMap<FString, FString> StatusData;
	StatusData.Add(TEXT("player_id"), PlayerID);
	StatusData.Add(TEXT("status"), Status);
	
	// Add any additional status data
	for (const auto& Pair : AdditionalData)
	{
		StatusData.Add(Pair.Key, Pair.Value);
	}
	
	return CreateJSONMessage(TEXT("player"), TEXT("status_update"), StatusData);
}

bool UHorizonUtility::SendChatMessageNow(UHorizonWebSocketClient* Client, const FString& PlayerID, const FString& Message, const FString& Channel)
{
	if (!Client)
	{
		return false;
	}
	
	FString ChatMessage = CreateChatMessage(PlayerID, Message, Channel);
	return Client->SendMessage(ChatMessage, true); // true = high priority (immediate)
}

bool UHorizonUtility::SendGameActionNow(UHorizonWebSocketClient* Client, const FString& PlayerID, const FString& Action, const TMap<FString, FString>& AdditionalData)
{
	if (!Client)
	{
		return false;
	}
	
	FString ActionMessage = CreateGameActionMessage(PlayerID, Action, AdditionalData);
	return Client->SendMessage(ActionMessage, true); // true = high priority (immediate)
}

bool UHorizonUtility::SendMessageImmediately(UHorizonWebSocketClient* Client, const FString& Message)
{
	if (!Client)
	{
		return false;
	}
	
	return Client->SendMessage(Message, true); // true = high priority (immediate)
}

// WebSocket Creation Functions

UHorizonWebSocketClient* UHorizonUtility::CreateWebSocket(const UObject* WorldContext)
{
	UHorizonSubsystem* Subsystem = GetHorizonSubsystem(WorldContext);
	if (!Subsystem)
	{
		return nullptr;
	}

	UHorizonWebSocketClient* Client = Subsystem->CreateWebSocket();
	if (Client)
	{
		UE_LOG(LogHorizon, Log, TEXT("Created WebSocket client"));
	}

	return Client;
}

FString UHorizonUtility::GetPerformanceStatistics(const UObject* WorldContext, bool bIncludeDetailedStats)
{
	auto PerformanceMonitor = Horizon::WebSocket::FHorizonPerformanceMonitor::Get();
	if (PerformanceMonitor.IsValid())
	{
		return PerformanceMonitor->GetStatsAsString(bIncludeDetailedStats);
	}

	return TEXT("Performance monitor not available");
}

FString UHorizonUtility::GetHorizonVersion()
{
	return FHorizonModule::GetVersion();
}

bool UHorizonUtility::IsHorizonFeatureAvailable(const FString& FeatureName)
{
	if (FeatureName.Equals(TEXT("WebSocket"), ESearchCase::IgnoreCase))
	{
		return FHorizonModule::IsAvailable();
	}
	else if (FeatureName.Equals(TEXT("Threading"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	else if (FeatureName.Equals(TEXT("PerformanceMonitoring"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	else if (FeatureName.Equals(TEXT("BatchSending"), ESearchCase::IgnoreCase))
	{
		return true;
	}
	
	return false;
}

// Helper Functions

UHorizonSubsystem* UHorizonUtility::GetHorizonSubsystem(const UObject* WorldContext)
{
	if (!WorldContext)
	{
		return nullptr;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return nullptr;
	}

	UGameInstance* GameInstance = World->GetGameInstance();
	if (!GameInstance)
	{
		return nullptr;
	}

	return GameInstance->GetSubsystem<UHorizonSubsystem>();
}
}