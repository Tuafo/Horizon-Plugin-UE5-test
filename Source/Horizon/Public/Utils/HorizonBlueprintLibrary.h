#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "HorizonBlueprintLibrary.generated.h"

// Forward declaration
class UHorizonSubsystem;

/**
 * Horizon Blueprint Function Library
 * Provides convenient static functions for easy access to Horizon WebSocket functionality in Blueprints
 */
UCLASS()
class HORIZON_API UHorizonBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Quick access functions
	
	/**
	 * Create a new Horizon WebSocket client
	 * @param WorldContext World context for subsystem access
	 * @return New WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Quick Access", meta = (WorldContext = "WorldContext", CallInEditor = "true"))
	static UHorizonWebSocketClient* CreateWebSocket(const UObject* WorldContext);

	/**
	 * Create and immediately connect a WebSocket client
	 * @param WorldContext World context for subsystem access
	 * @param URL The WebSocket server URL
	 * @param Protocol The WebSocket protocol (optional)
	 * @return Connected WebSocket client instance, or nullptr if failed
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Quick Access", meta = (WorldContext = "WorldContext"))
	static UHorizonWebSocketClient* QuickConnect(const UObject* WorldContext, const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Send a message to all connected WebSocket clients
	 * @param WorldContext World context for subsystem access
	 * @param Message The message to broadcast
	 * @return Number of clients the message was sent to
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Quick Access", meta = (WorldContext = "WorldContext"))
	static int32 BroadcastToAllClients(const UObject* WorldContext, const FString& Message);

	/**
	 * Disconnect all WebSocket clients
	 * @param WorldContext World context for subsystem access
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Quick Access", meta = (WorldContext = "WorldContext"))
	static void DisconnectAllClients(const UObject* WorldContext);

	// Information and utility functions

	/**
	 * Check if the Horizon WebSocket system is available
	 * @return True if Horizon WebSocket system is loaded and available
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information")
	static bool IsHorizonWebSocketAvailable();

	/**
	 * Convert WebSocket connection state to a readable string
	 * @param State The connection state to convert
	 * @return Human-readable string representation of the state
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information")
	static FString ConnectionStateToString(EHorizonWebSocketState State);

	/**
	 * Get all active WebSocket clients
	 * @param WorldContext World context for subsystem access
	 * @return Array of all active WebSocket clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information", meta = (WorldContext = "WorldContext"))
	static TArray<UHorizonWebSocketClient*> GetAllActiveClients(const UObject* WorldContext);

	/**
	 * Get all connected WebSocket clients
	 * @param WorldContext World context for subsystem access
	 * @return Array of all connected WebSocket clients
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information", meta = (WorldContext = "WorldContext"))
	static TArray<UHorizonWebSocketClient*> GetAllConnectedClients(const UObject* WorldContext);

	/**
	 * Find WebSocket clients by server URL
	 * @param WorldContext World context for subsystem access
	 * @param URL The server URL to search for
	 * @return Array of clients connected to the specified URL
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information", meta = (WorldContext = "WorldContext"))
	static TArray<UHorizonWebSocketClient*> FindClientsByURL(const UObject* WorldContext, const FString& URL);

	/**
	 * Get connection statistics
	 * @param WorldContext World context for subsystem access
	 * @param OutTotalCreated Total number of clients created
	 * @param OutTotalAttempts Total number of connection attempts
	 * @param OutTotalSuccessful Total number of successful connections
	 * @param OutSuccessRate Connection success rate as a percentage
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Information", meta = (WorldContext = "WorldContext"))
	static void GetConnectionStatistics(const UObject* WorldContext, int32& OutTotalCreated, int32& OutTotalAttempts, int32& OutTotalSuccessful, float& OutSuccessRate);

	// Advanced configuration helpers

	/**
	 * Create WebSocket client with advanced configuration
	 * @param WorldContext World context for subsystem access
	 * @param bEnableHeartbeat Enable heartbeat functionality
	 * @param HeartbeatInterval Heartbeat interval in seconds
	 * @param MaxReconnectAttempts Maximum number of reconnection attempts
	 * @param bAutoReconnect Enable automatic reconnection
	 * @param bVerboseLogging Enable verbose logging
	 * @return Configured WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Advanced", meta = (WorldContext = "WorldContext"))
	static UHorizonWebSocketClient* CreateConfiguredWebSocket(
		const UObject* WorldContext,
		bool bEnableHeartbeat = true,
		float HeartbeatInterval = 30.0f,
		int32 MaxReconnectAttempts = 3,
		bool bAutoReconnect = true,
		bool bVerboseLogging = false
	);

	/**
	 * Apply configuration to an existing WebSocket client
	 * @param Client The client to configure
	 * @param bEnableHeartbeat Enable heartbeat functionality
	 * @param HeartbeatInterval Heartbeat interval in seconds
	 * @param MaxReconnectAttempts Maximum number of reconnection attempts
	 * @param bAutoReconnect Enable automatic reconnection
	 * @param bVerboseLogging Enable verbose logging
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket|Advanced")
	static void ConfigureWebSocket(
		UHorizonWebSocketClient* Client,
		bool bEnableHeartbeat = true,
		float HeartbeatInterval = 30.0f,
		int32 MaxReconnectAttempts = 3,
		bool bAutoReconnect = true,
		bool bVerboseLogging = false
	);

	// Horizon-specific utilities

	/**
	 * Get the Horizon plugin version
	 * @return Version string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static FString GetHorizonVersion();

	/**
	 * Check if a specific Horizon feature is available
	 * @param FeatureName The name of the feature to check
	 * @return True if the feature is available
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static bool IsHorizonFeatureAvailable(const FString& FeatureName);

private:
	// Helper function to get the subsystem
	static UHorizonSubsystem* GetHorizonSubsystem(const UObject* WorldContext);
};