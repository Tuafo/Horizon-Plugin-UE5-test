
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HAL/ThreadSafeBool.h"
#include "HorizonSettings.generated.h"

/**
 * Horizon Plugin Settings
 * Global configuration settings for the Horizon plugin
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Horizon"))
class HORIZON_API UHorizonSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UHorizonSettings();

	// UDeveloperSettings interface
	virtual FName GetCategoryName() const;
	virtual FText GetSectionText() const;
	virtual FText GetSectionDescription() const;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// WebSocket Default Settings
	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Enabled"))
	bool bDefaultHeartbeatEnabled = true;

	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Interval", ClampMin = "5.0", ClampMax = "300.0", Units = "s"))
	float DefaultHeartbeatInterval = 30.0f;

	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Max Reconnect Attempts", ClampMin = "1", ClampMax = "10"))
	int32 DefaultMaxReconnectAttempts = 3;

	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Reconnect Delay", ClampMin = "1.0", ClampMax = "60.0", Units = "s"))
	float DefaultReconnectDelay = 5.0f;

	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Auto Reconnect"))
	bool bDefaultAutoReconnect = true;

	UPROPERTY(Config, EditAnywhere, Category = "WebSocket|Default Connection Settings", meta = (DisplayName = "Default Heartbeat Message"))
	FString DefaultHeartbeatMessage = TEXT("ping");

	// Logging Settings
	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Enable Verbose Logging"))
	bool bEnableVerboseLogging = false;

	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Connection Events"))
	bool bLogConnectionEvents = true;

	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Message Events"))
	bool bLogMessageEvents = false;

	UPROPERTY(Config, EditAnywhere, Category = "Logging", meta = (DisplayName = "Log Heartbeat Events"))
	bool bLogHeartbeatEvents = false;

	// Performance Settings
	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (DisplayName = "Max Concurrent Connections", ClampMin = "1", ClampMax = "100"))
	int32 MaxConcurrentConnections = 10;

	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (DisplayName = "Client Cleanup Interval", ClampMin = "10.0", ClampMax = "300.0", Units = "s"))
	float ClientCleanupInterval = 30.0f;

	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (DisplayName = "Message Queue Size", ClampMin = "10", ClampMax = "10000"))
	int32 MessageQueueSize = 100;

	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (DisplayName = "Use High Priority Worker Threads"))
	bool bUseHighPriorityWorkerThreads = false;

	// Security Settings
	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Allow Insecure Connections (ws://)"))
	bool bAllowInsecureConnections = true;

	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Verify SSL Certificates"))
	bool bVerifySSLCertificates = true;

	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Connection Timeout", ClampMin = "5.0", ClampMax = "120.0", Units = "s"))
	float ConnectionTimeout = 30.0f;

	UPROPERTY(Config, EditAnywhere, Category = "Security", meta = (DisplayName = "Max Message Size (bytes)", ClampMin = "1024", ClampMax = "16777216"))
	int32 MaxMessageSize = 1048576; // 1MB default

	// Advanced Settings
	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Enable Auto Cleanup"))
	bool bEnableAutoCleanup = true;

	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Enable Statistics Tracking"))
	bool bEnableStatisticsTracking = true;

	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Enable Global Event Broadcasting"))
	bool bEnableGlobalEventBroadcasting = true;

	UPROPERTY(Config, EditAnywhere, Category = "Advanced", meta = (DisplayName = "Frame Buffer Size", ClampMin = "1024", ClampMax = "1048576"))
	int32 FrameBufferSize = 65536; // 64KB default

	// Development Settings (only visible in development builds)
	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Enable Debug Mode", EditCondition = "!HORIZON_SHIPPING"))
	bool bEnableDebugMode = false;

	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Debug Server URLs", EditCondition = "bEnableDebugMode && !HORIZON_SHIPPING"))
	TArray<FString> DebugServerURLs = {
		TEXT("ws://localhost:8080"),
		TEXT("ws://localhost:3000"),
		TEXT("wss://echo.websocket.org"),
		TEXT("wss://ws.postman-echo.com/raw")
	};

	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Auto Connect in PIE", EditCondition = "bEnableDebugMode && !HORIZON_SHIPPING"))
	bool bAutoConnectInPIE = false;

	UPROPERTY(Config, EditAnywhere, Category = "Development", meta = (DisplayName = "Force Connection Failures for Testing", EditCondition = "bEnableDebugMode && !HORIZON_SHIPPING"))
	bool bSimulateConnectionFailures = false;

	// Horizon Future Features (placeholders for expansion)
	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable HTTP Client (Coming Soon)"))
	bool bEnableHTTPClient = false;

	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable TCP Client (Coming Soon)"))
	bool bEnableTCPClient = false;

	UPROPERTY(Config, EditAnywhere, Category = "Future Features", meta = (DisplayName = "Enable UDP Client (Coming Soon)"))
	bool bEnableUDPClient = false;

	// Runtime access to settings
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static UHorizonSettings* GetHorizonSettings();

	// Convenience functions for accessing settings
	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static bool GetDefaultHeartbeatEnabled();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static float GetDefaultHeartbeatInterval();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static int32 GetDefaultMaxReconnectAttempts();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static bool GetDefaultAutoReconnect();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static FString GetDefaultHeartbeatMessage();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static bool IsVerboseLoggingEnabled();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static int32 GetMaxConcurrentConnections();

	UFUNCTION(BlueprintPure, Category = "Horizon|Settings")
	static bool IsDebugModeEnabled();

protected:
	void ValidateSettings();
};