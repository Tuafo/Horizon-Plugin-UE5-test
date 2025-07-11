#include "Examples/HorizonExampleActor.h"
#include "WebSocket/HorizonWebSocketComponent.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "Utils/HorizonBlueprintLibrary.h"
#include "Utils/HorizonUtility.h"
#include "WebSocket/HorizonPerformanceMonitor.h"
#include "Engine/World.h"
#include "Core/Horizon.h"

AHorizonExampleActor::AHorizonExampleActor()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create WebSocket component for auto-connection
	WebSocketComponent = CreateDefaultSubobject<UHorizonWebSocketComponent>(TEXT("HorizonWebSocketComponent"));
	
	// Performance monitoring is always enabled in optimized mode
}

void AHorizonExampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHorizonExampleActor::BeginPlay()
{
	Super::BeginPlay();
	
	// The WebSocket component automatically handles event binding and calls Blueprint events
	// For C++ users who want to use the virtual functions, bind to component delegates
	if (WebSocketComponent)
	{
		WebSocketComponent->OnConnected.AddDynamic(this, &AHorizonExampleActor::OnWebSocketConnected);
		WebSocketComponent->OnConnectionError.AddDynamic(this, &AHorizonExampleActor::OnWebSocketConnectionError);
		WebSocketComponent->OnClosed.AddDynamic(this, &AHorizonExampleActor::OnWebSocketClosed);
	}
	
	UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor: WebSocket component initialized"));

	// Auto-connect if enabled
	if (bAutoConnect && !ServerURL.IsEmpty())
	{
		ConnectToServer();
	}

	UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor initialized"));
}

void AHorizonExampleActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Clean disconnect
	if (WebSocketComponent)
	{
		WebSocketComponent->Disconnect();
	}

	UE_LOG(LogHorizon, Log, TEXT("Horizon Example Actor ending play"));
	Super::EndPlay(EndPlayReason);
}


void AHorizonExampleActor::ConnectToServer()
{
	if (!WebSocketComponent)
	{
		UE_LOG(LogHorizon, Error, TEXT("Cannot connect: WebSocket component is null"));
		return;
	}

	if (ServerURL.IsEmpty())
	{
		UE_LOG(LogHorizon, Error, TEXT("Cannot connect: Server URL is empty"));
		return;
	}

	UE_LOG(LogHorizon, Log, TEXT("Connecting to: %s"), *ServerURL);
	
	// Simple connection with performance monitoring enabled
	WebSocketComponent->Connect(ServerURL);
}

void AHorizonExampleActor::DisconnectFromServer()
{
	if (WebSocketComponent)
	{
		UE_LOG(LogHorizon, Log, TEXT("Disconnecting from server"));
		WebSocketComponent->Disconnect();
	}
}

FString AHorizonExampleActor::GetPerformanceStats() const
{
	if (WebSocketComponent)
	{
		return WebSocketComponent->GetPerformanceStats(true);
	}
	
	// Fallback to global performance monitor
	if (Horizon::WebSocket::FHorizonPerformanceMonitor::Get().IsValid())
	{
		return Horizon::WebSocket::FHorizonPerformanceMonitor::Get()->GetStatsAsString(true);
	}
	
	return TEXT("Performance monitor not available");
}

void AHorizonExampleActor::SendTestMessage()
{
	// Example 1: Simple text message (uses batching by default)
	if (WebSocketComponent && WebSocketComponent->SendMessage("Hello from Horizon!"))
	{
		UE_LOG(LogHorizon, Log, TEXT("Simple text message sent (batched)"));
	}
	
	// Example 2: Chat message sent immediately using convenience function
	if (UHorizonUtility::SendChatMessageNow(WebSocketComponent->GetWebSocketClient(), "player123", "hello horizon", "general"))
	{
		UE_LOG(LogHorizon, Log, TEXT("Chat message sent immediately"));
	}
	
	// Example 3: Game action sent immediately using convenience function
	TMap<FString, FString> ActionData;
	ActionData.Add("x", "100.5");
	ActionData.Add("y", "200.0");
	ActionData.Add("z", "50.0");
	if (UHorizonUtility::SendGameActionNow(WebSocketComponent->GetWebSocketClient(), "player123", "move", ActionData))
	{
		UE_LOG(LogHorizon, Log, TEXT("Game action sent immediately"));
	}
	
	// Example 4: Send any message immediately using high priority
	if (UHorizonUtility::SendMessageImmediately(WebSocketComponent->GetWebSocketClient(), "Critical update message"))
	{
		UE_LOG(LogHorizon, Log, TEXT("Critical message sent immediately"));
	}
	
	// Example 5: Traditional batched message (for high-volume scenarios)
	FString CustomMessage = UHorizonUtility::CreateJSONMessage("custom", "test_event", TMap<FString, FString>());
	if (WebSocketComponent && WebSocketComponent->SendMessage(CustomMessage)) // false = use batching
	{
		UE_LOG(LogHorizon, Log, TEXT("Custom message sent (batched)"));
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to send test message"));
	}
}

bool AHorizonExampleActor::IsConnectedToServer() const
{
	return WebSocketComponent ? WebSocketComponent->IsConnected() : false;
}

// Virtual event handlers - can be overridden in derived C++ classes
void AHorizonExampleActor::OnWebSocketConnected(bool bSuccess)
{
	if (bSuccess)
	{
		UE_LOG(LogHorizon, Log, TEXT("Successfully connected to WebSocket server: %s"), *ServerURL);
		
		// Log performance stats on connection
		FString PerfStats = GetPerformanceStats();
		UE_LOG(LogHorizon, Log, TEXT("Performance stats after connection: %s"), *PerfStats);
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to connect to WebSocket server"));
	}
}

void AHorizonExampleActor::OnWebSocketConnectionError(const FString& ErrorMessage)
{
	UE_LOG(LogHorizon, Error, TEXT("Connection error: %s"), *ErrorMessage);
}

void AHorizonExampleActor::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogHorizon, Log, TEXT("Connection closed - Code: %d, Reason: %s, Clean: %s"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
		
	// Log final performance stats
	FString PerfStats = GetPerformanceStats();
	UE_LOG(LogHorizon, Log, TEXT("Final performance stats: %s"), *PerfStats);
}