#include "HorizonWebSocketComponent.h"
#include "HorizonWebSocketClient.h"
#include "Horizon.h"
#include "Engine/World.h"
#include "TimerManager.h"

UHorizonWebSocketComponent::UHorizonWebSocketComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	WebSocket = nullptr;
}

void UHorizonWebSocketComponent::BeginPlay()
{
	Super::BeginPlay();
	
	InitializeWebSocket();
	
	if (bAutoConnect && !AutoConnectURL.IsEmpty())
	{
		if (AutoConnectDelay > 0.0f)
		{
			// Schedule auto-connection with delay
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimer(AutoConnectTimer, this, &UHorizonWebSocketComponent::PerformAutoConnect, AutoConnectDelay, false);
			}
		}
		else
		{
			// Connect immediately
			PerformAutoConnect();
		}
	}
}

void UHorizonWebSocketComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Clear auto-connect timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoConnectTimer);
	}

	// Clean up WebSocket client
	if (WebSocket)
	{
		UnbindWebSocketEvents();
		WebSocket->Disconnect();
		WebSocket = nullptr;
	}

	Super::EndPlay(EndPlayReason);
}

bool UHorizonWebSocketComponent::Connect(const FString& URL, const FString& Protocol)
{
	if (!WebSocket)
	{
		UE_LOG(LogHorizon, Error, TEXT("WebSocket client is not initialized"));
		return false;
	}

	return WebSocket->Connect(URL, Protocol);
}

void UHorizonWebSocketComponent::Disconnect()
{
	if (WebSocket)
	{
		WebSocket->Disconnect();
	}
}

bool UHorizonWebSocketComponent::SendMessage(const FString& Message)
{
	if (!WebSocket)
	{
		return false;
	}

	return WebSocket->SendMessage(Message);
}

bool UHorizonWebSocketComponent::SendBinaryMessage(const TArray<uint8>& Data)
{
	if (!WebSocket)
	{
		return false;
	}

	return WebSocket->SendBinaryMessage(Data);
}

bool UHorizonWebSocketComponent::IsConnected() const
{
	return WebSocket ? WebSocket->IsConnected() : false;
}

EHorizonWebSocketState UHorizonWebSocketComponent::GetConnectionState() const
{
	return WebSocket ? WebSocket->GetConnectionState() : EHorizonWebSocketState::Disconnected;
}

FString UHorizonWebSocketComponent::GetServerURL() const
{
	return WebSocket ? WebSocket->GetServerURL() : FString();
}

FString UHorizonWebSocketComponent::GetServerProtocol() const
{
	return WebSocket ? WebSocket->GetServerProtocol() : FString();
}

int32 UHorizonWebSocketComponent::GetCurrentReconnectAttempts() const
{
	return WebSocket ? WebSocket->GetCurrentReconnectAttempts() : 0;
}

void UHorizonWebSocketComponent::ForceReconnect()
{
	if (WebSocket)
	{
		WebSocket->ForceReconnect();
	}
}

void UHorizonWebSocketComponent::SendHeartbeat()
{
	if (WebSocket)
	{
		WebSocket->SendHeartbeat();
	}
}

// Configuration methods
void UHorizonWebSocketComponent::SetHeartbeatEnabled(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bEnableHeartbeat = bEnabled;
	}
}

void UHorizonWebSocketComponent::SetHeartbeatInterval(float IntervalSeconds)
{
	if (WebSocket)
	{
		WebSocket->HeartbeatIntervalSeconds = FMath::Clamp(IntervalSeconds, 5.0f, 300.0f);
	}
}

void UHorizonWebSocketComponent::SetMaxReconnectAttempts(int32 MaxAttempts)
{
	if (WebSocket)
	{
		WebSocket->MaxReconnectAttempts = FMath::Clamp(MaxAttempts, 1, 10);
	}
}

void UHorizonWebSocketComponent::SetAutoReconnect(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bAutoReconnect = bEnabled;
	}
}

void UHorizonWebSocketComponent::SetVerboseLogging(bool bEnabled)
{
	if (WebSocket)
	{
		WebSocket->bVerboseLogging = bEnabled;
	}
}

bool UHorizonWebSocketComponent::GetHeartbeatEnabled() const
{
	return WebSocket ? WebSocket->bEnableHeartbeat : false;
}

float UHorizonWebSocketComponent::GetHeartbeatInterval() const
{
	return WebSocket ? WebSocket->HeartbeatIntervalSeconds : 0.0f;
}

int32 UHorizonWebSocketComponent::GetMaxReconnectAttempts() const
{
	return WebSocket ? WebSocket->MaxReconnectAttempts : 0;
}

bool UHorizonWebSocketComponent::GetAutoReconnect() const
{
	return WebSocket ? WebSocket->bAutoReconnect : false;
}

bool UHorizonWebSocketComponent::GetVerboseLogging() const
{
	return WebSocket ? WebSocket->bVerboseLogging : false;
}

// Event handlers
void UHorizonWebSocketComponent::HandleWebSocketConnected(bool bSuccess)
{
	UE_LOG(LogHorizon, Log, TEXT("Component received Horizon WebSocket connected event: %s"), bSuccess ? TEXT("Success") : TEXT("Failed"));
	OnConnected.Broadcast(bSuccess);
}

void UHorizonWebSocketComponent::HandleWebSocketConnectionError(const FString& ErrorMessage)
{
	UE_LOG(LogHorizon, Warning, TEXT("Component received Horizon WebSocket connection error: %s"), *ErrorMessage);
	OnConnectionError.Broadcast(ErrorMessage);
}

void UHorizonWebSocketComponent::HandleWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogHorizon, Log, TEXT("Component received Horizon WebSocket closed event - Code: %d, Reason: %s, Clean: %s"), 
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No"));
	OnClosed.Broadcast(StatusCode, Reason, bWasClean);
}

void UHorizonWebSocketComponent::HandleWebSocketMessage(const FString& Message)
{
	UE_LOG(LogHorizon, VeryVerbose, TEXT("Component received Horizon WebSocket message: %s"), *Message);
	OnMessage.Broadcast(Message);
}

void UHorizonWebSocketComponent::HandleWebSocketRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining)
{
	UE_LOG(LogHorizon, VeryVerbose, TEXT("Component received Horizon WebSocket raw message: %d bytes"), Size);
	OnRawMessage.Broadcast(Data, Size, BytesRemaining);
}

void UHorizonWebSocketComponent::HandleWebSocketMessageSent(const FString& Message)
{
	UE_LOG(LogHorizon, VeryVerbose, TEXT("Component received Horizon WebSocket message sent event: %s"), *Message);
	OnMessageSent.Broadcast(Message);
}

// Private methods
void UHorizonWebSocketComponent::InitializeWebSocket()
{
	if (!WebSocket)
	{
		WebSocket = NewObject<UHorizonWebSocketClient>(this);
		BindWebSocketEvents();
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket client initialized for component"));
	}
}

void UHorizonWebSocketComponent::BindWebSocketEvents()
{
	if (WebSocket)
	{
		WebSocket->OnConnected.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketConnected);
		WebSocket->OnConnectionError.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketConnectionError);
		WebSocket->OnClosed.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketClosed);
		WebSocket->OnMessage.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketMessage);
		WebSocket->OnRawMessage.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketRawMessage);
		WebSocket->OnMessageSent.AddDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketMessageSent);
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket events bound to component"));
	}
}

void UHorizonWebSocketComponent::UnbindWebSocketEvents()
{
	if (WebSocket)
	{
		WebSocket->OnConnected.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketConnected);
		WebSocket->OnConnectionError.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketConnectionError);
		WebSocket->OnClosed.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketClosed);
		WebSocket->OnMessage.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketMessage);
		WebSocket->OnRawMessage.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketRawMessage);
		WebSocket->OnMessageSent.RemoveDynamic(this, &UHorizonWebSocketComponent::HandleWebSocketMessageSent);
		
		UE_LOG(LogHorizon, Log, TEXT("Horizon WebSocket events unbound from component"));
	}
}

void UHorizonWebSocketComponent::PerformAutoConnect()
{
	UE_LOG(LogHorizon, Log, TEXT("Performing auto-connect to %s"), *AutoConnectURL);
	Connect(AutoConnectURL, AutoConnectProtocol);
}