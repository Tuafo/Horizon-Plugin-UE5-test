#pragma once

#include "CoreMinimal.h"

class HORIZON_API FHorizonWebSocketProtocol
{
public:
	// WebSocket magic string for handshake
	static const FString WebSocketMagicString;

	static FString GenerateWebSocketKey();
	
	static FString CreateHandshakeRequest(const FString& Host, int32 Port, bool bIsSecure, const FString& Path, const FString& Key, const FString& Protocol);
	
	static bool ValidateHandshakeResponse(const FString& Response, const FString& Key);
	
	static bool ProcessWebSocketFrame(TArray<uint8>& InOutFrameBuffer, bool& bOutIsFinal, uint8& OutOpcode, TArray<uint8>& OutPayload);
	
	static TArray<uint8> CreateWebSocketFrame(const FString& Message, bool bIsBinary);
	
	static TArray<uint8> CreateCloseFrame(uint16 Code, const FString& Reason);
}; 