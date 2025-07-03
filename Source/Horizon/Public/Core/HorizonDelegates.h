
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/Engine.h"
#include "HorizonDelegates.generated.h"

// Horizon WebSocket Delegate Declarations - Centralized to avoid redefinition
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketConnected, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketConnectionError, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHorizonWebSocketClosed, int32, StatusCode, const FString&, Reason, bool, bWasClean);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketMessage, const FString&, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHorizonWebSocketRawMessage, const TArray<uint8>&, Data, int32, Size, int32, BytesRemaining);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonWebSocketMessageSent, const FString&, Message);

/**
 * Dummy class to ensure Unreal Header Tool processes this file
 * This class exists solely to trigger UHT processing of the delegate declarations above
 */
UCLASS()
class HORIZON_API UHorizonDelegateContainer : public UObject
{
	GENERATED_BODY()

public:
	UHorizonDelegateContainer() {}
};