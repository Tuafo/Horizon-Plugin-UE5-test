#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketWorker.h"
#include "WebSocket/HorizonWebSocketProtocol.h"
#include "Core/Horizon.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "HAL/PlatformProcess.h"
#include "Misc/DateTime.h"
#include "Async/Async.h"
#include "Misc/Base64.h"
#include "Misc/Guid.h"
#include "HAL/UnrealMemory.h"
#include "Misc/SecureHash.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"
#include "Interfaces/IPv4/IPv4Address.h"

UHorizonWebSocketClient::UHorizonWebSocketClient()
	: ConnectionState(EHorizonWebSocketState::Disconnected)
	, CurrentReconnectAttempts(0)
	, bShouldShutdown(false)
	, bIsReconnecting(false)
	, LastHeartbeatTime(0.0)
	, LastMessageReceivedTime(0.0)
	, ReconnectScheduledTime(0.0)
	, Socket(nullptr)
	, ServerPort(0)
	, bIsSecureConnection(false)
{
	// Initialize with current time
	LastHeartbeatTime = FPlatformTime::Seconds();
	LastMessageReceivedTime = LastHeartbeatTime;
}

UHorizonWebSocketClient::~UHorizonWebSocketClient()
{
	CleanupWebSocket();
}

void UHorizonWebSocketClient::BeginDestroy()
{
	CleanupWebSocket();
	Super::BeginDestroy();
}

UWorld* UHorizonWebSocketClient::GetWorld() const
{
	if (IsValid(GetOuter()))
	{
		return GetOuter()->GetWorld();
	}
	return nullptr;
}

void UHorizonWebSocketClient::Tick(float DeltaTime)
{
	// Handle scheduled reconnection
	if (bIsReconnecting && ReconnectScheduledTime > 0.0)
	{
		if (FPlatformTime::Seconds() >= ReconnectScheduledTime)
		{
			ReconnectScheduledTime = 0.0;
			bIsReconnecting = false;

			LogMessage(FString::Printf(TEXT("Attempting reconnection %d/%d"), CurrentReconnectAttempts + 1, MaxReconnectAttempts));
			Connect(ServerURL, ServerProtocol);
		}
	}

	// Process incoming data
	ProcessReceivedData();

	// Check for connection timeout if heartbeat is enabled
	if (bEnableHeartbeat && IsConnected())
	{
		double CurrentTime = FPlatformTime::Seconds();
		double TimeSinceLastMessage = CurrentTime - LastMessageReceivedTime;
		double TimeoutThreshold = HeartbeatIntervalSeconds * 3.0; // 3x heartbeat interval

		if (TimeSinceLastMessage > TimeoutThreshold)
		{
			LogMessage(FString::Printf(TEXT("Connection timeout detected (%.1fs since last message)"), TimeSinceLastMessage), true);

			if (bAutoReconnect && CurrentReconnectAttempts < MaxReconnectAttempts)
			{
				ForceReconnect();
			}
			else
			{
				SetConnectionState(EHorizonWebSocketState::Failed);
				CleanupWebSocket();
			}
		}
		// Send heartbeat if needed
		else if (CurrentTime - LastHeartbeatTime >= HeartbeatIntervalSeconds)
		{
			SendHeartbeat();
		}
	}
}

TStatId UHorizonWebSocketClient::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UHorizonWebSocketClient, STATGROUP_Tickables);
}

bool UHorizonWebSocketClient::Connect(const FString& URL, const FString& Protocol)
{
	if (bShouldShutdown)
	{
		LogMessage(TEXT("Cannot connect: WebSocket is shutting down"), true);
		return false;
	}

	if (URL.IsEmpty())
	{
		LogMessage(TEXT("Cannot connect: URL is empty"), true);
		return false;
	}

	// Clean up existing connection if any
	if (Socket || WebSocketWorker.IsValid())
	{
		CleanupWebSocket();
	}

	ServerURL = URL;
	ServerProtocol = Protocol;

	// Parse URL
	if (!ParseURL(URL, ServerHost, ServerPort, ServerPath, bIsSecureConnection))
	{
		LogMessage(TEXT("Invalid WebSocket URL format"), true);
		SetConnectionState(EHorizonWebSocketState::Failed);
		return false;
	}

	SetConnectionState(EHorizonWebSocketState::Connecting);
	LogMessage(FString::Printf(TEXT("Connecting to %s:%d%s (Secure: %s, Protocol: %s)"),
		*ServerHost, ServerPort, *ServerPath, bIsSecureConnection ? TEXT("Yes") : TEXT("No"), *Protocol));

	// Create and start worker thread
	WebSocketWorker = MakeUnique<FHorizonWebSocketWorker>(this);
	WorkerThread = FRunnableThread::Create(WebSocketWorker.Get(), TEXT("HorizonWebSocketWorker"));

	if (!WorkerThread)
	{
		LogMessage(TEXT("Failed to create worker thread"), true);
		SetConnectionState(EHorizonWebSocketState::Failed);
		return false;
	}

	// Start connection on worker thread
	WebSocketWorker->StartConnection(ServerHost, ServerPort, ServerPath, ServerProtocol, bIsSecureConnection);

	return true;
}

void UHorizonWebSocketClient::Disconnect()
{
	LogMessage(TEXT("Disconnecting WebSocket"));
	SetConnectionState(EHorizonWebSocketState::Closing);
	bShouldShutdown = true;
	CleanupWebSocket();
}

bool UHorizonWebSocketClient::SendMessage(const FString& Message)
{
	if (!IsConnected() || Message.IsEmpty())
	{
		return false;
	}
	
	// Add to outgoing queue
	OutgoingMessages.Enqueue(Message);
	LogMessage(FString::Printf(TEXT("Queued message: %s"), *Message));
	return true;
}

bool UHorizonWebSocketClient::SendBinaryMessage(const TArray<uint8>& Data)
{
	if (!IsConnected() || Data.Num() == 0)
	{
		return false;
	}

	// Add to outgoing binary queue
	OutgoingBinaryMessages.Enqueue(Data);
	LogMessage(FString::Printf(TEXT("Queued binary message: %d bytes"), Data.Num()));
	return true;
}

bool UHorizonWebSocketClient::IsConnected() const
{
	FScopeLock Lock(&StateMutex);
	return ConnectionState == EHorizonWebSocketState::Connected && Socket != nullptr;
}

EHorizonWebSocketState UHorizonWebSocketClient::GetConnectionState() const
{
	FScopeLock Lock(&StateMutex);
	return ConnectionState;
}

void UHorizonWebSocketClient::ForceReconnect()
{
	if (bShouldShutdown)
	{
		return;
	}

	LogMessage(TEXT("Force reconnecting..."));

	// Clean up current connection
	CleanupWebSocket();

	// Schedule reconnection
	HandleReconnection();
}

void UHorizonWebSocketClient::SendHeartbeat()
{
	if (IsConnected() && !HeartbeatMessage.IsEmpty())
	{
		SendMessage(HeartbeatMessage);
		LastHeartbeatTime = FPlatformTime::Seconds();
	}
}

FString UHorizonWebSocketClient::GetServerURL() const
{
	return ServerURL;
}

FString UHorizonWebSocketClient::GetServerProtocol() const
{
	return ServerProtocol;
}

int32 UHorizonWebSocketClient::GetCurrentReconnectAttempts() const
{
	return CurrentReconnectAttempts;
}

void UHorizonWebSocketClient::CleanupWebSocket()
{
	bShouldShutdown = true;

	// Stop worker thread
	if (WebSocketWorker.IsValid())
	{
		WebSocketWorker->StopConnection();
	}

	if (WorkerThread)
	{
		WorkerThread->WaitForCompletion();
		delete WorkerThread;
		WorkerThread = nullptr;
	}

	WebSocketWorker.Reset();

	// Clean up socket
	{
		FScopeLock Lock(&SocketMutex);
		if (Socket)
		{
			Socket->Close();
			ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
			Socket = nullptr;
		}
	}

	// Clear queues
	while (!OutgoingMessages.IsEmpty())
	{
		FString DummyMessage;
		OutgoingMessages.Dequeue(DummyMessage);
	}

	while (!OutgoingBinaryMessages.IsEmpty())
	{
		TArray<uint8> DummyData;
		OutgoingBinaryMessages.Dequeue(DummyData);
	}

	while (!IncomingData.IsEmpty())
	{
		TArray<uint8> DummyData;
		IncomingData.Dequeue(DummyData);
	}

	FrameBuffer.Empty();
	SetConnectionState(EHorizonWebSocketState::Disconnected);
	CurrentReconnectAttempts = 0;
	bIsReconnecting = false;
	ReconnectScheduledTime = 0.0;
}

void UHorizonWebSocketClient::SetConnectionState(EHorizonWebSocketState NewState)
{
	FScopeLock Lock(&StateMutex);

	if (ConnectionState != NewState)
	{
		EHorizonWebSocketState OldState = ConnectionState;
		ConnectionState = NewState;

		LogMessage(FString::Printf(TEXT("State changed from %d to %d"), (int32)OldState, (int32)NewState));
	}
}

void UHorizonWebSocketClient::HandleReconnection()
{
	if (bShouldShutdown || !bAutoReconnect)
	{
		return;
	}

	if (CurrentReconnectAttempts >= MaxReconnectAttempts)
	{
		LogMessage(FString::Printf(TEXT("Max reconnect attempts reached (%d)"), MaxReconnectAttempts), true);
		SetConnectionState(EHorizonWebSocketState::Failed);
		return;
	}

	CurrentReconnectAttempts++;
	bIsReconnecting = true;
	SetConnectionState(EHorizonWebSocketState::Reconnecting);

	// Schedule reconnection with exponential backoff
	float DelayMultiplier = FMath::Pow(2.0f, CurrentReconnectAttempts - 1);
	float ActualDelay = FMath::Min(ReconnectDelaySeconds * DelayMultiplier, 60.0f); // Cap at 60 seconds

	ReconnectScheduledTime = FPlatformTime::Seconds() + ActualDelay;

	LogMessage(FString::Printf(TEXT("Reconnection scheduled in %.1f seconds (Attempt %d/%d)"),
		ActualDelay, CurrentReconnectAttempts, MaxReconnectAttempts));
}

void UHorizonWebSocketClient::LogMessage(const FString& Message, bool bIsError) const
{
	if (bIsError || bVerboseLogging)
	{
		if (bIsError)
		{
			UE_LOG(LogHorizon, Error, TEXT("[WebSocket] %s"), *Message);
		}
		else
		{
			UE_LOG(LogHorizon, Log, TEXT("[WebSocket] %s"), *Message);
		}
	}
}

bool UHorizonWebSocketClient::ParseURL(const FString& URL, FString& OutHost, int32& OutPort, FString& OutPath, bool& bOutIsSecure)
{
	// Reset output parameters
	OutHost.Empty();
	OutPort = 0;
	OutPath.Empty();
	bOutIsSecure = false;

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

	FString Protocol = WorkingURL.Left(ProtocolEnd).ToLower();
	if (Protocol == TEXT("wss"))
	{
		bOutIsSecure = true;
		OutPort = 443; // Default HTTPS port
	}
	else if (Protocol == TEXT("ws"))
	{
		bOutIsSecure = false;
		OutPort = 80; // Default HTTP port
	}
	else
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
		OutHost = WorkingURL;
	}

	return !OutHost.IsEmpty() && OutPort > 0;
}

void UHorizonWebSocketClient::ProcessReceivedData()
{
	TArray<uint8> NewData;
	while (IncomingData.Dequeue(NewData))
	{
		FrameBuffer.Append(NewData);

		// Process complete frames
		bool bIsFinal;
		uint8 Opcode;
		TArray<uint8> Payload;
		while (FHorizonWebSocketProtocol::ProcessWebSocketFrame(FrameBuffer, bIsFinal, Opcode, Payload))
		{
			// Handle different opcodes
			switch (Opcode)
			{
			case 0x1: // Text frame
			{
				FString Message = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData())));
				LastMessageReceivedTime = FPlatformTime::Seconds();

				// Broadcast on game thread
				AsyncTask(ENamedThreads::GameThread, [this, Message]()
					{
						if (IsValid(this))
						{
							OnMessage.Broadcast(Message);
						}
					});
				break;
			}
			case 0x2: // Binary frame
			{
				LastMessageReceivedTime = FPlatformTime::Seconds();

				// Broadcast on game thread
				AsyncTask(ENamedThreads::GameThread, [this, Payload]()
					{
						if (IsValid(this))
						{
							OnRawMessage.Broadcast(Payload, Payload.Num(), 0);
						}
					});
				break;
			}
			case 0x8: // Close frame
			{
				uint16 CloseCode = 1000;
				FString CloseReason;

				if (Payload.Num() >= 2)
				{
					CloseCode = (Payload[0] << 8) | Payload[1];
					if (Payload.Num() > 2)
					{
						CloseReason = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(Payload.GetData() + 2)));
					}
				}

				// Broadcast on game thread
				AsyncTask(ENamedThreads::GameThread, [this, CloseCode, CloseReason]()
					{
						if (IsValid(this))
						{
							OnClosed.Broadcast(CloseCode, CloseReason, true);
						}
					});

				CleanupWebSocket();
				break;
			}
			case 0x9: // Ping frame
			{
				// Send pong response
				TArray<uint8> PongFrame = FHorizonWebSocketProtocol::CreateWebSocketFrame(TEXT(""), false);
				PongFrame[0] = (PongFrame[0] & 0xF0) | 0x0A; // Change opcode to pong
				OutgoingBinaryMessages.Enqueue(PongFrame);
				break;
			}
			case 0xA: // Pong frame
			{
				// Handle pong (heartbeat response)
				LastMessageReceivedTime = FPlatformTime::Seconds();
				break;
			}
			}
		}
	}
}

// Event handlers (called from worker thread, dispatched to game thread)
void UHorizonWebSocketClient::OnWebSocketConnected()
{
	LogMessage(TEXT("WebSocket connected successfully"));
	SetConnectionState(EHorizonWebSocketState::Connected);
	CurrentReconnectAttempts = 0;
	bIsReconnecting = false;
	LastMessageReceivedTime = FPlatformTime::Seconds();

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this]()
		{
			if (IsValid(this))
			{
				OnConnected.Broadcast(true);
			}
		});
}

void UHorizonWebSocketClient::OnWebSocketConnectionError(const FString& Error)
{
	LogMessage(FString::Printf(TEXT("Connection error: %s"), *Error), true);
	SetConnectionState(EHorizonWebSocketState::Failed);

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this, Error]()
		{
			if (IsValid(this))
			{
				OnConnectionError.Broadcast(Error);
			}
		});

	// Handle reconnection if enabled
	if (bAutoReconnect && !bShouldShutdown)
	{
		HandleReconnection();
	}
}

void UHorizonWebSocketClient::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	LogMessage(FString::Printf(TEXT("WebSocket closed - Code: %d, Reason: %s, Clean: %s"),
		StatusCode, *Reason, bWasClean ? TEXT("Yes") : TEXT("No")));

	SetConnectionState(EHorizonWebSocketState::Disconnected);

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this, StatusCode, Reason, bWasClean]()
		{
			if (IsValid(this))
			{
				OnClosed.Broadcast(StatusCode, Reason, bWasClean);
			}
		});

	// Handle reconnection if it wasn't a clean close and reconnection is enabled
	if (!bWasClean && bAutoReconnect && !bShouldShutdown)
	{
		HandleReconnection();
	}
}

void UHorizonWebSocketClient::OnWebSocketMessage(const FString& Message)
{
	LastMessageReceivedTime = FPlatformTime::Seconds();
	LogMessage(FString::Printf(TEXT("Received message: %s"), *Message));

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this, Message]()
		{
			if (IsValid(this))
			{
				OnMessage.Broadcast(Message);
			}
		});
}

void UHorizonWebSocketClient::OnWebSocketRawMessage(const TArray<uint8>& Data)
{
	LastMessageReceivedTime = FPlatformTime::Seconds();
	LogMessage(FString::Printf(TEXT("Received raw message: %d bytes"), Data.Num()));

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
		{
			if (IsValid(this))
			{
				OnRawMessage.Broadcast(Data, Data.Num(), 0);
			}
		});
}

void UHorizonWebSocketClient::OnWebSocketMessageSent(const FString& Message)
{
	LastHeartbeatTime = FPlatformTime::Seconds();
	LogMessage(FString::Printf(TEXT("Message sent: %s"), *Message));

	// Broadcast event on game thread
	AsyncTask(ENamedThreads::GameThread, [this, Message]()
		{
			if (IsValid(this))
			{
				OnMessageSent.Broadcast(Message);
			}
		});
}

// Worker Thread Implementation - THIS WILL BE DELETED
/*
FHorizonWebSocketWorker::FHorizonWebSocketWorker(UHorizonWebSocketClient* InClient)
// ... entire implementation ...
}
*/