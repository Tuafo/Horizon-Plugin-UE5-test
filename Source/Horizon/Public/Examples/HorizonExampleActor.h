#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "HorizonExampleActor.generated.h"

/**
 * @file HorizonExampleActor.h
 * @brief Example actor demonstrating Horizon WebSocket plugin usage
 * 
 * This file contains a complete example of how to use the Horizon WebSocket plugin
 * in both Blueprint and C++ scenarios. It demonstrates connection management,
 * event handling, and message sending/receiving.
 */

// Forward declarations
class UHorizonWebSocketComponent;

/**
 * @class AHorizonExampleActor
 * @brief Example actor demonstrating Horizon WebSocket Component usage
 * 
 * This actor provides a complete example of how to integrate WebSocket functionality
 * into your Unreal Engine project using the Horizon WebSocket Component. It demonstrates
 * both C++ and Blueprint usage patterns.
 * 
 * The actor showcases:
 * - Component-based WebSocket integration
 * - Event handling for connection lifecycle
 * - Message sending and receiving
 * - Blueprint integration points
 * - Configuration through editor properties
 * 
 * Blueprint Usage:
 * 1. Add this actor to your level
 * 2. Configure the WebSocket component in the details panel
 * 3. Override the "ReceiveOn*" events in Blueprint:
 *    - "ReceiveOnConnected" for connection events
 *    - "ReceiveOnMessage" for incoming messages
 *    - "ReceiveOnDisconnected" for disconnection events
 * 4. Use the component's "Send Message" node to send data
 * 
 * C++ Usage:
 * 1. Inherit from this class and override the virtual OnWebSocket* functions
 * 2. Or bind directly to the WebSocketComponent's delegate events
 * 3. Use the component's API for connection management and messaging
 * 
 * Example Blueprint Events:
 * - Event ReceiveOnConnected: Called when WebSocket connects
 * - Event ReceiveOnMessage: Called when text message is received
 * - Event ReceiveOnDisconnected: Called when WebSocket disconnects
 * 
 * Example C++ Override:
 * @code{.cpp}
 * void AMyHorizonActor::OnWebSocketConnected(bool bSuccess)
 * {
 *     if (bSuccess)
 *     {
 *         UE_LOG(LogTemp, Log, TEXT("Connected to WebSocket server"));
 *         // Send welcome message
 *         WebSocketComponent->SendMessage(TEXT("Hello from Unreal!"));
 *     }
 * }
 * @endcode
 * 
 * @note The component automatically handles all event binding internally
 * @note Configure connection settings in the component's details panel
 * @see UHorizonWebSocketComponent for the underlying WebSocket functionality
 */
UCLASS(BlueprintType, Blueprintable)
class HORIZON_API AHorizonExampleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	/**
	 * Default constructor
	 * Sets up the WebSocket component and configures default settings
	 */
	AHorizonExampleActor();

protected:
	/**
	 * Called when the actor begins play
	 * Binds to WebSocket component events and handles auto-connection
	 */
	virtual void BeginPlay() override;

	/**
	 * Called when the actor ends play
	 * Ensures proper cleanup of WebSocket connections
	 * @param EndPlayReason The reason why play is ending
	 */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	/**
	 * Called every frame
	 * Used for periodic tasks like sending heartbeat messages
	 * @param DeltaTime Time since last tick
	 */
	virtual void Tick(float DeltaTime) override;

	/**
	 * @name Components
	 * Actor components used by this example
	 * @{
	 */

	/** The WebSocket component that handles all WebSocket functionality */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (ToolTip = "The WebSocket component that handles all WebSocket functionality"))
	UHorizonWebSocketComponent* WebSocketComponent;

	/** @} */

	/**
	 * @name Configuration
	 * Settings for configuring the example actor's behavior
	 * @{
	 */

	/** Whether to automatically connect to the WebSocket server on begin play */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings", meta = (ToolTip = "Whether to automatically connect to the WebSocket server when the actor starts"))
	bool bAutoConnect = true;

	/** WebSocket server URL to connect to */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings", meta = (EditCondition = "bAutoConnect", ToolTip = "WebSocket server URL to connect to (e.g., ws://127.0.0.1:8080)"))
	FString ServerURL = TEXT("ws://127.0.0.1:8080");

	// Simple API functions for auto-connection and Blueprint access
	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void ConnectToServer();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void DisconnectFromServer();

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	bool IsConnectedToServer() const;

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendTestMessage();

	// Get performance statistics
	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	FString GetPerformanceStats() const;

protected:
	// Event handlers for WebSocket events - marked as UFUNCTION for delegate binding
	UFUNCTION()
	virtual void OnWebSocketConnected(bool bSuccess);
	
	UFUNCTION()
	virtual void OnWebSocketConnectionError(const FString& ErrorMessage);
	
	UFUNCTION()
	virtual void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

private:
	// No complex state tracking needed
};