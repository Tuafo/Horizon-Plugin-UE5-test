// Copyright Epic Games, Inc. All Rights Reserved.

#include "HorizonWebSocketClient.h"
#include "Horizon.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "HAL/PlatformProcess.h"
#include "Misc/DateTime.h"
#include "Async/Async.h"
#include "Misc/Base64.h"
#include "Misc/Guid.h"
#include "HAL/UnrealMemory.h"
#include "Misc/SecureHash.h"

// WebSocket magic string for handshake
static const FString WebSocketMagicString = TEXT("258EAFA5-E914-47DA-95CA-C5AB0DC85B11");

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

FString UHorizonWebSocketClient::GenerateWebSocketKey()
{
	// Generate a random 16-byte key
	TArray<uint8> KeyBytes;
	KeyBytes.SetNum(16);
	
	for (int32 i = 0; i < 16; i++)
	{
		KeyBytes[i] = FMath::RandRange(0, 255);
	}
	
	return FBase64::Encode(KeyBytes);
}

FString UHorizonWebSocketClient::CreateHandshakeRequest(const FString& Host, const FString& Path, const FString& Key, const FString& Protocol)
{
	FString Request = FString::Printf(TEXT(
		"GET %s HTTP/1.1\r\n"
		"Host: %s\r\n"
		"Upgrade: websocket\r\n"
		"Connection: Upgrade\r\n"
		"Sec-WebSocket-Key: %s\r\n"
		"Sec-WebSocket-Version: 13\r\n"),
		*Path, *Host, *Key);
	
	if (!Protocol.IsEmpty())
	{
		Request += FString::Printf(TEXT("Sec-WebSocket-Protocol: %s\r\n"), *Protocol);
	}
	
	Request += TEXT("\r\n");
	
	return Request;
}

bool UHorizonWebSocketClient::ValidateHandshakeResponse(const FString& Response, const FString& Key)
{
	// Check for 101 Switching Protocols
	if (!Response.Contains(TEXT("101")))
	{
		return false;
	}
	
	// Validate Sec-WebSocket-Accept
	FString CombinedString = Key + WebSocketMagicString;
	
	// Convert to UTF-8 bytes
	FTCHARToUTF8 UTF8String(*CombinedString);
	TArray<uint8> StringBytes;
	StringBytes.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());
	
	// Calculate SHA-1 hash
	uint8 Hash[FSHA1::DigestSize];
	FSHA1 Sha1Gen;
	Sha1Gen.Update(StringBytes.GetData(), StringBytes.Num());
	Sha1Gen.Final();
	Sha1Gen.GetHash(Hash);
	
	// Encode to Base64
	FString ExpectedAccept = FBase64::Encode(Hash, FSHA1::DigestSize);
	
	return Response.Contains(FString::Printf(TEXT("Sec-WebSocket-Accept: %s"), *ExpectedAccept));
}

void UHorizonWebSocketClient::ProcessReceivedData()
{
	TArray<uint8> NewData;
	while (IncomingData.Dequeue(NewData))
	{
		FrameBuffer.Append(NewData);
		
		// Process complete frames
		while (ProcessWebSocketFrame(FrameBuffer))
		{
			// Frame was processed, continue with next
		}
	}
}

bool UHorizonWebSocketClient::ProcessWebSocketFrame(const TArray<uint8>& FrameData)
{
	if (FrameData.Num() < 2)
	{
		return false; // Need at least 2 bytes for header
	}

	uint8 FirstByte = FrameData[0];
	uint8 SecondByte = FrameData[1];
	
	bool bFinal = (FirstByte & 0x80) != 0;
	uint8 Opcode = FirstByte & 0x0F;
	bool bMasked = (SecondByte & 0x80) != 0;
	uint64 PayloadLength = SecondByte & 0x7F;
	
	int32 HeaderSize = 2;
	
	// Calculate extended payload length
	if (PayloadLength == 126)
	{
		if (FrameData.Num() < HeaderSize + 2)
			return false;
			
		PayloadLength = (FrameData[HeaderSize] << 8) | FrameData[HeaderSize + 1];
		HeaderSize += 2;
	}
	else if (PayloadLength == 127)
	{
		if (FrameData.Num() < HeaderSize + 8)
			return false;
			
		PayloadLength = 0;
		for (int32 i = 0; i < 8; i++)
		{
			PayloadLength = (PayloadLength << 8) | FrameData[HeaderSize + i];
		}
		HeaderSize += 8;
	}
	
	// Check if we have the complete frame
	if (FrameData.Num() < HeaderSize + PayloadLength)
	{
		return false; // Incomplete frame
	}
	
	// Extract payload
	TArray<uint8> Payload;
	if (PayloadLength > 0)
	{
		Payload.SetNum(PayloadLength);
		FMemory::Memcpy(Payload.GetData(), FrameData.GetData() + HeaderSize, PayloadLength);
	}
	
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
			
			if (PayloadLength >= 2)
			{
				CloseCode = (Payload[0] << 8) | Payload[1];
				if (PayloadLength > 2)
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
			TArray<uint8> PongFrame = CreateWebSocketFrame(TEXT(""), false);
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
	
	// Remove processed frame from buffer
	int32 FrameSize = HeaderSize + PayloadLength;
	FrameBuffer.RemoveAt(0, FrameSize);
	
	return true;
}

TArray<uint8> UHorizonWebSocketClient::CreateWebSocketFrame(const FString& Message, bool bIsBinary)
{
	TArray<uint8> Frame;
	TArray<uint8> Payload;
	
	if (bIsBinary)
	{
		// For binary, convert string to UTF-8
		FTCHARToUTF8 UTF8String(*Message);
		Payload.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());
	}
	else
	{
		// For text, convert to UTF-8
		FTCHARToUTF8 UTF8String(*Message);
		Payload.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());
	}
	
	// First byte: FIN=1, RSV=000, Opcode
	uint8 FirstByte = 0x80 | (bIsBinary ? 0x02 : 0x01);
	Frame.Add(FirstByte);
	
	// Second byte and payload length
	uint64 PayloadLength = Payload.Num();
	if (PayloadLength < 126)
	{
		Frame.Add(0x80 | static_cast<uint8>(PayloadLength)); // Masked bit + length
	}
	else if (PayloadLength < 65536)
	{
		Frame.Add(0x80 | 126);
		Frame.Add((PayloadLength >> 8) & 0xFF);
		Frame.Add(PayloadLength & 0xFF);
	}
	else
	{
		Frame.Add(0x80 | 127);
		for (int32 i = 7; i >= 0; i--)
		{
			Frame.Add((PayloadLength >> (i * 8)) & 0xFF);
		}
	}
	
	// Masking key (required for client frames)
	TArray<uint8> MaskKey;
	for (int32 i = 0; i < 4; i++)
	{
		uint8 MaskByte = FMath::RandRange(0, 255);
		MaskKey.Add(MaskByte);
		Frame.Add(MaskByte);
	}
	
	// Masked payload
	for (int32 i = 0; i < Payload.Num(); i++)
	{
		Frame.Add(Payload[i] ^ MaskKey[i % 4]);
	}
	
	return Frame;
}

TArray<uint8> UHorizonWebSocketClient::CreateCloseFrame(uint16 Code, const FString& Reason)
{
	TArray<uint8> Frame;
	TArray<uint8> Payload;
	
	// Add close code
	Payload.Add((Code >> 8) & 0xFF);
	Payload.Add(Code & 0xFF);
	
	// Add reason
	if (!Reason.IsEmpty())
	{
		FTCHARToUTF8 UTF8Reason(*Reason);
		Payload.Append(reinterpret_cast<const uint8*>(UTF8Reason.Get()), UTF8Reason.Length());
	}
	
	// Create frame header
	Frame.Add(0x88); // FIN=1, Opcode=8 (close)
	
	uint64 PayloadLength = Payload.Num();
	if (PayloadLength < 126)
	{
		Frame.Add(0x80 | static_cast<uint8>(PayloadLength));
	}
	// Note: Close frames typically don't exceed 125 bytes
	
	// Masking key
	TArray<uint8> MaskKey;
	for (int32 i = 0; i < 4; i++)
	{
		uint8 MaskByte = FMath::RandRange(0, 255);
		MaskKey.Add(MaskByte);
		Frame.Add(MaskByte);
	}
	
	// Masked payload
	for (int32 i = 0; i < Payload.Num(); i++)
	{
		Frame.Add(Payload[i] ^ MaskKey[i % 4]);
	}
	
	return Frame;
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

// Worker Thread Implementation
FHorizonWebSocketWorker::FHorizonWebSocketWorker(UHorizonWebSocketClient* InClient)
	: Client(InClient)
	, bStopRequested(false)
	, bIsConnecting(false)
	, ConnectPort(0)
	, bConnectIsSecure(false)
{
}

FHorizonWebSocketWorker::~FHorizonWebSocketWorker()
{
}

bool FHorizonWebSocketWorker::Init()
{
	return true;
}

uint32 FHorizonWebSocketWorker::Run()
{
	while (!bStopRequested)
	{
		if (bIsConnecting)
		{
			if (PerformHandshake())
			{
				// Connection successful
				Client->OnWebSocketConnected();
				bIsConnecting = false;
				
				// Main message loop
				while (!bStopRequested && Client->IsConnected())
				{
					HandleIncomingMessages();
					HandleOutgoingMessages();
					FPlatformProcess::Sleep(0.01f); // 10ms sleep
				}
			}
			else
			{
				// Connection failed
				Client->OnWebSocketConnectionError(TEXT("Handshake failed"));
				bIsConnecting = false;
			}
		}
		else
		{
			FPlatformProcess::Sleep(0.1f); // 100ms sleep when not connecting
		}
	}
	
	return 0;
}

void FHorizonWebSocketWorker::Stop()
{
	bStopRequested = true;
}

void FHorizonWebSocketWorker::Exit()
{
}

void FHorizonWebSocketWorker::StartConnection(const FString& Host, int32 Port, const FString& Path, const FString& Protocol, bool bIsSecure)
{
	ConnectHost = Host;
	ConnectPort = Port;
	ConnectPath = Path;
	ConnectProtocol = Protocol;
	bConnectIsSecure = bIsSecure;
	bIsConnecting = true;
}

void FHorizonWebSocketWorker::StopConnection()
{
	bStopRequested = true;
	bIsConnecting = false;
}

bool FHorizonWebSocketWorker::PerformHandshake()
{
	// Create socket
	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (!SocketSubsystem)
	{
		return false;
	}
	
	{
		FScopeLock Lock(&Client->SocketMutex);
		Client->Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("HorizonWebSocket"));
		if (!Client->Socket)
		{
			return false;
		}
	}
	
	// Resolve address
	auto ResolveInfo = SocketSubsystem->GetHostByName(TCHAR_TO_ANSI(*ConnectHost));
	while (!ResolveInfo->IsComplete())
	{
		FPlatformProcess::Sleep(0.01f);
		if (bStopRequested)
		{
			return false;
		}
	}
	
	if (ResolveInfo->GetErrorCode() != 0)
	{
		return false;
	}
	
	// Connect to server
	TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();
	Addr->SetIp(ResolveInfo->GetResolvedAddress().Addr);
	Addr->SetPort(ConnectPort);
	
	if (!Client->Socket->Connect(*Addr))
	{
		return false;
	}
	
	// Perform WebSocket handshake
	FString WebSocketKey = Client->GenerateWebSocketKey();
	FString HandshakeRequest = Client->CreateHandshakeRequest(ConnectHost, ConnectPath, WebSocketKey, ConnectProtocol);
	
	// Send handshake request
	TArray<uint8> RequestData;
	FTCHARToUTF8 UTF8Request(*HandshakeRequest);
	RequestData.Append(reinterpret_cast<const uint8*>(UTF8Request.Get()), UTF8Request.Length());
	
	if (!SendData(RequestData))
	{
		return false;
	}
	
	// Read handshake response
	TArray<uint8> ResponseData;
	if (!ReceiveData(ResponseData))
	{
		return false;
	}
	
	FString Response = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(ResponseData.GetData())));
	
	return Client->ValidateHandshakeResponse(Response, WebSocketKey);
}

bool FHorizonWebSocketWorker::SendData(const TArray<uint8>& Data)
{
	FScopeLock Lock(&Client->SocketMutex);
	if (!Client->Socket)
	{
		return false;
	}
	
	int32 BytesSent = 0;
	return Client->Socket->Send(Data.GetData(), Data.Num(), BytesSent) && BytesSent == Data.Num();
}

bool FHorizonWebSocketWorker::ReceiveData(TArray<uint8>& OutData)
{
	FScopeLock Lock(&Client->SocketMutex);
	if (!Client->Socket)
	{
		return false;
	}
	
	uint32 PendingDataSize = 0;
	if (!Client->Socket->HasPendingData(PendingDataSize) || PendingDataSize == 0)
	{
		// Wait for data with timeout
		if (!Client->Socket->Wait(ESocketWaitConditions::WaitForRead, FTimespan::FromSeconds(5)))
		{
			return false;
		}
		
		if (!Client->Socket->HasPendingData(PendingDataSize) || PendingDataSize == 0)
		{
			return false;
		}
	}
	
	OutData.SetNum(PendingDataSize);
	int32 BytesRead = 0;
	return Client->Socket->Recv(OutData.GetData(), PendingDataSize, BytesRead) && BytesRead > 0;
}

void FHorizonWebSocketWorker::HandleIncomingMessages()
{
	TArray<uint8> IncomingData;
	if (ReceiveData(IncomingData))
	{
		Client->IncomingData.Enqueue(IncomingData);
	}
}

void FHorizonWebSocketWorker::HandleOutgoingMessages()
{
	// Handle text messages
	FString OutgoingMessage;
	while (Client->OutgoingMessages.Dequeue(OutgoingMessage))
	{
		TArray<uint8> Frame = Client->CreateWebSocketFrame(OutgoingMessage, false);
		if (SendData(Frame))
		{
			Client->OnWebSocketMessageSent(OutgoingMessage);
		}
	}
	
	// Handle binary messages
	TArray<uint8> OutgoingBinary;
	while (Client->OutgoingBinaryMessages.Dequeue(OutgoingBinary))
	{
		if (SendData(OutgoingBinary))
		{
			// For binary messages, we'll just log the size
			Client->OnWebSocketMessageSent(FString::Printf(TEXT("Binary data (%d bytes)"), OutgoingBinary.Num()));
		}
	}
}