// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonWebSocketClient.h"

#ifdef HORIZON_HorizonWebSocketClient_generated_h
#error "HorizonWebSocketClient.generated.h already included, missing '#pragma once' in HorizonWebSocketClient.h"
#endif
#define HORIZON_HorizonWebSocketClient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EHorizonWebSocketState : uint8;

// ********** Begin Delegate FOnHorizonWebSocketConnected ******************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_36_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnected, bool bSuccess);


// ********** End Delegate FOnHorizonWebSocketConnected ********************************************

// ********** Begin Delegate FOnHorizonWebSocketConnectionError ************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_37_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnectionError, const FString& ErrorMessage);


// ********** End Delegate FOnHorizonWebSocketConnectionError **************************************

// ********** Begin Delegate FOnHorizonWebSocketClosed *********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_38_DELEGATE \
HORIZON_API void FOnHorizonWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean);


// ********** End Delegate FOnHorizonWebSocketClosed ***********************************************

// ********** Begin Delegate FOnHorizonWebSocketMessage ********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_39_DELEGATE \
HORIZON_API void FOnHorizonWebSocketMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessage, const FString& Message);


// ********** End Delegate FOnHorizonWebSocketMessage **********************************************

// ********** Begin Delegate FOnHorizonWebSocketRawMessage *****************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_40_DELEGATE \
HORIZON_API void FOnHorizonWebSocketRawMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketRawMessage, TArray<uint8> const& Data, int32 Size, int32 BytesRemaining);


// ********** End Delegate FOnHorizonWebSocketRawMessage *******************************************

// ********** Begin Delegate FOnHorizonWebSocketMessageSent ****************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_41_DELEGATE \
HORIZON_API void FOnHorizonWebSocketMessageSent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessageSent, const FString& Message);


// ********** End Delegate FOnHorizonWebSocketMessageSent ******************************************

// ********** Begin Class UHorizonWebSocketClient **************************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
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


HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonWebSocketClient(); \
	friend struct Z_Construct_UClass_UHorizonWebSocketClient_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizonWebSocketClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister) \
	DECLARE_SERIALIZER(UHorizonWebSocketClient)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizonWebSocketClient(UHorizonWebSocketClient&&) = delete; \
	UHorizonWebSocketClient(const UHorizonWebSocketClient&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonWebSocketClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonWebSocketClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonWebSocketClient)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_48_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizonWebSocketClient;

// ********** End Class UHorizonWebSocketClient ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h

// ********** Begin Enum EHorizonWebSocketState ****************************************************
#define FOREACH_ENUM_EHORIZONWEBSOCKETSTATE(op) \
	op(EHorizonWebSocketState::Disconnected) \
	op(EHorizonWebSocketState::Connecting) \
	op(EHorizonWebSocketState::Connected) \
	op(EHorizonWebSocketState::Reconnecting) \
	op(EHorizonWebSocketState::Failed) \
	op(EHorizonWebSocketState::Closing) 

enum class EHorizonWebSocketState : uint8;
template<> struct TIsUEnumClass<EHorizonWebSocketState> { enum { Value = true }; };
template<> HORIZON_API UEnum* StaticEnum<EHorizonWebSocketState>();
// ********** End Enum EHorizonWebSocketState ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
