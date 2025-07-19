#include "Core/Horizon.h"
#include "Threading/HorizonThreadPool.h"
#include "Config/HorizonSettings.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#define LOCTEXT_NAMESPACE "FHorizonModule"

DEFINE_LOG_CATEGORY(LogHorizon);

void FHorizonModule::StartupModule()
{
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module v%s starting up"), *GetVersion());
	
	bWebSocketInitialized = false;
	bThreadPoolInitialized = false;
	
	// Initialize subsystems in order
	InitializeThreadPool();
	InitializeWebSocket();
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module initialized successfully"));
}

void FHorizonModule::ShutdownModule()
{
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module shutting down"));
	
	// Shutdown in reverse order
	ShutdownWebSocket();
	ShutdownThreadPool();
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Module shutdown complete"));
}

void FHorizonModule::InitializeWebSocket()
{
	// Initialize platform-specific networking
#if PLATFORM_WINDOWS
	WSADATA WsaData;
	int Result = WSAStartup(MAKEWORD(2, 2), &WsaData);
	if (Result != 0)
	{
		UE_LOG(LogHorizon, Error, TEXT("WSAStartup failed with error: %d"), Result);
		bWebSocketInitialized = false;
		return;
	}
#endif

	bWebSocketInitialized = true;
	UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket system initialized"));
}

void FHorizonModule::ShutdownWebSocket()
{
	if (bWebSocketInitialized)
	{
#if PLATFORM_WINDOWS
		WSACleanup();
#endif
		bWebSocketInitialized = false;
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket system shutdown"));
	}
}

void FHorizonModule::InitializeThreadPool()
{
	// Get thread pool size from settings
	int32 ThreadPoolSize = 0;
	if (const UHorizonSettings* Settings = GetDefault<UHorizonSettings>())
	{
		ThreadPoolSize = Settings->ThreadPoolSize;
	}
	
	// Initialize thread pool
	auto ThreadPoolInstance = Horizon::Threading::FThreadPool::Get();
	if (ThreadPoolInstance.IsValid())
	{
		bThreadPoolInitialized = true;
		UE_LOG(LogHorizon, Log, TEXT("Horizon thread pool initialized with %d threads"), 
			ThreadPoolInstance->GetThreadCount());
	}
	else
	{
		UE_LOG(LogHorizon, Warning, TEXT("Failed to initialize Horizon thread pool"));
	}
}

void FHorizonModule::ShutdownThreadPool()
{
	if (bThreadPoolInitialized)
	{
		// Shutdown thread pool
		auto ThreadPoolInstance = Horizon::Threading::FThreadPool::Get();
		if (ThreadPoolInstance.IsValid())
		{
			ThreadPoolInstance->Shutdown();
		}
		bThreadPoolInitialized = false;
		UE_LOG(LogHorizon, Log, TEXT("Horizon thread pool shutdown"));
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHorizonModule, Horizon)