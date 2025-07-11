#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebSocket/HorizonWebSocketClient.h"
#include "HorizonBlueprintLibrary.generated.h"

// Forward declarations
class UHorizonSubsystem;

/**
 * Horizon Blueprint Library
 * Provides Blueprint-accessible functions for Horizon WebSocket functionality
 */
UCLASS()
class HORIZON_API UHorizonBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// WebSocket Creation

	/**
	 * Create a WebSocket client
	 * @param WorldContext World context for subsystem access
	 * @return WebSocket client instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static UHorizonWebSocketClient* CreateWebSocket(const UObject* WorldContext);

	/**
	 * Get performance statistics for the Horizon WebSocket system
	 * @param WorldContext World context for subsystem access
	 * @param bIncludeDetailedStats Whether to include detailed statistics
	 * @return Performance statistics as a string
	 */
	UFUNCTION(BlueprintCallable, Category = "Horizon|WebSocket", meta = (WorldContext = "WorldContext"))
	static FString GetPerformanceStatistics(const UObject* WorldContext, bool bIncludeDetailedStats = false);

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
	// Helper functions
	static UHorizonSubsystem* GetHorizonSubsystem(const UObject* WorldContext);
};
