// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonSettings.h"

#ifdef HORIZON_HorizonSettings_generated_h
#error "HorizonSettings.generated.h already included, missing '#pragma once' in HorizonSettings.h"
#endif
#define HORIZON_HorizonSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHorizonSettings;

// ********** Begin Class UHorizonSettings *********************************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDebugModeEnabled); \
	DECLARE_FUNCTION(execGetMaxConcurrentConnections); \
	DECLARE_FUNCTION(execIsVerboseLoggingEnabled); \
	DECLARE_FUNCTION(execGetDefaultHeartbeatMessage); \
	DECLARE_FUNCTION(execGetDefaultAutoReconnect); \
	DECLARE_FUNCTION(execGetDefaultMaxReconnectAttempts); \
	DECLARE_FUNCTION(execGetDefaultHeartbeatInterval); \
	DECLARE_FUNCTION(execGetDefaultHeartbeatEnabled); \
	DECLARE_FUNCTION(execGetHorizonSettings);


HORIZON_API UClass* Z_Construct_UClass_UHorizonSettings_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonSettings(); \
	friend struct Z_Construct_UClass_UHorizonSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_UHorizonSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizonSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_UHorizonSettings_NoRegister) \
	DECLARE_SERIALIZER(UHorizonSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizonSettings(UHorizonSettings&&) = delete; \
	UHorizonSettings(const UHorizonSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonSettings) \
	NO_API virtual ~UHorizonSettings();


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_14_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizonSettings;

// ********** End Class UHorizonSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
