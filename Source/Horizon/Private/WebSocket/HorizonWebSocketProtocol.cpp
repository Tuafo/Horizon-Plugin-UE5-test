#include "WebSocket/HorizonWebSocketProtocol.h"
#include "Misc/Base64.h"
#include "Misc/SecureHash.h"
#include "HAL/UnrealMemory.h"

const FString FHorizonWebSocketProtocol::WebSocketMagicString = TEXT("258EAFA5-E914-47DA-95CA-C5AB0DC85B11");

FString FHorizonWebSocketProtocol::GenerateWebSocketKey()
{
	TArray<uint8> KeyBytes;
	KeyBytes.SetNum(16);

	for (int32 i = 0; i < 16; i++)
	{
		KeyBytes[i] = FMath::RandRange(0, 255);
	}

	return FBase64::Encode(KeyBytes);
}

FString FHorizonWebSocketProtocol::CreateHandshakeRequest(const FString& Host, int32 Port, bool bIsSecure, const FString& Path, const FString& Key, const FString& Protocol)
{
	FString HostWithPort = Host;
	if ((bIsSecure && Port != 443) || (!bIsSecure && Port != 80))
	{
		HostWithPort += FString::Printf(TEXT(":%d"), Port);
	}

	FString Request = FString::Printf(TEXT(
		"GET %s HTTP/1.1\r\n"
		"Host: %s\r\n"
		"Upgrade: websocket\r\n"
		"Connection: Upgrade\r\n"
		"Sec-WebSocket-Key: %s\r\n"
		"Sec-WebSocket-Version: 13\r\n"),
		*Path, *HostWithPort, *Key);

	if (!Protocol.IsEmpty())
	{
		Request += FString::Printf(TEXT("Sec-WebSocket-Protocol: %s\r\n"), *Protocol);
	}

	Request += TEXT("\r\n");

	return Request;
}

bool FHorizonWebSocketProtocol::ValidateHandshakeResponse(const FString& Response, const FString& Key)
{
	if (!Response.Contains(TEXT("101")))
	{
		return false;
	}

	FString CombinedString = Key + WebSocketMagicString;
	FTCHARToUTF8 UTF8String(*CombinedString);
	TArray<uint8> StringBytes;
	StringBytes.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());

	uint8 Hash[FSHA1::DigestSize];
	FSHA1 Sha1Gen;
	Sha1Gen.Update(StringBytes.GetData(), StringBytes.Num());
	Sha1Gen.Final();
	Sha1Gen.GetHash(Hash);

	FString ExpectedAccept = FBase64::Encode(Hash, FSHA1::DigestSize);

	return Response.Contains(FString::Printf(TEXT("Sec-WebSocket-Accept: %s"), *ExpectedAccept));
}

bool FHorizonWebSocketProtocol::ProcessWebSocketFrame(TArray<uint8>& InOutFrameBuffer, bool& bOutIsFinal, uint8& OutOpcode, TArray<uint8>& OutPayload)
{
	if (InOutFrameBuffer.Num() < 2)
	{
		return false; // Need at least 2 bytes for header
	}

	uint8 FirstByte = InOutFrameBuffer[0];
	uint8 SecondByte = InOutFrameBuffer[1];

	bOutIsFinal = (FirstByte & 0x80) != 0;
	OutOpcode = FirstByte & 0x0F;
	uint64 PayloadLength = SecondByte & 0x7F;

	int32 HeaderSize = 2;

	if (PayloadLength == 126)
	{
		if (InOutFrameBuffer.Num() < HeaderSize + 2) return false;
		PayloadLength = (InOutFrameBuffer[HeaderSize] << 8) | InOutFrameBuffer[HeaderSize + 1];
		HeaderSize += 2;
	}
	else if (PayloadLength == 127)
	{
		if (InOutFrameBuffer.Num() < HeaderSize + 8) return false;
		PayloadLength = 0;
		for (int32 i = 0; i < 8; i++)
		{
			PayloadLength = (PayloadLength << 8) | InOutFrameBuffer[HeaderSize + i];
		}
		HeaderSize += 8;
	}

	int32 FrameSize = HeaderSize + PayloadLength;
	if (InOutFrameBuffer.Num() < FrameSize)
	{
		return false; // Incomplete frame
	}

	if (PayloadLength > 0)
	{
		OutPayload.SetNum(PayloadLength);
		FMemory::Memcpy(OutPayload.GetData(), InOutFrameBuffer.GetData() + HeaderSize, PayloadLength);
	}
    else
    {
        OutPayload.Empty();
    }

	InOutFrameBuffer.RemoveAt(0, FrameSize, false); // Do not allow shrinking

	return true;
}

TArray<uint8> FHorizonWebSocketProtocol::CreateWebSocketFrame(const FString& Message, bool bIsBinary)
{
	TArray<uint8> Frame;
	TArray<uint8> Payload;

    FTCHARToUTF8 UTF8String(*Message);
    Payload.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());

	uint8 FirstByte = 0x80 | (bIsBinary ? 0x02 : 0x01);
	Frame.Add(FirstByte);

	uint64 PayloadLength = Payload.Num();
	if (PayloadLength < 126)
	{
		Frame.Add(0x80 | static_cast<uint8>(PayloadLength));
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

	TArray<uint8> MaskKey;
	for (int32 i = 0; i < 4; i++)
	{
		uint8 MaskByte = FMath::RandRange(0, 255);
		MaskKey.Add(MaskByte);
		Frame.Add(MaskByte);
	}

	for (int32 i = 0; i < Payload.Num(); i++)
	{
		Frame.Add(Payload[i] ^ MaskKey[i % 4]);
	}

	return Frame;
}

TArray<uint8> FHorizonWebSocketProtocol::CreateCloseFrame(uint16 Code, const FString& Reason)
{
	TArray<uint8> Frame;
	TArray<uint8> Payload;

	Payload.Add((Code >> 8) & 0xFF);
	Payload.Add(Code & 0xFF);

	if (!Reason.IsEmpty())
	{
		FTCHARToUTF8 UTF8Reason(*Reason);
		Payload.Append(reinterpret_cast<const uint8*>(UTF8Reason.Get()), UTF8Reason.Length());
	}

	Frame.Add(0x88);

	uint64 PayloadLength = Payload.Num();
	Frame.Add(0x80 | static_cast<uint8>(PayloadLength));

	TArray<uint8> MaskKey;
	for (int32 i = 0; i < 4; i++)
	{
		uint8 MaskByte = FMath::RandRange(0, 255);
		MaskKey.Add(MaskByte);
		Frame.Add(MaskByte);
	}

	for (int32 i = 0; i < Payload.Num(); i++)
	{
		Frame.Add(Payload[i] ^ MaskKey[i % 4]);
	}

	return Frame;
} 