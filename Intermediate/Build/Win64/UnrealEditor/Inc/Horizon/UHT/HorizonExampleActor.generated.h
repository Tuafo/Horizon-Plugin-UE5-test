// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonExampleActor.h"

#ifdef HORIZON_HorizonExampleActor_generated_h
#error "HorizonExampleActor.generated.h already included, missing '#pragma once' in HorizonExampleActor.h"
#endif
#define HORIZON_HorizonExampleActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 

// ********** Begin Class AHorizonExampleActor *****************************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendPeriodicMessage); \
	DECLARE_FUNCTION(execOnWebSocketMessageSent); \
	DECLARE_FUNCTION(execOnWebSocketRawMessage); \
	DECLARE_FUNCTION(execOnWebSocketMessage); \
	DECLARE_FUNCTION(execOnWebSocketClosed); \
	DECLARE_FUNCTION(execOnWebSocketConnectionError); \
	DECLARE_FUNCTION(execOnWebSocketConnected); \
	DECLARE_FUNCTION(execGetHorizonStatus); \
	DECLARE_FUNCTION(execGetMessagesReceivedCount); \
	DECLARE_FUNCTION(execGetMessagesSentCount); \
	DECLARE_FUNCTION(execGetConnectionStatus); \
	DECLARE_FUNCTION(execIsConnectedToServer); \
	DECLARE_FUNCTION(execTogglePeriodicMessages); \
	DECLARE_FUNCTION(execSendBinaryTestMessage); \
	DECLARE_FUNCTION(execSendJSONMessage); \
	DECLARE_FUNCTION(execSendCustomMessage); \
	DECLARE_FUNCTION(execSendRandomTestMessage); \
	DECLARE_FUNCTION(execSendTestMessage); \
	DECLARE_FUNCTION(execDisconnectFromServer); \
	DECLARE_FUNCTION(execConnectToServer);


HORIZON_API UClass* Z_Construct_UClass_AHorizonExampleActor_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorizonExampleActor(); \
	friend struct Z_Construct_UClass_AHorizonExampleActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_AHorizonExampleActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHorizonExampleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_AHorizonExampleActor_NoRegister) \
	DECLARE_SERIALIZER(AHorizonExampleActor)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHorizonExampleActor(AHorizonExampleActor&&) = delete; \
	AHorizonExampleActor(const AHorizonExampleActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorizonExampleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorizonExampleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHorizonExampleActor) \
	NO_API virtual ~AHorizonExampleActor();


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_18_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHorizonExampleActor;

// ********** End Class AHorizonExampleActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
