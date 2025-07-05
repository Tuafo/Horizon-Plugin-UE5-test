#include "WebSocket/HorizonWebSocketWorker.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketProtocol.h"
#include "WebSocket/HorizonWebSocketSender.h"
#include "WebSocket/HorizonWebSocketReceiver.h"
#include "Core/Horizon.h"
#include "HAL/PlatformProcess.h"
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "IPAddress.h"

FHorizonWebSocketWorker::FHorizonWebSocketWorker(UHorizonWebSocketClient* InClient)
	: Client(InClient)
	, bStopRequested(false)
	, bIsConnecting(false)
	, ConnectPort(0)
	, bConnectIsSecure(false)
{
	Sender = MakeUnique<FHorizonWebSocketSender>(InClient);
	Receiver = MakeUnique<FHorizonWebSocketReceiver>(InClient);
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
					// Process outgoing messages first for better responsiveness
					Sender->HandleOutgoingMessages();
					
					// Then handle incoming messages
					Receiver->HandleIncomingMessages();
					
					// Short sleep time (0.5ms) for more responsive message handling
					// This ensures "immediate" messages are processed quickly
					FPlatformProcess::Sleep(0.0005f); // 0.5ms sleep for more responsive messaging
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
			FPlatformProcess::Sleep(0.01f); // 10ms sleep when not connecting
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
}

bool FHorizonWebSocketWorker::PerformHandshake()
{
	// Create socket
	ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (!SocketSubsystem)
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to get socket subsystem"));
		return false;
	}

	{
		FScopeLock Lock(&Client->SocketMutex);
		Client->Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("HorizonWebSocket"));
		if (!Client->Socket)
		{
			UE_LOG(LogHorizon, Error, TEXT("Failed to create socket"));
			return false;
		}
	}

	// Resolve address using modern UE5.6 API
	FAddressInfoResult AddressInfo = SocketSubsystem->GetAddressInfo(*ConnectHost, nullptr, EAddressInfoFlags::Default, NAME_None);
	if (AddressInfo.ReturnCode != SE_NO_ERROR || AddressInfo.Results.Num() == 0)
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to resolve host: %s, Error: %d"), *ConnectHost, AddressInfo.ReturnCode);
		return false;
	}

	// Use the first address result
	TSharedRef<FInternetAddr> Addr = AddressInfo.Results[0].Address;
	Addr->SetPort(ConnectPort);

	UE_LOG(LogHorizon, Log, TEXT("Connecting to %s:%d"), *ConnectHost, ConnectPort);
	
	if (!Client->Socket->Connect(*Addr))
	{
		UE_LOG(LogHorizon, Error, TEXT("Socket connection failed to %s:%d"), *ConnectHost, ConnectPort);
		return false;
	}

	UE_LOG(LogHorizon, Log, TEXT("Socket connected, performing WebSocket handshake"));

	// Perform WebSocket handshake
	FString WebSocketKey = FHorizonWebSocketProtocol::GenerateWebSocketKey();
	FString HandshakeRequest = FHorizonWebSocketProtocol::CreateHandshakeRequest(ConnectHost, ConnectPort, bConnectIsSecure, ConnectPath, WebSocketKey, ConnectProtocol);

	UE_LOG(LogHorizon, Verbose, TEXT("Sending handshake request:\n%s"), *HandshakeRequest);

	// Send handshake request
	TArray<uint8> RequestData;
	FTCHARToUTF8 UTF8Request(*HandshakeRequest);
	RequestData.Append(reinterpret_cast<const uint8*>(UTF8Request.Get()), UTF8Request.Length());

	if (!SendData(RequestData))
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to send handshake request"));
		return false;
	}

	// Read handshake response
	TArray<uint8> ResponseData;
	if (!ReceiveData(ResponseData))
	{
		UE_LOG(LogHorizon, Error, TEXT("Failed to receive handshake response"));
		return false;
	}

	FString Response = FString(UTF8_TO_TCHAR(reinterpret_cast<const char*>(ResponseData.GetData())));
	UE_LOG(LogHorizon, Verbose, TEXT("Received handshake response:\n%s"), *Response);

	bool bValidHandshake = FHorizonWebSocketProtocol::ValidateHandshakeResponse(Response, WebSocketKey);
	
	if (bValidHandshake)
	{
		UE_LOG(LogHorizon, Log, TEXT("WebSocket handshake successful"));
	}
	else
	{
		UE_LOG(LogHorizon, Error, TEXT("WebSocket handshake validation failed"));
	}
	
	return bValidHandshake;
}

bool FHorizonWebSocketWorker::SendData(const TArray<uint8>& Data)
{
	if (Sender.IsValid())
	{
		return Sender->SendData(Data);
	}
	return false;
}

bool FHorizonWebSocketWorker::ReceiveData(TArray<uint8>& OutData)
{
	if (Receiver.IsValid())
	{
		return Receiver->ReceiveData(OutData);
	}
	return false;
}

void FHorizonWebSocketWorker::HandleIncomingMessages()
{
	if (Receiver.IsValid())
	{
		Receiver->HandleIncomingMessages();
	}
}

void FHorizonWebSocketWorker::HandleOutgoingMessages()
{
	if (Sender.IsValid())
	{
		Sender->HandleOutgoingMessages();
	}
}

void FHorizonWebSocketWorker::ProcessIncomingMessageImmediate(const TArray<uint8>& Data)
{
	if (Receiver.IsValid())
	{
		Receiver->ProcessIncomingMessageImmediate(Data);
	}
}

bool FHorizonWebSocketWorker::EnqueueMessage(const FString& Message)
{
	if (Sender.IsValid())
	{
		return Sender->EnqueueMessage(Message);
	}
	return false;
}

bool FHorizonWebSocketWorker::EnqueueBinaryMessage(const TArray<uint8>& Data)
{
	if (Sender.IsValid())
	{
		return Sender->EnqueueBinaryMessage(Data);
	}
	return false;
}