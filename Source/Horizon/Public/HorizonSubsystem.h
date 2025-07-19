
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HorizonDelegates.h"
#include "HorizonSubsystem.generated.h"

// Forward declarations
class UHorizonWebSocketClient;
enum class EHorizonWebSocketState : uint8;

/**
 * Horizon Subsystem
 * Provides centralized management of a single Horizon WebSocket client per game instance
 * Simplified for single-client use case with improved stability
 */
UCLASS()
class HORIZON_API UHorizonSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// USubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/**
	 * Get or create the single WebSocket client for this game instance
	 * @return The WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Client", meta = (CallInEditor = "true"))
	UHorizonWebSocketClient* GetWebSocketClient();

	/**
	 * Connect the WebSocket client to a server
	 * @param URL The WebSocket server URL
	 * @param Protocol The WebSocket protocol (optional)
	 * @return True if connection was initiated successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Client")
	bool Connect(const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Disconnect the WebSocket client
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Client")
	void Disconnect();

	/**
	 * Send a message through the WebSocket client
	 * @param Message The message to send
	 * @return True if message was queued for sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Client")
	bool SendMessage(const FString& Message);

	/**
	 * Send binary data through the WebSocket client
	 * @param Data The binary data to send
	 * @return True if data was queued for sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Client")
	bool SendBinaryMessage(const TArray<uint8>& Data);

	/**
	 * Check if the WebSocket client is connected
	 * @return True if connected
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Client")
	bool IsConnected() const;

	/**
	 * Get the current connection state
	 * @return Current connection state
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Client")
	EHorizonWebSocketState GetConnectionState() const;

	// Events for monitoring WebSocket activity
	UPROPERTY(BlueprintAssignable, Category = "Horizon|Client Events")
	FOnHorizonWebSocketConnected OnConnected;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|Client Events")
	FOnHorizonWebSocketConnectionError OnConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|Client Events")
	FOnHorizonWebSocketClosed OnClosed;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|Client Events")
	FOnHorizonWebSocketMessage OnMessage;

	// Configuration
	UFUNCTION(BlueprintCallable, Category = "Horizon|Configuration")
	void SetHeartbeatEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|Configuration")
	void SetHeartbeatInterval(float IntervalSeconds);

	UFUNCTION(BlueprintCallable, Category = "Horizon|Configuration")
	void SetAutoReconnect(bool bEnabled);

	UFUNCTION(BlueprintCallable, Category = "Horizon|Configuration")
	void SetMaxReconnectAttempts(int32 MaxAttempts);

	/**
	 * Get Horizon system status
	 * @return Status information as a formatted string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Status")
	FString GetHorizonStatus() const;

protected:
	/**
	 * Register event handlers for the client
	 */
	void RegisterClientEventHandlers();

	/**
	 * Unregister event handlers for the client
	 */
	void UnregisterClientEventHandlers();

	// Event handlers for forwarding
	UFUNCTION()
	void HandleClientConnected(bool bSuccess);

	UFUNCTION()
	void HandleClientConnectionError(const FString& ErrorMessage);

	UFUNCTION()
	void HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

	UFUNCTION()
	void HandleClientMessage(const FString& Message);

private:
	// Single WebSocket client
	UPROPERTY()
	UHorizonWebSocketClient* WebSocketClient;

	// Statistics
	int32 TotalConnectionAttempts = 0;
	int32 TotalSuccessfulConnections = 0;

public:
	// Statistics getters
	UFUNCTION(BlueprintPure, Category = "Horizon|Statistics")
	int32 GetTotalConnectionAttempts() const { return TotalConnectionAttempts; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Statistics")
	int32 GetTotalSuccessfulConnections() const { return TotalSuccessfulConnections; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Statistics")
	float GetConnectionSuccessRate() const 
	{ 
		return TotalConnectionAttempts > 0 ? (float)TotalSuccessfulConnections / TotalConnectionAttempts * 100.0f : 0.0f; 
	}
};