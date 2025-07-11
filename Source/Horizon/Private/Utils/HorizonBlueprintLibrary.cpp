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
#include "WebSocket/HorizonPerformanceMonitor.h"
#include "Threading/HorizonThreadPool.h"
#include "Utils/HorizonUtility.h"

UHorizonWebSocketClient* UHorizonBlueprintLibrary::CreateWebSocket(const UObject* WorldContext)
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

FString UHorizonBlueprintLibrary::GetPerformanceStatistics(const UObject* WorldContext, bool bIncludeDetailedStats)
{
	auto PerformanceMonitor = Horizon::WebSocket::FHorizonPerformanceMonitor::Get();
	if (PerformanceMonitor.IsValid())
	{
		return PerformanceMonitor->GetStatsAsString(bIncludeDetailedStats);
	}

	return TEXT("Performance monitor not available");
}

FString UHorizonBlueprintLibrary::GetHorizonVersion()
{
	return FHorizonModule::GetVersion();
}

bool UHorizonBlueprintLibrary::IsHorizonFeatureAvailable(const FString& FeatureName)
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

UHorizonSubsystem* UHorizonBlueprintLibrary::GetHorizonSubsystem(const UObject* WorldContext)
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