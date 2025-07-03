#include "WebSocket/HorizonWebSocketWorker.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "WebSocket/HorizonWebSocketProtocol.h"
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

	// Resolve address using modern UE5.6 API
	FAddressInfoResult AddressInfo = SocketSubsystem->GetAddressInfo(*ConnectHost, nullptr, EAddressInfoFlags::Default, NAME_None);
	if (AddressInfo.ReturnCode != SE_NO_ERROR || AddressInfo.Results.Num() == 0)
	{
		return false;
	}

	// Use the first address result
	TSharedRef<FInternetAddr> Addr = AddressInfo.Results[0].Address;
	Addr->SetPort(ConnectPort);

	if (!Client->Socket->Connect(*Addr))
	{
		return false;
	}

	// Perform WebSocket handshake
	FString WebSocketKey = FHorizonWebSocketProtocol::GenerateWebSocketKey();
	FString HandshakeRequest = FHorizonWebSocketProtocol::CreateHandshakeRequest(ConnectHost, ConnectPort, bConnectIsSecure, ConnectPath, WebSocketKey, ConnectProtocol);

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

	return FHorizonWebSocketProtocol::ValidateHandshakeResponse(Response, WebSocketKey);
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
		TArray<uint8> Frame = FHorizonWebSocketProtocol::CreateWebSocketFrame(OutgoingMessage, false);
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

void FHorizonWebSocketWorker::ProcessIncomingMessageImmediate(const TArray<uint8>& Data)
{
	// This function is intended to be part of an immediate processing mode,
	// which is not fully implemented in the provided code.
	// We'll leave it as a placeholder.
}

bool FHorizonWebSocketWorker::SendMessageDataImmediate(const TArray<uint8>& FrameData)
{
	// This function is intended to be part of an immediate processing mode,
	// which is not fully implemented in the provided code.
	// We'll leave it as a placeholder.
	return SendData(FrameData);
} 