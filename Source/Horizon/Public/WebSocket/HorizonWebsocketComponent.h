#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Engine.h"
#include "Core/HorizonDelegates.h"
#include "HorizonWebSocketComponent.generated.h"

// Forward declarations
class UHorizonWebSocketClient;
enum class EHorizonWebSocketState : uint8;

/**
 * Horizon WebSocket Component
 * Actor component that provides WebSocket functionality to any Actor
 * Features auto-connection, event delegation, and easy Blueprint integration
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Horizon), meta=(BlueprintSpawnableComponent))
class HORIZON_API UHorizonWebSocketComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHorizonWebSocketComponent();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection")
	bool bAutoConnect = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect"))
	FString AutoConnectURL = TEXT("ws://localhost:8080");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect"))
	FString AutoConnectProtocol = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|WebSocket|Auto Connection", meta = (EditCondition = "bAutoConnect"))
	float AutoConnectDelay = 0.0f;

	// WebSocket Client Instance
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Horizon|WebSocket")
	UHorizonWebSocketClient* WebSocket;

	// Event delegates (forwarded from the WebSocket client)
	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnected OnConnected;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessage OnMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketRawMessage OnRawMessage;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|WebSocket|Events")
	FOnHorizonWebSocketMessageSent OnMessageSent;

	// Public API (delegates to WebSocket client)
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void Disconnect();

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging")
	bool SendMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging")
	bool SendBinaryMessage(const TArray<uint8>& Data);
	
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging", meta=(DisplayName="Send Message Immediate"))
	bool SendMessageImmediate(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Messaging", meta=(DisplayName="Send Binary Message Immediate"))
	bool SendBinaryMessageImmediate(const TArray<uint8>& Data);

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	bool IsConnected() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	EHorizonWebSocketState GetConnectionState() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerURL() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	FString GetServerProtocol() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Status")
	int32 GetCurrentReconnectAttempts() const;

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Connection")
	void ForceReconnect();

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Heartbeat")
	void SendHeartbeat();

	// Configuration access
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetHeartbeatEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetHeartbeatInterval(float IntervalSeconds);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetMaxReconnectAttempts(int32 MaxAttempts);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetAutoReconnect(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Configuration")
	void SetVerboseLogging(bool bEnabled);

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetHeartbeatEnabled() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	float GetHeartbeatInterval() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	int32 GetMaxReconnectAttempts() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetAutoReconnect() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Configuration")
	bool GetVerboseLogging() const;

protected:
	// Event handlers that forward to component delegates
	UFUNCTION()
	void HandleWebSocketConnected(bool bSuccess);

	UFUNCTION()
	void HandleWebSocketConnectionError(const FString& ErrorMessage);

	UFUNCTION()
	void HandleWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

	UFUNCTION()
	void HandleWebSocketMessage(const FString& Message);

	UFUNCTION()
	void HandleWebSocketRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining);

	UFUNCTION()
	void HandleWebSocketMessageSent(const FString& Message);

private:
	void InitializeWebSocket();
	void BindWebSocketEvents();
	void UnbindWebSocketEvents();
	void PerformAutoConnect();

	FTimerHandle AutoConnectTimer;
};