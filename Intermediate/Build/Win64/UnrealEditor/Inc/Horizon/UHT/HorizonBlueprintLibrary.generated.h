// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HorizonBlueprintLibrary.h"

#ifdef HORIZON_HorizonBlueprintLibrary_generated_h
#error "HorizonBlueprintLibrary.generated.h already included, missing '#pragma once' in HorizonBlueprintLibrary.h"
#endif
#define HORIZON_HorizonBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class UHorizonWebSocketClient;
class UObject;
enum class EHorizonWebSocketState : uint8;

// ********** Begin Class UHorizonBlueprintLibrary *************************************************
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsHorizonFeatureAvailable); \
	DECLARE_FUNCTION(execGetHorizonVersion); \
	DECLARE_FUNCTION(execConfigureWebSocket); \
	DECLARE_FUNCTION(execCreateConfiguredWebSocket); \
	DECLARE_FUNCTION(execGenerateClientID); \
	DECLARE_FUNCTION(execByteArrayToString); \
	DECLARE_FUNCTION(execStringToByteArray); \
	DECLARE_FUNCTION(execParseJSONMessage); \
	DECLARE_FUNCTION(execCreateJSONMessage); \
	DECLARE_FUNCTION(execGetConnectionStatistics); \
	DECLARE_FUNCTION(execFindClientsByURL); \
	DECLARE_FUNCTION(execGetAllConnectedClients); \
	DECLARE_FUNCTION(execGetAllActiveClients); \
	DECLARE_FUNCTION(execIsValidWebSocketURL); \
	DECLARE_FUNCTION(execParseWebSocketURL); \
	DECLARE_FUNCTION(execConnectionStateToString); \
	DECLARE_FUNCTION(execIsHorizonWebSocketAvailable); \
	DECLARE_FUNCTION(execDisconnectAllClients); \
	DECLARE_FUNCTION(execBroadcastToAllClients); \
	DECLARE_FUNCTION(execQuickConnect); \
	DECLARE_FUNCTION(execCreateWebSocket);


HORIZON_API UClass* Z_Construct_UClass_UHorizonBlueprintLibrary_NoRegister();

#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UHorizonBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORIZON_API UClass* Z_Construct_UClass_UHorizonBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizonBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horizon"), Z_Construct_UClass_UHorizonBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHorizonBlueprintLibrary)


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizonBlueprintLibrary(UHorizonBlueprintLibrary&&) = delete; \
	UHorizonBlueprintLibrary(const UHorizonBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonBlueprintLibrary) \
	NO_API virtual ~UHorizonBlueprintLibrary();


#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_17_PROLOG
#define FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizonBlueprintLibrary;

// ********** End Class UHorizonBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
