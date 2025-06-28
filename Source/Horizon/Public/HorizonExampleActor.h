
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"
#include "HorizonExampleActor.generated.h"

// Forward declarations
class UHorizonWebSocketComponent;

/**
 * Horizon Example Actor
 * Demonstrates how to use the Horizon WebSocket plugin
 * This actor shows various use cases and best practices
 */
UCLASS(BlueprintType, Blueprintable)
class HORIZON_API AHorizonExampleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AHorizonExampleActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	virtual void Tick(float DeltaTime) override;

	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UHorizonWebSocketComponent* WebSocketComponent;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings")
	bool bAutoConnect = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings", meta = (EditCondition = "bAutoConnect"))
	FString ServerURL = TEXT("wss://echo.websocket.org");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings")
	bool bSendPeriodicMessages = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings", meta = (EditCondition = "bSendPeriodicMessages", ClampMin = "1.0"))
	float MessageInterval = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings")
	bool bLogReceivedMessages = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Horizon|Example Settings")
	TArray<FString> TestMessages = {
		TEXT("Hello Horizon WebSocket!"),
		TEXT("This is a test message from Horizon"),
		TEXT("Horizon plugin working correctly"),
		TEXT("Standalone WebSocket implementation")
	};

	// Example API functions
	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void ConnectToServer();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void DisconnectFromServer();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendTestMessage();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendRandomTestMessage();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendCustomMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendJSONMessage(const FString& MessageType, const TMap<FString, FString>& Data);

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void SendBinaryTestMessage();

	UFUNCTION(BlueprintCallable, Category = "Horizon|Example")
	void TogglePeriodicMessages();

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	bool IsConnectedToServer() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	FString GetConnectionStatus() const;

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	int32 GetMessagesSentCount() const { return MessagesSentCount; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	int32 GetMessagesReceivedCount() const { return MessagesReceivedCount; }

	UFUNCTION(BlueprintPure, Category = "Horizon|Example")
	FString GetHorizonStatus() const;

protected:
	// Event handlers
	UFUNCTION()
	void OnWebSocketConnected(bool bSuccess);

	UFUNCTION()
	void OnWebSocketConnectionError(const FString& ErrorMessage);

	UFUNCTION()
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

	UFUNCTION()
	void OnWebSocketMessage(const FString& Message);

	UFUNCTION()
	void OnWebSocketRawMessage(const TArray<uint8>& Data, int32 Size, int32 BytesRemaining);

	UFUNCTION()
	void OnWebSocketMessageSent(const FString& Message);

	// Periodic message sending
	UFUNCTION()
	void SendPeriodicMessage();

	// Helper functions
	void StartPeriodicMessageTimer();
	void StopPeriodicMessageTimer();
	void LogConnectionEvent(const FString& Event, bool bIsError = false);

private:
	// Statistics
	int32 MessagesSentCount = 0;
	int32 MessagesReceivedCount = 0;
	int32 CurrentTestMessageIndex = 0;

	// Timers
	FTimerHandle PeriodicMessageTimer;

	// Connection state
	bool bWasConnectedLastTick = false;
};