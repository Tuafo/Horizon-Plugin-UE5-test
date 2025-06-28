// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonWebsocketComponent.h"

#ifdef HORIZON_HorizonWebsocketComponent_generated_h
#error "HorizonWebsocketComponent.generated.h already included, missing '#pragma once' in HorizonWebsocketComponent.h"
#endif
#define HORIZON_HorizonWebsocketComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EHorizonWebSocketState : uint8;

// ********** Begin Delegate FOnHorizonWebSocketConnected ******************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_15_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnected, bool bSuccess);


// ********** End Delegate FOnHorizonWebSocketConnected ********************************************

// ********** Begin Delegate FOnHorizonWebSocketConnectionError ************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_16_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnectionError, const FString& ErrorMessage);


// ********** End Delegate FOnHorizonWebSocketConnectionError **************************************

// ********** Begin Delegate FOnHorizonWebSocketClosed *********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_17_DELEGATE \
HORIZON_API void FOnHorizonWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean);


// ********** End Delegate FOnHorizonWebSocketClosed ***********************************************

// ********** Begin Delegate FOnHorizonWebSocketMessage ********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_18_DELEGATE \
HORIZON_API void FOnHorizonWebSocketMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessage, const FString& Message);


// ********** End Delegate FOnHorizonWebSocketMessage **********************************************

// ********** Begin Delegate FOnHorizonWebSocketRawMessage *****************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_19_DELEGATE \
HORIZON_API void FOnHorizonWebSocketRawMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketRawMessage, TArray<uint8> const& Data, int32 Size, int32 BytesRemaining);


// ********** End Delegate FOnHorizonWebSocketRawMessage *******************************************

// ********** Begin Delegate FOnHorizonWebSocketMessageSent ****************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_20_DELEGATE \
HORIZON_API void FOnHorizonWebSocketMessageSent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessageSent, const FString& Message);


// ********** End Delegate FOnHorizonWebSocketMessageSent ******************************************

// ********** Begin Class UHorizonWebSocketComponent ***********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleWebSocketMessageSent); \
	DECLARE_FUNCTION(execHandleWebSocketRawMessage); \
	DECLARE_FUNCTION(execHandleWebSocketMessage); \
	DECLARE_FUNCTION(execHandleWebSocketClosed); \
	DECLARE_FUNCTION(execHandleWebSocketConnectionError); \
	DECLARE_FUNCTION(execHandleWebSocketConnected); \
	DECLARE_FUNCTION(execGetVerboseLogging); \
	DECLARE_FUNCTION(execGetAutoReconnect); \
	DECLARE_FUNCTION(execGetMaxReconnectAttempts); \
	DECLARE_FUNCTION(execGetHeartbeatInterval); \
	DECLARE_FUNCTION(execGetHeartbeatEnabled); \
	DECLARE_FUNCTION(execSetVerboseLogging); \
	DECLARE_FUNCTION(execSetAutoReconnect); \
	DECLARE_FUNCTION(execSetMaxReconnectAttempts); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetHeartbeatEnabled); \
	DECLARE_FUNCTION(execSendHeartbeat); \
	DECLARE_FUNCTION(execForceReconnect); \
	DECLARE_FUNCTION(execGetCurrentReconnectAttempts); \
	DECLARE_FUNCTION(execGetServerProtocol); \
	DECLARE_FUNCTION(execGetServerURL); \
	DECLARE_FUNCTION(execGetConnectionState); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execSendBinaryMessage); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonWebSocketComponent(); \
	friend struct Z_Construct_UClass_UHorizonWebSocketComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizonWebSocketComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister) \
	DECLARE_SERIALIZER(UHorizonWebSocketComponent)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizonWebSocketComponent(UHorizonWebSocketComponent&&) = delete; \
	UHorizonWebSocketComponent(const UHorizonWebSocketComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonWebSocketComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonWebSocketComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonWebSocketComponent) \
	NO_API virtual ~UHorizonWebSocketComponent();


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_27_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizonWebSocketComponent;

// ********** End Class UHorizonWebSocketComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
