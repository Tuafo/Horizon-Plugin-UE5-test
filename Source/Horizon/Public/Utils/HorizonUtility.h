#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HorizonUtility.generated.h"

UCLASS()
class HORIZON_API UHorizonUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Parse a WebSocket URL to extract components
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities")
	static bool ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath);

	/**
	 * Validate a WebSocket URL format
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities")
	static bool IsValidWebSocketURL(const FString& URL);

	/**
	 * Create a JSON message string from key-value pairs
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Create JSON Message (Horizon)"))
	static FString CreateJSONMessage(const FString& Namespace, const FString& Event, const TMap<FString, FString>& Data);

	/**
	 * Parse a JSON message string to extract type and parameters
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Parse JSON Message (Horizon)"))
	static bool ParseJSONMessage(const FString& JSONMessage, FString& OutNamespace, FString& OutEvent, FString& OutData);

	/**
	 * Convert string to byte array for binary messages
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "String to Byte Array (Horizon)"))
	static TArray<uint8> StringToByteArray(const FString& StringData);

	/**
	 * Convert byte array to string
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Byte Array to String (Horizon)"))
	static FString ByteArrayToString(const TArray<uint8>& ByteData);

	/**
	 * Generate a unique client ID for identification
	 */
	UFUNCTION(BlueprintPure, Category = "Horizon|WebSocket|Utilities", meta = (DisplayName = "Generate Client ID (Horizon)"))
	static FString GenerateClientID();
}; 