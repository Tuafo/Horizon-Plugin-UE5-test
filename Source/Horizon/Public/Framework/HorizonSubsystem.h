#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Core/HorizonDelegates.h"
#include "HorizonSubsystem.generated.h"

// Forward declarations
class UHorizonWebSocketClient;
enum class EHorizonWebSocketState : uint8;

/**
 * Horizon Subsystem
 * Provides centralized management of Horizon WebSocket clients across the game instance
 * Handles automatic cleanup and provides global access to Horizon functionality
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
	 * Create a new WebSocket client managed by this subsystem
	 * @return New WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem", meta = (CallInEditor = "true"))
	UHorizonWebSocketClient* CreateWebSocket();

	/**
	 * Create and immediately connect a WebSocket client
	 * @param URL The WebSocket server URL
	 * @param Protocol The WebSocket protocol (optional)
	 * @return New connected WebSocket client instance, or nullptr if connection failed
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	UHorizonWebSocketClient* CreateAndConnectWebSocket(const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Remove a WebSocket client from management and clean it up
	 * @param Client The client to remove
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	void RemoveWebSocket(UHorizonWebSocketClient* Client);

	/**
	 * Get all active WebSocket clients
	 * @return Array of all managed WebSocket clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem")
	TArray<UHorizonWebSocketClient*> GetAllWebSockets() const;

	/**
	 * Get all connected WebSocket clients
	 * @return Array of all connected WebSocket clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem")
	TArray<UHorizonWebSocketClient*> GetConnectedWebSockets() const;

	/**
	 * Find WebSocket clients by server URL
	 * @param URL The server URL to search for
	 * @return Array of clients connected to the specified URL
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem")
	TArray<UHorizonWebSocketClient*> FindWebSocketsByURL(const FString& URL) const;

	/**
	 * Disconnect all managed WebSocket clients
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	void DisconnectAllClients();

	/**
	 * Get the number of active WebSocket clients
	 * @return Number of managed clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem")
	int32 GetActiveClientCount() const;

	/**
	 * Get the number of connected WebSocket clients
	 * @return Number of connected clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem")
	int32 GetConnectedClientCount() const;

	/**
	 * Broadcast a message to all connected clients
	 * @param Message The message to broadcast
	 * @return Number of clients the message was sent to
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	int32 BroadcastMessage(const FString& Message);

	/**
	 * Broadcast a binary message to all connected clients
	 * @param Data The binary data to broadcast
	 * @return Number of clients the message was sent to
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	int32 BroadcastBinaryMessage(const TArray<uint8>& Data);

	/**
	 * Clean up invalid client references
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem")
	void CleanupInvalidClients();

	// Events for monitoring all WebSocket activity
	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem Events")
	FOnHorizonWebSocketConnected OnAnyClientConnected;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem Events")
	FOnHorizonWebSocketConnectionError OnAnyClientConnectionError;

	UPROPERTY(BlueprintAssignable, Category = "Horizon|Subsystem Events")
	FOnHorizonWebSocketClosed OnAnyClientClosed;

protected:
	/**
	 * Register event handlers for a new client
	 * @param Client The client to register handlers for
	 */
	void RegisterClientEventHandlers(UHorizonWebSocketClient* Client);

	/**
	 * Unregister event handlers for a client
	 * @param Client The client to unregister handlers from
	 */
	void UnregisterClientEventHandlers(UHorizonWebSocketClient* Client);

	// Event handlers for global monitoring
	UFUNCTION()
	void HandleClientConnected(bool bSuccess);

	UFUNCTION()
	void HandleClientConnectionError(const FString& ErrorMessage);

	UFUNCTION()
	void HandleClientClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

private:
	// All managed WebSocket clients
	UPROPERTY()
	TArray<UHorizonWebSocketClient*> ManagedClients;

	// Cleanup timer
	FTimerHandle CleanupTimer;

	// Statistics
	int32 TotalClientsCreated = 0;
	int32 TotalConnectionAttempts = 0;
	int32 TotalSuccessfulConnections = 0;

public:
	// Statistics getters
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem|Statistics")
	int32 GetTotalClientsCreated() const { return TotalClientsCreated; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem|Statistics")
	int32 GetTotalConnectionAttempts() const { return TotalConnectionAttempts; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem|Statistics")
	int32 GetTotalSuccessfulConnections() const { return TotalSuccessfulConnections; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem|Statistics")
	float GetConnectionSuccessRate() const 
	{ 
		return TotalConnectionAttempts > 0 ? (float)TotalSuccessfulConnections / TotalConnectionAttempts * 100.0f : 0.0f; 
	}

	// Horizon-specific features

	/**
	 * Get Horizon system status
	 * @return Status information as a formatted string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Subsystem|Status")
	FString GetHorizonStatus() const;

	/**
	 * Enable or disable debug mode for all clients
	 * @param bEnableDebug Whether to enable debug mode
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem|Debug")
	void SetGlobalDebugMode(bool bEnableDebug);

	/**
	 * Set global heartbeat settings for all future clients
	 * @param bEnable Whether to enable heartbeat
	 * @param Interval Heartbeat interval in seconds
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|Subsystem|Configuration")
	void SetGlobalHeartbeatSettings(bool bEnable, float Interval = 30.0f);

private:
	// Global settings
	bool bGlobalDebugMode = false;
	bool bGlobalHeartbeatEnabled = true;
	float GlobalHeartbeatInterval = 30.0f;
};