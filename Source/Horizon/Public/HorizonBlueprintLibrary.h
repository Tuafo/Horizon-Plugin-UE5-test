
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HorizonWebSocketClient.h"
#include "HorizonBlueprintLibrary.generated.h"

// Forward declaration
class UHorizonSubsystem;

/**
 * Horizon Blueprint Function Library
 * Provides convenient static functions for easy access to Horizon WebSocket functionality in Blueprints
 * Simplified for single-client use case
 */
UCLASS()
class HORIZON_API UHorizonBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Quick access functions
	
	/**
	 * Get the Horizon WebSocket client for this game instance
	 * @param WorldContext World context for subsystem access
	 * @return WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext", CallInEditor = "true"))
	static UHorizonWebSocketClient* GetWebSocketClient(const UObject* WorldContext);

	/**
	 * Connect to a WebSocket server
	 * @param WorldContext World context for subsystem access
	 * @param URL The WebSocket server URL
	 * @param Protocol The WebSocket protocol (optional)
	 * @return True if connection was initiated successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static bool Connect(const UObject* WorldContext, const FString& URL, const FString& Protocol = TEXT(""));

	/**
	 * Disconnect from the WebSocket server
	 * @param WorldContext World context for subsystem access
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static void Disconnect(const UObject* WorldContext);

	/**
	 * Send a message to the WebSocket server
	 * @param WorldContext World context for subsystem access
	 * @param Message The message to send
	 * @return True if message was queued for sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static bool SendMessage(const UObject* WorldContext, const FString& Message);

	/**
	 * Send binary data to the WebSocket server
	 * @param WorldContext World context for subsystem access
	 * @param Data The binary data to send
	 * @return True if data was queued for sending
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static bool SendBinaryMessage(const UObject* WorldContext, const TArray<uint8>& Data);

	/**
	 * Check if connected to the WebSocket server
	 * @param WorldContext World context for subsystem access
	 * @return True if connected
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static bool IsConnected(const UObject* WorldContext);

	/**
	 * Get the current connection state
	 * @param WorldContext World context for subsystem access
	 * @return Current connection state
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static EHorizonWebSocketState GetConnectionState(const UObject* WorldContext);

	// Information and utility functions

	/**
	 * Check if the Horizon WebSocket system is available
	 * @return True if Horizon WebSocket system is loaded and available
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static bool IsHorizonWebSocketAvailable();

	/**
	 * Convert WebSocket connection state to a readable string
	 * @param State The connection state to convert
	 * @return Human-readable string representation of the state
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static FString ConnectionStateToString(EHorizonWebSocketState State);

	/**
	 * Validate a WebSocket URL format
	 * @param URL The URL to validate
	 * @return True if the URL format is valid for WebSocket connections
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static bool IsValidWebSocketURL(const FString& URL);

	/**
	 * Get connection statistics
	 * @param WorldContext World context for subsystem access
	 * @param OutTotalAttempts Total number of connection attempts
	 * @param OutTotalSuccessful Total number of successful connections
	 * @param OutSuccessRate Connection success rate as a percentage
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information", meta = (WorldContext = "WorldContext"))
	static void GetConnectionStatistics(const UObject* WorldContext, int32& OutTotalAttempts, int32& OutTotalSuccessful, float& OutSuccessRate);

	// Utility functions for message handling

	/**
	 * Create a simple JSON message string
	 * @param MessageType The message type/action
	 * @param Data The message data as a string
	 * @return JSON formatted message string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Utilities")
	static FString CreateSimpleJSONMessage(const FString& MessageType, const FString& Data);

	/**
	 * Convert string to byte array for binary messages
	 * @param StringData The string to convert
	 * @return Byte array representation of the string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Utilities")
	static TArray<uint8> StringToByteArray(const FString& StringData);

	/**
	 * Convert byte array to string
	 * @param ByteData The byte array to convert
	 * @return String representation of the byte array
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Utilities")
	static FString ByteArrayToString(const TArray<uint8>& ByteData);

	/**
	 * Generate a unique client ID for identification
	 * @return Unique client identifier string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Utilities")
	static FString GenerateClientID();

	/**
	 * Get the Horizon plugin version
	 * @return Version string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|Information")
	static FString GetHorizonVersion();

private:
	// Helper function to get the subsystem
	static UHorizonSubsystem* GetHorizonSubsystem(const UObject* WorldContext);
};