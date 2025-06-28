// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
HORIZON_API UClass* Z_Construct_UClass_UHorizonSettings();
HORIZON_API UClass* Z_Construct_UClass_UHorizonSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horizon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHorizonSettings Function GetDefaultAutoReconnect ************************
struct Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics
{
	struct HorizonSettings_eventGetDefaultAutoReconnect_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonSettings_eventGetDefaultAutoReconnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSettings_eventGetDefaultAutoReconnect_Parms), &Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetDefaultAutoReconnect", Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::HorizonSettings_eventGetDefaultAutoReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::HorizonSettings_eventGetDefaultAutoReconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetDefaultAutoReconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonSettings::GetDefaultAutoReconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetDefaultAutoReconnect **************************

// ********** Begin Class UHorizonSettings Function GetDefaultHeartbeatEnabled *********************
struct Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics
{
	struct HorizonSettings_eventGetDefaultHeartbeatEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience functions for accessing settings\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience functions for accessing settings" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonSettings_eventGetDefaultHeartbeatEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSettings_eventGetDefaultHeartbeatEnabled_Parms), &Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetDefaultHeartbeatEnabled", Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::HorizonSettings_eventGetDefaultHeartbeatEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::HorizonSettings_eventGetDefaultHeartbeatEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetDefaultHeartbeatEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonSettings::GetDefaultHeartbeatEnabled();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetDefaultHeartbeatEnabled ***********************

// ********** Begin Class UHorizonSettings Function GetDefaultHeartbeatInterval ********************
struct Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics
{
	struct HorizonSettings_eventGetDefaultHeartbeatInterval_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSettings_eventGetDefaultHeartbeatInterval_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetDefaultHeartbeatInterval", Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::HorizonSettings_eventGetDefaultHeartbeatInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::HorizonSettings_eventGetDefaultHeartbeatInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetDefaultHeartbeatInterval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UHorizonSettings::GetDefaultHeartbeatInterval();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetDefaultHeartbeatInterval **********************

// ********** Begin Class UHorizonSettings Function GetDefaultHeartbeatMessage *********************
struct Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics
{
	struct HorizonSettings_eventGetDefaultHeartbeatMessage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSettings_eventGetDefaultHeartbeatMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetDefaultHeartbeatMessage", Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::HorizonSettings_eventGetDefaultHeartbeatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::HorizonSettings_eventGetDefaultHeartbeatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetDefaultHeartbeatMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonSettings::GetDefaultHeartbeatMessage();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetDefaultHeartbeatMessage ***********************

// ********** Begin Class UHorizonSettings Function GetDefaultMaxReconnectAttempts *****************
struct Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics
{
	struct HorizonSettings_eventGetDefaultMaxReconnectAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSettings_eventGetDefaultMaxReconnectAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetDefaultMaxReconnectAttempts", Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::HorizonSettings_eventGetDefaultMaxReconnectAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::HorizonSettings_eventGetDefaultMaxReconnectAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetDefaultMaxReconnectAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UHorizonSettings::GetDefaultMaxReconnectAttempts();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetDefaultMaxReconnectAttempts *******************

// ********** Begin Class UHorizonSettings Function GetHorizonSettings *****************************
struct Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics
{
	struct HorizonSettings_eventGetHorizonSettings_Parms
	{
		UHorizonSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime access to settings\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime access to settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSettings_eventGetHorizonSettings_Parms, ReturnValue), Z_Construct_UClass_UHorizonSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetHorizonSettings", Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::HorizonSettings_eventGetHorizonSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::HorizonSettings_eventGetHorizonSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetHorizonSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonSettings**)Z_Param__Result=UHorizonSettings::GetHorizonSettings();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetHorizonSettings *******************************

// ********** Begin Class UHorizonSettings Function GetMaxConcurrentConnections ********************
struct Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics
{
	struct HorizonSettings_eventGetMaxConcurrentConnections_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSettings_eventGetMaxConcurrentConnections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "GetMaxConcurrentConnections", Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::HorizonSettings_eventGetMaxConcurrentConnections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::HorizonSettings_eventGetMaxConcurrentConnections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execGetMaxConcurrentConnections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UHorizonSettings::GetMaxConcurrentConnections();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function GetMaxConcurrentConnections **********************

// ********** Begin Class UHorizonSettings Function IsDebugModeEnabled *****************************
struct Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics
{
	struct HorizonSettings_eventIsDebugModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonSettings_eventIsDebugModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSettings_eventIsDebugModeEnabled_Parms), &Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "IsDebugModeEnabled", Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::HorizonSettings_eventIsDebugModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::HorizonSettings_eventIsDebugModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execIsDebugModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonSettings::IsDebugModeEnabled();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function IsDebugModeEnabled *******************************

// ********** Begin Class UHorizonSettings Function IsVerboseLoggingEnabled ************************
struct Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics
{
	struct HorizonSettings_eventIsVerboseLoggingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Settings" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonSettings_eventIsVerboseLoggingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSettings_eventIsVerboseLoggingEnabled_Parms), &Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSettings, nullptr, "IsVerboseLoggingEnabled", Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::HorizonSettings_eventIsVerboseLoggingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::HorizonSettings_eventIsVerboseLoggingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSettings::execIsVerboseLoggingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonSettings::IsVerboseLoggingEnabled();
	P_NATIVE_END;
}
// ********** End Class UHorizonSettings Function IsVerboseLoggingEnabled **************************

// ********** Begin Class UHorizonSettings *********************************************************
void UHorizonSettings::StaticRegisterNativesUHorizonSettings()
{
	UClass* Class = UHorizonSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultAutoReconnect", &UHorizonSettings::execGetDefaultAutoReconnect },
		{ "GetDefaultHeartbeatEnabled", &UHorizonSettings::execGetDefaultHeartbeatEnabled },
		{ "GetDefaultHeartbeatInterval", &UHorizonSettings::execGetDefaultHeartbeatInterval },
		{ "GetDefaultHeartbeatMessage", &UHorizonSettings::execGetDefaultHeartbeatMessage },
		{ "GetDefaultMaxReconnectAttempts", &UHorizonSettings::execGetDefaultMaxReconnectAttempts },
		{ "GetHorizonSettings", &UHorizonSettings::execGetHorizonSettings },
		{ "GetMaxConcurrentConnections", &UHorizonSettings::execGetMaxConcurrentConnections },
		{ "IsDebugModeEnabled", &UHorizonSettings::execIsDebugModeEnabled },
		{ "IsVerboseLoggingEnabled", &UHorizonSettings::execIsVerboseLoggingEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHorizonSettings;
UClass* UHorizonSettings::GetPrivateStaticClass()
{
	using TClass = UHorizonSettings;
	if (!Z_Registration_Info_UClass_UHorizonSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonSettings"),
			Z_Registration_Info_UClass_UHorizonSettings.InnerSingleton,
			StaticRegisterNativesUHorizonSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UHorizonSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorizonSettings_NoRegister()
{
	return UHorizonSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorizonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon Plugin Settings\n * Global configuration settings for the Horizon plugin\n */" },
#endif
		{ "DisplayName", "Horizon" },
		{ "IncludePath", "HorizonSettings.h" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon Plugin Settings\nGlobal configuration settings for the Horizon plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultHeartbeatEnabled_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WebSocket Default Settings\n" },
#endif
		{ "DisplayName", "Default Heartbeat Enabled" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSocket Default Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHeartbeatInterval_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "5.0" },
		{ "DisplayName", "Default Heartbeat Interval" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxReconnectAttempts_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Default Max Reconnect Attempts" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReconnectDelay_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Default Reconnect Delay" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultAutoReconnect_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
		{ "DisplayName", "Default Auto Reconnect" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHeartbeatMessage_MetaData[] = {
		{ "Category", "WebSocket|Default Connection Settings" },
		{ "DisplayName", "Default Heartbeat Message" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVerboseLogging_MetaData[] = {
		{ "Category", "Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Logging Settings\n" },
#endif
		{ "DisplayName", "Enable Verbose Logging" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logging Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogConnectionEvents_MetaData[] = {
		{ "Category", "Logging" },
		{ "DisplayName", "Log Connection Events" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogMessageEvents_MetaData[] = {
		{ "Category", "Logging" },
		{ "DisplayName", "Log Message Events" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogHeartbeatEvents_MetaData[] = {
		{ "Category", "Logging" },
		{ "DisplayName", "Log Heartbeat Events" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentConnections_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Performance Settings\n" },
#endif
		{ "DisplayName", "Max Concurrent Connections" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCleanupInterval_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "10.0" },
		{ "DisplayName", "Client Cleanup Interval" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageQueueSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "10" },
		{ "DisplayName", "Message Queue Size" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPriorityWorkerThreads_MetaData[] = {
		{ "Category", "Performance" },
		{ "DisplayName", "Use High Priority Worker Threads" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInsecureConnections_MetaData[] = {
		{ "Category", "Security" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Security Settings\n" },
#endif
		{ "DisplayName", "Allow Insecure Connections (ws://)" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Security Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerifySSLCertificates_MetaData[] = {
		{ "Category", "Security" },
		{ "DisplayName", "Verify SSL Certificates" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTimeout_MetaData[] = {
		{ "Category", "Security" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "5.0" },
		{ "DisplayName", "Connection Timeout" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMessageSize_MetaData[] = {
		{ "Category", "Security" },
		{ "ClampMax", "16777216" },
		{ "ClampMin", "1024" },
		{ "DisplayName", "Max Message Size (bytes)" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoCleanup_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Advanced Settings\n" },
#endif
		{ "DisplayName", "Enable Auto Cleanup" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advanced Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStatisticsTracking_MetaData[] = {
		{ "Category", "Advanced" },
		{ "DisplayName", "Enable Statistics Tracking" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGlobalEventBroadcasting_MetaData[] = {
		{ "Category", "Advanced" },
		{ "DisplayName", "Enable Global Event Broadcasting" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameBufferSize_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMax", "1048576" },
		{ "ClampMin", "1024" },
		{ "DisplayName", "Frame Buffer Size" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugMode_MetaData[] = {
		{ "Category", "Development" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Development Settings (only visible in development builds)\n" },
#endif
		{ "DisplayName", "Enable Debug Mode" },
		{ "EditCondition", "!HORIZON_SHIPPING" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Development Settings (only visible in development builds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugServerURLs_MetaData[] = {
		{ "Category", "Development" },
		{ "DisplayName", "Debug Server URLs" },
		{ "EditCondition", "bEnableDebugMode && !HORIZON_SHIPPING" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectInPIE_MetaData[] = {
		{ "Category", "Development" },
		{ "DisplayName", "Auto Connect in PIE" },
		{ "EditCondition", "bEnableDebugMode && !HORIZON_SHIPPING" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateConnectionFailures_MetaData[] = {
		{ "Category", "Development" },
		{ "DisplayName", "Force Connection Failures for Testing" },
		{ "EditCondition", "bEnableDebugMode && !HORIZON_SHIPPING" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHTTPClient_MetaData[] = {
		{ "Category", "Future Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Horizon Future Features (placeholders for expansion)\n" },
#endif
		{ "DisplayName", "Enable HTTP Client (Coming Soon)" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon Future Features (placeholders for expansion)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTCPClient_MetaData[] = {
		{ "Category", "Future Features" },
		{ "DisplayName", "Enable TCP Client (Coming Soon)" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUDPClient_MetaData[] = {
		{ "Category", "Future Features" },
		{ "DisplayName", "Enable UDP Client (Coming Soon)" },
		{ "ModuleRelativePath", "Public/HorizonSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDefaultHeartbeatEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultHeartbeatEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHeartbeatInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMaxReconnectAttempts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultReconnectDelay;
	static void NewProp_bDefaultAutoReconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultAutoReconnect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultHeartbeatMessage;
	static void NewProp_bEnableVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVerboseLogging;
	static void NewProp_bLogConnectionEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogConnectionEvents;
	static void NewProp_bLogMessageEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogMessageEvents;
	static void NewProp_bLogHeartbeatEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogHeartbeatEvents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentConnections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClientCleanupInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageQueueSize;
	static void NewProp_bUseHighPriorityWorkerThreads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPriorityWorkerThreads;
	static void NewProp_bAllowInsecureConnections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInsecureConnections;
	static void NewProp_bVerifySSLCertificates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerifySSLCertificates;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMessageSize;
	static void NewProp_bEnableAutoCleanup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoCleanup;
	static void NewProp_bEnableStatisticsTracking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStatisticsTracking;
	static void NewProp_bEnableGlobalEventBroadcasting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGlobalEventBroadcasting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameBufferSize;
	static void NewProp_bEnableDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugServerURLs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugServerURLs;
	static void NewProp_bAutoConnectInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectInPIE;
	static void NewProp_bSimulateConnectionFailures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateConnectionFailures;
	static void NewProp_bEnableHTTPClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHTTPClient;
	static void NewProp_bEnableTCPClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTCPClient;
	static void NewProp_bEnableUDPClient_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUDPClient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonSettings_GetDefaultAutoReconnect, "GetDefaultAutoReconnect" }, // 2573730720
		{ &Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatEnabled, "GetDefaultHeartbeatEnabled" }, // 1889127938
		{ &Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatInterval, "GetDefaultHeartbeatInterval" }, // 3485389367
		{ &Z_Construct_UFunction_UHorizonSettings_GetDefaultHeartbeatMessage, "GetDefaultHeartbeatMessage" }, // 1074077700
		{ &Z_Construct_UFunction_UHorizonSettings_GetDefaultMaxReconnectAttempts, "GetDefaultMaxReconnectAttempts" }, // 2452962061
		{ &Z_Construct_UFunction_UHorizonSettings_GetHorizonSettings, "GetHorizonSettings" }, // 121365510
		{ &Z_Construct_UFunction_UHorizonSettings_GetMaxConcurrentConnections, "GetMaxConcurrentConnections" }, // 3738698269
		{ &Z_Construct_UFunction_UHorizonSettings_IsDebugModeEnabled, "IsDebugModeEnabled" }, // 4229519731
		{ &Z_Construct_UFunction_UHorizonSettings_IsVerboseLoggingEnabled, "IsVerboseLoggingEnabled" }, // 1970170592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultHeartbeatEnabled_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bDefaultHeartbeatEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultHeartbeatEnabled = { "bDefaultHeartbeatEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultHeartbeatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultHeartbeatEnabled_MetaData), NewProp_bDefaultHeartbeatEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultHeartbeatInterval = { "DefaultHeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, DefaultHeartbeatInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHeartbeatInterval_MetaData), NewProp_DefaultHeartbeatInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultMaxReconnectAttempts = { "DefaultMaxReconnectAttempts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, DefaultMaxReconnectAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxReconnectAttempts_MetaData), NewProp_DefaultMaxReconnectAttempts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultReconnectDelay = { "DefaultReconnectDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, DefaultReconnectDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReconnectDelay_MetaData), NewProp_DefaultReconnectDelay_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultAutoReconnect_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bDefaultAutoReconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultAutoReconnect = { "bDefaultAutoReconnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultAutoReconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultAutoReconnect_MetaData), NewProp_bDefaultAutoReconnect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultHeartbeatMessage = { "DefaultHeartbeatMessage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, DefaultHeartbeatMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHeartbeatMessage_MetaData), NewProp_DefaultHeartbeatMessage_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableVerboseLogging_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableVerboseLogging = { "bEnableVerboseLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableVerboseLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVerboseLogging_MetaData), NewProp_bEnableVerboseLogging_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogConnectionEvents_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bLogConnectionEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogConnectionEvents = { "bLogConnectionEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogConnectionEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogConnectionEvents_MetaData), NewProp_bLogConnectionEvents_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogMessageEvents_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bLogMessageEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogMessageEvents = { "bLogMessageEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogMessageEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogMessageEvents_MetaData), NewProp_bLogMessageEvents_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogHeartbeatEvents_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bLogHeartbeatEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogHeartbeatEvents = { "bLogHeartbeatEvents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogHeartbeatEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogHeartbeatEvents_MetaData), NewProp_bLogHeartbeatEvents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MaxConcurrentConnections = { "MaxConcurrentConnections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, MaxConcurrentConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentConnections_MetaData), NewProp_MaxConcurrentConnections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_ClientCleanupInterval = { "ClientCleanupInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, ClientCleanupInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCleanupInterval_MetaData), NewProp_ClientCleanupInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MessageQueueSize = { "MessageQueueSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, MessageQueueSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageQueueSize_MetaData), NewProp_MessageQueueSize_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bUseHighPriorityWorkerThreads_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bUseHighPriorityWorkerThreads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bUseHighPriorityWorkerThreads = { "bUseHighPriorityWorkerThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bUseHighPriorityWorkerThreads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHighPriorityWorkerThreads_MetaData), NewProp_bUseHighPriorityWorkerThreads_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAllowInsecureConnections_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bAllowInsecureConnections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAllowInsecureConnections = { "bAllowInsecureConnections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAllowInsecureConnections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInsecureConnections_MetaData), NewProp_bAllowInsecureConnections_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bVerifySSLCertificates_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bVerifySSLCertificates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bVerifySSLCertificates = { "bVerifySSLCertificates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bVerifySSLCertificates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerifySSLCertificates_MetaData), NewProp_bVerifySSLCertificates_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_ConnectionTimeout = { "ConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, ConnectionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionTimeout_MetaData), NewProp_ConnectionTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MaxMessageSize = { "MaxMessageSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, MaxMessageSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMessageSize_MetaData), NewProp_MaxMessageSize_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableAutoCleanup_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableAutoCleanup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableAutoCleanup = { "bEnableAutoCleanup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableAutoCleanup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoCleanup_MetaData), NewProp_bEnableAutoCleanup_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableStatisticsTracking_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableStatisticsTracking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableStatisticsTracking = { "bEnableStatisticsTracking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableStatisticsTracking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStatisticsTracking_MetaData), NewProp_bEnableStatisticsTracking_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableGlobalEventBroadcasting_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableGlobalEventBroadcasting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableGlobalEventBroadcasting = { "bEnableGlobalEventBroadcasting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableGlobalEventBroadcasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGlobalEventBroadcasting_MetaData), NewProp_bEnableGlobalEventBroadcasting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_FrameBufferSize = { "FrameBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, FrameBufferSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameBufferSize_MetaData), NewProp_FrameBufferSize_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableDebugMode_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableDebugMode = { "bEnableDebugMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugMode_MetaData), NewProp_bEnableDebugMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DebugServerURLs_Inner = { "DebugServerURLs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DebugServerURLs = { "DebugServerURLs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSettings, DebugServerURLs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugServerURLs_MetaData), NewProp_DebugServerURLs_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAutoConnectInPIE_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bAutoConnectInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAutoConnectInPIE = { "bAutoConnectInPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAutoConnectInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnectInPIE_MetaData), NewProp_bAutoConnectInPIE_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bSimulateConnectionFailures_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bSimulateConnectionFailures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bSimulateConnectionFailures = { "bSimulateConnectionFailures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bSimulateConnectionFailures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateConnectionFailures_MetaData), NewProp_bSimulateConnectionFailures_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableHTTPClient_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableHTTPClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableHTTPClient = { "bEnableHTTPClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableHTTPClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHTTPClient_MetaData), NewProp_bEnableHTTPClient_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableTCPClient_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableTCPClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableTCPClient = { "bEnableTCPClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableTCPClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTCPClient_MetaData), NewProp_bEnableTCPClient_MetaData) };
void Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableUDPClient_SetBit(void* Obj)
{
	((UHorizonSettings*)Obj)->bEnableUDPClient = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableUDPClient = { "bEnableUDPClient", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonSettings), &Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableUDPClient_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUDPClient_MetaData), NewProp_bEnableUDPClient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultHeartbeatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultHeartbeatInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultMaxReconnectAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultReconnectDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bDefaultAutoReconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DefaultHeartbeatMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableVerboseLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogConnectionEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogMessageEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bLogHeartbeatEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MaxConcurrentConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_ClientCleanupInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MessageQueueSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bUseHighPriorityWorkerThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAllowInsecureConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bVerifySSLCertificates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_ConnectionTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_MaxMessageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableAutoCleanup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableStatisticsTracking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableGlobalEventBroadcasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_FrameBufferSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DebugServerURLs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_DebugServerURLs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bAutoConnectInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bSimulateConnectionFailures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableHTTPClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableTCPClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSettings_Statics::NewProp_bEnableUDPClient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHorizonSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizonSettings_Statics::ClassParams = {
	&UHorizonSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHorizonSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizonSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizonSettings()
{
	if (!Z_Registration_Info_UClass_UHorizonSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizonSettings.OuterSingleton, Z_Construct_UClass_UHorizonSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizonSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonSettings);
UHorizonSettings::~UHorizonSettings() {}
// ********** End Class UHorizonSettings ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h__Script_Horizon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizonSettings, UHorizonSettings::StaticClass, TEXT("UHorizonSettings"), &Z_Registration_Info_UClass_UHorizonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizonSettings), 3097143225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h__Script_Horizon_4281421081(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSettings_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
