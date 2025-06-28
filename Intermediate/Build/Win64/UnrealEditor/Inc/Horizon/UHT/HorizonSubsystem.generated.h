// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonSubsystem.h"

#ifdef HORIZON_HorizonSubsystem_generated_h
#error "HorizonSubsystem.generated.h already included, missing '#pragma once' in HorizonSubsystem.h"
#endif
#define HORIZON_HorizonSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHorizonWebSocketClient;

// ********** Begin Delegate FOnHorizonWebSocketConnected ******************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_14_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnected, bool bSuccess);


// ********** End Delegate FOnHorizonWebSocketConnected ********************************************

// ********** Begin Delegate FOnHorizonWebSocketConnectionError ************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_15_DELEGATE \
HORIZON_API void FOnHorizonWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnectionError, const FString& ErrorMessage);


// ********** End Delegate FOnHorizonWebSocketConnectionError **************************************

// ********** Begin Delegate FOnHorizonWebSocketClosed *********************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_16_DELEGATE \
HORIZON_API void FOnHorizonWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean);


// ********** End Delegate FOnHorizonWebSocketClosed ***********************************************

// ********** Begin Class UHorizonSubsystem ********************************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGlobalHeartbeatSettings); \
	DECLARE_FUNCTION(execSetGlobalDebugMode); \
	DECLARE_FUNCTION(execGetHorizonStatus); \
	DECLARE_FUNCTION(execGetConnectionSuccessRate); \
	DECLARE_FUNCTION(execGetTotalSuccessfulConnections); \
	DECLARE_FUNCTION(execGetTotalConnectionAttempts); \
	DECLARE_FUNCTION(execGetTotalClientsCreated); \
	DECLARE_FUNCTION(execHandleClientClosed); \
	DECLARE_FUNCTION(execHandleClientConnectionError); \
	DECLARE_FUNCTION(execHandleClientConnected); \
	DECLARE_FUNCTION(execCleanupInvalidClients); \
	DECLARE_FUNCTION(execBroadcastBinaryMessage); \
	DECLARE_FUNCTION(execBroadcastMessage); \
	DECLARE_FUNCTION(execGetConnectedClientCount); \
	DECLARE_FUNCTION(execGetActiveClientCount); \
	DECLARE_FUNCTION(execDisconnectAllClients); \
	DECLARE_FUNCTION(execFindWebSocketsByURL); \
	DECLARE_FUNCTION(execGetConnectedWebSockets); \
	DECLARE_FUNCTION(execGetAllWebSockets); \
	DECLARE_FUNCTION(execRemoveWebSocket); \
	DECLARE_FUNCTION(execCreateAndConnectWebSocket); \
	DECLARE_FUNCTION(execCreateWebSocket);


HORIZON_API UClass* Z_Construct_UClass_UHorizonSubsystem_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonSubsystem(); \
	friend struct Z_Construct_UClass_UHorizonSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_UHorizonSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizonSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_UHorizonSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UHorizonSubsystem)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizonSubsystem(UHorizonSubsystem&&) = delete; \
	UHorizonSubsystem(const UHorizonSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonSubsystem) \
	NO_API virtual ~UHorizonSubsystem();


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_23_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizonSubsystem;

// ********** End Class UHorizonSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
