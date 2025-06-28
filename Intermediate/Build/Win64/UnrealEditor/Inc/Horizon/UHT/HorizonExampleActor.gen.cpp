// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonExampleActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonExampleActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HORIZON_API UClass* Z_Construct_UClass_AHorizonExampleActor();
HORIZON_API UClass* Z_Construct_UClass_AHorizonExampleActor_NoRegister();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horizon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHorizonExampleActor Function ConnectToServer ****************************
struct Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Example API functions\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example API functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "ConnectToServer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execConnectToServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectToServer();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function ConnectToServer ******************************

// ********** Begin Class AHorizonExampleActor Function DisconnectFromServer ***********************
struct Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "DisconnectFromServer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execDisconnectFromServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectFromServer();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function DisconnectFromServer *************************

// ********** Begin Class AHorizonExampleActor Function GetConnectionStatus ************************
struct Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics
{
	struct HorizonExampleActor_eventGetConnectionStatus_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventGetConnectionStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "GetConnectionStatus", Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::HorizonExampleActor_eventGetConnectionStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::HorizonExampleActor_eventGetConnectionStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execGetConnectionStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetConnectionStatus();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function GetConnectionStatus **************************

// ********** Begin Class AHorizonExampleActor Function GetHorizonStatus ***************************
struct Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics
{
	struct HorizonExampleActor_eventGetHorizonStatus_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventGetHorizonStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "GetHorizonStatus", Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::HorizonExampleActor_eventGetHorizonStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::HorizonExampleActor_eventGetHorizonStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execGetHorizonStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetHorizonStatus();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function GetHorizonStatus *****************************

// ********** Begin Class AHorizonExampleActor Function GetMessagesReceivedCount *******************
struct Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics
{
	struct HorizonExampleActor_eventGetMessagesReceivedCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventGetMessagesReceivedCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "GetMessagesReceivedCount", Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::HorizonExampleActor_eventGetMessagesReceivedCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::HorizonExampleActor_eventGetMessagesReceivedCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execGetMessagesReceivedCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMessagesReceivedCount();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function GetMessagesReceivedCount *********************

// ********** Begin Class AHorizonExampleActor Function GetMessagesSentCount ***********************
struct Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics
{
	struct HorizonExampleActor_eventGetMessagesSentCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventGetMessagesSentCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "GetMessagesSentCount", Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::HorizonExampleActor_eventGetMessagesSentCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::HorizonExampleActor_eventGetMessagesSentCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execGetMessagesSentCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMessagesSentCount();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function GetMessagesSentCount *************************

// ********** Begin Class AHorizonExampleActor Function IsConnectedToServer ************************
struct Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics
{
	struct HorizonExampleActor_eventIsConnectedToServer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonExampleActor_eventIsConnectedToServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonExampleActor_eventIsConnectedToServer_Parms), &Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "IsConnectedToServer", Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::HorizonExampleActor_eventIsConnectedToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::HorizonExampleActor_eventIsConnectedToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execIsConnectedToServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnectedToServer();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function IsConnectedToServer **************************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketClosed **************************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics
{
	struct HorizonExampleActor_eventOnWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_bWasClean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketClosed_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((HorizonExampleActor_eventOnWebSocketClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonExampleActor_eventOnWebSocketClosed_Parms), &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketClosed", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::HorizonExampleActor_eventOnWebSocketClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::HorizonExampleActor_eventOnWebSocketClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketClosed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketClosed(Z_Param_StatusCode,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketClosed ****************************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketConnected ***********************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics
{
	struct HorizonExampleActor_eventOnWebSocketConnected_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((HorizonExampleActor_eventOnWebSocketConnected_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonExampleActor_eventOnWebSocketConnected_Parms), &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketConnected", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::HorizonExampleActor_eventOnWebSocketConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::HorizonExampleActor_eventOnWebSocketConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketConnected)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketConnected(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketConnected *************************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketConnectionError *****************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics
{
	struct HorizonExampleActor_eventOnWebSocketConnectionError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketConnectionError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketConnectionError", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::HorizonExampleActor_eventOnWebSocketConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::HorizonExampleActor_eventOnWebSocketConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketConnectionError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketConnectionError(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketConnectionError *******************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketMessage *************************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics
{
	struct HorizonExampleActor_eventOnWebSocketMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketMessage", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::HorizonExampleActor_eventOnWebSocketMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::HorizonExampleActor_eventOnWebSocketMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketMessage ***************************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketMessageSent *********************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics
{
	struct HorizonExampleActor_eventOnWebSocketMessageSent_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketMessageSent_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketMessageSent", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::HorizonExampleActor_eventOnWebSocketMessageSent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::HorizonExampleActor_eventOnWebSocketMessageSent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketMessageSent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketMessageSent(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketMessageSent ***********************

// ********** Begin Class AHorizonExampleActor Function OnWebSocketRawMessage **********************
struct Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics
{
	struct HorizonExampleActor_eventOnWebSocketRawMessage_Parms
	{
		TArray<uint8> Data;
		int32 Size;
		int32 BytesRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketRawMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketRawMessage_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_BytesRemaining = { "BytesRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventOnWebSocketRawMessage_Parms, BytesRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::NewProp_BytesRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "OnWebSocketRawMessage", Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::HorizonExampleActor_eventOnWebSocketRawMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::HorizonExampleActor_eventOnWebSocketRawMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execOnWebSocketRawMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_BytesRemaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWebSocketRawMessage(Z_Param_Out_Data,Z_Param_Size,Z_Param_BytesRemaining);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function OnWebSocketRawMessage ************************

// ********** Begin Class AHorizonExampleActor Function SendBinaryTestMessage **********************
struct Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendBinaryTestMessage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendBinaryTestMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendBinaryTestMessage();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendBinaryTestMessage ************************

// ********** Begin Class AHorizonExampleActor Function SendCustomMessage **************************
struct Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics
{
	struct HorizonExampleActor_eventSendCustomMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventSendCustomMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendCustomMessage", Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::HorizonExampleActor_eventSendCustomMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::HorizonExampleActor_eventSendCustomMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendCustomMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendCustomMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendCustomMessage ****************************

// ********** Begin Class AHorizonExampleActor Function SendJSONMessage ****************************
struct Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics
{
	struct HorizonExampleActor_eventSendJSONMessage_Parms
	{
		FString MessageType;
		TMap<FString,FString> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventSendJSONMessage_Parms, MessageType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageType_MetaData), NewProp_MessageType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonExampleActor_eventSendJSONMessage_Parms, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_MessageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendJSONMessage", Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::HorizonExampleActor_eventSendJSONMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::HorizonExampleActor_eventSendJSONMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendJSONMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendJSONMessage(Z_Param_MessageType,Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendJSONMessage ******************************

// ********** Begin Class AHorizonExampleActor Function SendPeriodicMessage ************************
struct Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Periodic message sending\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Periodic message sending" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendPeriodicMessage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendPeriodicMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPeriodicMessage();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendPeriodicMessage **************************

// ********** Begin Class AHorizonExampleActor Function SendRandomTestMessage **********************
struct Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendRandomTestMessage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendRandomTestMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendRandomTestMessage();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendRandomTestMessage ************************

// ********** Begin Class AHorizonExampleActor Function SendTestMessage ****************************
struct Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "SendTestMessage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execSendTestMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendTestMessage();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function SendTestMessage ******************************

// ********** Begin Class AHorizonExampleActor Function TogglePeriodicMessages *********************
struct Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Example" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorizonExampleActor, nullptr, "TogglePeriodicMessages", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorizonExampleActor::execTogglePeriodicMessages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePeriodicMessages();
	P_NATIVE_END;
}
// ********** End Class AHorizonExampleActor Function TogglePeriodicMessages ***********************

// ********** Begin Class AHorizonExampleActor *****************************************************
void AHorizonExampleActor::StaticRegisterNativesAHorizonExampleActor()
{
	UClass* Class = AHorizonExampleActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToServer", &AHorizonExampleActor::execConnectToServer },
		{ "DisconnectFromServer", &AHorizonExampleActor::execDisconnectFromServer },
		{ "GetConnectionStatus", &AHorizonExampleActor::execGetConnectionStatus },
		{ "GetHorizonStatus", &AHorizonExampleActor::execGetHorizonStatus },
		{ "GetMessagesReceivedCount", &AHorizonExampleActor::execGetMessagesReceivedCount },
		{ "GetMessagesSentCount", &AHorizonExampleActor::execGetMessagesSentCount },
		{ "IsConnectedToServer", &AHorizonExampleActor::execIsConnectedToServer },
		{ "OnWebSocketClosed", &AHorizonExampleActor::execOnWebSocketClosed },
		{ "OnWebSocketConnected", &AHorizonExampleActor::execOnWebSocketConnected },
		{ "OnWebSocketConnectionError", &AHorizonExampleActor::execOnWebSocketConnectionError },
		{ "OnWebSocketMessage", &AHorizonExampleActor::execOnWebSocketMessage },
		{ "OnWebSocketMessageSent", &AHorizonExampleActor::execOnWebSocketMessageSent },
		{ "OnWebSocketRawMessage", &AHorizonExampleActor::execOnWebSocketRawMessage },
		{ "SendBinaryTestMessage", &AHorizonExampleActor::execSendBinaryTestMessage },
		{ "SendCustomMessage", &AHorizonExampleActor::execSendCustomMessage },
		{ "SendJSONMessage", &AHorizonExampleActor::execSendJSONMessage },
		{ "SendPeriodicMessage", &AHorizonExampleActor::execSendPeriodicMessage },
		{ "SendRandomTestMessage", &AHorizonExampleActor::execSendRandomTestMessage },
		{ "SendTestMessage", &AHorizonExampleActor::execSendTestMessage },
		{ "TogglePeriodicMessages", &AHorizonExampleActor::execTogglePeriodicMessages },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorizonExampleActor;
UClass* AHorizonExampleActor::GetPrivateStaticClass()
{
	using TClass = AHorizonExampleActor;
	if (!Z_Registration_Info_UClass_AHorizonExampleActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonExampleActor"),
			Z_Registration_Info_UClass_AHorizonExampleActor.InnerSingleton,
			StaticRegisterNativesAHorizonExampleActor,
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
	return Z_Registration_Info_UClass_AHorizonExampleActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorizonExampleActor_NoRegister()
{
	return AHorizonExampleActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorizonExampleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon Example Actor\n * Demonstrates how to use the Horizon WebSocket plugin\n * This actor shows various use cases and best practices\n */" },
#endif
		{ "IncludePath", "HorizonExampleActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon Example Actor\nDemonstrates how to use the Horizon WebSocket plugin\nThis actor shows various use cases and best practices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebSocketComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerURL_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
		{ "EditCondition", "bAutoConnect" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendPeriodicMessages_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageInterval_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bSendPeriodicMessages" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogReceivedMessages_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMessages_MetaData[] = {
		{ "Category", "Horizon|Example Settings" },
		{ "ModuleRelativePath", "Public/HorizonExampleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocketComponent;
	static void NewProp_bAutoConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerURL;
	static void NewProp_bSendPeriodicMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendPeriodicMessages;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MessageInterval;
	static void NewProp_bLogReceivedMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogReceivedMessages;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestMessages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHorizonExampleActor_ConnectToServer, "ConnectToServer" }, // 3403785779
		{ &Z_Construct_UFunction_AHorizonExampleActor_DisconnectFromServer, "DisconnectFromServer" }, // 1797911348
		{ &Z_Construct_UFunction_AHorizonExampleActor_GetConnectionStatus, "GetConnectionStatus" }, // 2945511889
		{ &Z_Construct_UFunction_AHorizonExampleActor_GetHorizonStatus, "GetHorizonStatus" }, // 132515059
		{ &Z_Construct_UFunction_AHorizonExampleActor_GetMessagesReceivedCount, "GetMessagesReceivedCount" }, // 1119712205
		{ &Z_Construct_UFunction_AHorizonExampleActor_GetMessagesSentCount, "GetMessagesSentCount" }, // 3456456243
		{ &Z_Construct_UFunction_AHorizonExampleActor_IsConnectedToServer, "IsConnectedToServer" }, // 2994891589
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketClosed, "OnWebSocketClosed" }, // 1240783578
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnected, "OnWebSocketConnected" }, // 4045530592
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketConnectionError, "OnWebSocketConnectionError" }, // 2569615653
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessage, "OnWebSocketMessage" }, // 2832411035
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketMessageSent, "OnWebSocketMessageSent" }, // 2007546970
		{ &Z_Construct_UFunction_AHorizonExampleActor_OnWebSocketRawMessage, "OnWebSocketRawMessage" }, // 4037240559
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendBinaryTestMessage, "SendBinaryTestMessage" }, // 4013616098
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendCustomMessage, "SendCustomMessage" }, // 3806222451
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendJSONMessage, "SendJSONMessage" }, // 3142942840
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendPeriodicMessage, "SendPeriodicMessage" }, // 388458613
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendRandomTestMessage, "SendRandomTestMessage" }, // 3215654430
		{ &Z_Construct_UFunction_AHorizonExampleActor_SendTestMessage, "SendTestMessage" }, // 2354452287
		{ &Z_Construct_UFunction_AHorizonExampleActor_TogglePeriodicMessages, "TogglePeriodicMessages" }, // 2222975066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorizonExampleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_WebSocketComponent = { "WebSocketComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorizonExampleActor, WebSocketComponent), Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebSocketComponent_MetaData), NewProp_WebSocketComponent_MetaData) };
void Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
{
	((AHorizonExampleActor*)Obj)->bAutoConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHorizonExampleActor), &Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnect_MetaData), NewProp_bAutoConnect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_ServerURL = { "ServerURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorizonExampleActor, ServerURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerURL_MetaData), NewProp_ServerURL_MetaData) };
void Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bSendPeriodicMessages_SetBit(void* Obj)
{
	((AHorizonExampleActor*)Obj)->bSendPeriodicMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bSendPeriodicMessages = { "bSendPeriodicMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHorizonExampleActor), &Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bSendPeriodicMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendPeriodicMessages_MetaData), NewProp_bSendPeriodicMessages_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_MessageInterval = { "MessageInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorizonExampleActor, MessageInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageInterval_MetaData), NewProp_MessageInterval_MetaData) };
void Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bLogReceivedMessages_SetBit(void* Obj)
{
	((AHorizonExampleActor*)Obj)->bLogReceivedMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bLogReceivedMessages = { "bLogReceivedMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHorizonExampleActor), &Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bLogReceivedMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogReceivedMessages_MetaData), NewProp_bLogReceivedMessages_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_TestMessages_Inner = { "TestMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_TestMessages = { "TestMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorizonExampleActor, TestMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMessages_MetaData), NewProp_TestMessages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorizonExampleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_WebSocketComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bAutoConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_ServerURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bSendPeriodicMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_MessageInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_bLogReceivedMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_TestMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorizonExampleActor_Statics::NewProp_TestMessages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorizonExampleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHorizonExampleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorizonExampleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorizonExampleActor_Statics::ClassParams = {
	&AHorizonExampleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHorizonExampleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHorizonExampleActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorizonExampleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorizonExampleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorizonExampleActor()
{
	if (!Z_Registration_Info_UClass_AHorizonExampleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorizonExampleActor.OuterSingleton, Z_Construct_UClass_AHorizonExampleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorizonExampleActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorizonExampleActor);
AHorizonExampleActor::~AHorizonExampleActor() {}
// ********** End Class AHorizonExampleActor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h__Script_Horizon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorizonExampleActor, AHorizonExampleActor::StaticClass, TEXT("AHorizonExampleActor"), &Z_Registration_Info_UClass_AHorizonExampleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorizonExampleActor), 31503331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h__Script_Horizon_3533464932(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonExampleActor_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
