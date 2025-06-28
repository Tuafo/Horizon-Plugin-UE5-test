// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonWebsocketComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonWebsocketComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketComponent();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister();
HORIZON_API UEnum* Z_Construct_UEnum_Horizon_EHorizonWebSocketState();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Horizon();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHorizonWebSocketConnected ******************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketConnected_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate declarations - must be declared before the class that uses them\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate declarations - must be declared before the class that uses them" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_Horizon_eventOnHorizonWebSocketConnected_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Horizon_eventOnHorizonWebSocketConnected_Parms), &Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketConnected__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnected, bool bSuccess)
{
	struct _Script_Horizon_eventOnHorizonWebSocketConnected_Parms
	{
		bool bSuccess;
	};
	_Script_Horizon_eventOnHorizonWebSocketConnected_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnHorizonWebSocketConnected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketConnected ********************************************

// ********** Begin Delegate FOnHorizonWebSocketConnectionError ************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketConnectionError__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketConnectionError, const FString& ErrorMessage)
{
	struct _Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms
	{
		FString ErrorMessage;
	};
	_Script_Horizon_eventOnHorizonWebSocketConnectionError_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnHorizonWebSocketConnectionError.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketConnectionError **************************************

// ********** Begin Delegate FOnHorizonWebSocketClosed *********************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
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
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketClosed_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((_Script_Horizon_eventOnHorizonWebSocketClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Horizon_eventOnHorizonWebSocketClosed_Parms), &Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketClosed__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean)
{
	struct _Script_Horizon_eventOnHorizonWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
	_Script_Horizon_eventOnHorizonWebSocketClosed_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Reason=Reason;
	Parms.bWasClean=bWasClean ? true : false;
	OnHorizonWebSocketClosed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketClosed ***********************************************

// ********** Begin Delegate FOnHorizonWebSocketMessage ********************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketMessage__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessage, const FString& Message)
{
	struct _Script_Horizon_eventOnHorizonWebSocketMessage_Parms
	{
		FString Message;
	};
	_Script_Horizon_eventOnHorizonWebSocketMessage_Parms Parms;
	Parms.Message=Message;
	OnHorizonWebSocketMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketMessage **********************************************

// ********** Begin Delegate FOnHorizonWebSocketRawMessage *****************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms
	{
		TArray<uint8> Data;
		int32 Size;
		int32 BytesRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
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
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_BytesRemaining = { "BytesRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms, BytesRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::NewProp_BytesRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketRawMessage__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketRawMessage_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketRawMessage, TArray<uint8> const& Data, int32 Size, int32 BytesRemaining)
{
	struct _Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms
	{
		TArray<uint8> Data;
		int32 Size;
		int32 BytesRemaining;
	};
	_Script_Horizon_eventOnHorizonWebSocketRawMessage_Parms Parms;
	Parms.Data=Data;
	Parms.Size=Size;
	Parms.BytesRemaining=BytesRemaining;
	OnHorizonWebSocketRawMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketRawMessage *******************************************

// ********** Begin Delegate FOnHorizonWebSocketMessageSent ****************************************
struct Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics
{
	struct _Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Horizon, nullptr, "OnHorizonWebSocketMessageSent__DelegateSignature", Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::_Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHorizonWebSocketMessageSent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonWebSocketMessageSent, const FString& Message)
{
	struct _Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms
	{
		FString Message;
	};
	_Script_Horizon_eventOnHorizonWebSocketMessageSent_Parms Parms;
	Parms.Message=Message;
	OnHorizonWebSocketMessageSent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHorizonWebSocketMessageSent ******************************************

// ********** Begin Class UHorizonWebSocketComponent Function Connect ******************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics
{
	struct HorizonWebSocketComponent_eventConnect_Parms
	{
		FString URL;
		FString Protocol;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public API (delegates to WebSocket client)\n" },
#endif
		{ "CPP_Default_Protocol", "" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public API (delegates to WebSocket client)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventConnect_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventConnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventConnect_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "Connect", Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::HorizonWebSocketComponent_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::HorizonWebSocketComponent_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_URL,Z_Param_Protocol);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function Connect ********************************

// ********** Begin Class UHorizonWebSocketComponent Function Disconnect ***************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "Disconnect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function Disconnect *****************************

// ********** Begin Class UHorizonWebSocketComponent Function ForceReconnect ***********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "ForceReconnect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execForceReconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceReconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function ForceReconnect *************************

// ********** Begin Class UHorizonWebSocketComponent Function GetAutoReconnect *********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics
{
	struct HorizonWebSocketComponent_eventGetAutoReconnect_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventGetAutoReconnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventGetAutoReconnect_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetAutoReconnect", Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::HorizonWebSocketComponent_eventGetAutoReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::HorizonWebSocketComponent_eventGetAutoReconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetAutoReconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAutoReconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetAutoReconnect ***********************

// ********** Begin Class UHorizonWebSocketComponent Function GetConnectionState *******************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics
{
	struct HorizonWebSocketComponent_eventGetConnectionState_Parms
	{
		EHorizonWebSocketState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetConnectionState_Parms, ReturnValue), Z_Construct_UEnum_Horizon_EHorizonWebSocketState, METADATA_PARAMS(0, nullptr) }; // 1121817835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetConnectionState", Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::HorizonWebSocketComponent_eventGetConnectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::HorizonWebSocketComponent_eventGetConnectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetConnectionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHorizonWebSocketState*)Z_Param__Result=P_THIS->GetConnectionState();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetConnectionState *********************

// ********** Begin Class UHorizonWebSocketComponent Function GetCurrentReconnectAttempts **********
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics
{
	struct HorizonWebSocketComponent_eventGetCurrentReconnectAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetCurrentReconnectAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetCurrentReconnectAttempts", Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::HorizonWebSocketComponent_eventGetCurrentReconnectAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::HorizonWebSocketComponent_eventGetCurrentReconnectAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetCurrentReconnectAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentReconnectAttempts();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetCurrentReconnectAttempts ************

// ********** Begin Class UHorizonWebSocketComponent Function GetHeartbeatEnabled ******************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics
{
	struct HorizonWebSocketComponent_eventGetHeartbeatEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventGetHeartbeatEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventGetHeartbeatEnabled_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetHeartbeatEnabled", Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::HorizonWebSocketComponent_eventGetHeartbeatEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::HorizonWebSocketComponent_eventGetHeartbeatEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetHeartbeatEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHeartbeatEnabled();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetHeartbeatEnabled ********************

// ********** Begin Class UHorizonWebSocketComponent Function GetHeartbeatInterval *****************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics
{
	struct HorizonWebSocketComponent_eventGetHeartbeatInterval_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetHeartbeatInterval_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetHeartbeatInterval", Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::HorizonWebSocketComponent_eventGetHeartbeatInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::HorizonWebSocketComponent_eventGetHeartbeatInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetHeartbeatInterval)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeartbeatInterval();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetHeartbeatInterval *******************

// ********** Begin Class UHorizonWebSocketComponent Function GetMaxReconnectAttempts **************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics
{
	struct HorizonWebSocketComponent_eventGetMaxReconnectAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetMaxReconnectAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetMaxReconnectAttempts", Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::HorizonWebSocketComponent_eventGetMaxReconnectAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::HorizonWebSocketComponent_eventGetMaxReconnectAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetMaxReconnectAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxReconnectAttempts();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetMaxReconnectAttempts ****************

// ********** Begin Class UHorizonWebSocketComponent Function GetServerProtocol ********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics
{
	struct HorizonWebSocketComponent_eventGetServerProtocol_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetServerProtocol_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetServerProtocol", Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::HorizonWebSocketComponent_eventGetServerProtocol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::HorizonWebSocketComponent_eventGetServerProtocol_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetServerProtocol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerProtocol();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetServerProtocol **********************

// ********** Begin Class UHorizonWebSocketComponent Function GetServerURL *************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics
{
	struct HorizonWebSocketComponent_eventGetServerURL_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventGetServerURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetServerURL", Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::HorizonWebSocketComponent_eventGetServerURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::HorizonWebSocketComponent_eventGetServerURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetServerURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerURL();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetServerURL ***************************

// ********** Begin Class UHorizonWebSocketComponent Function GetVerboseLogging ********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics
{
	struct HorizonWebSocketComponent_eventGetVerboseLogging_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventGetVerboseLogging_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventGetVerboseLogging_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "GetVerboseLogging", Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::HorizonWebSocketComponent_eventGetVerboseLogging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::HorizonWebSocketComponent_eventGetVerboseLogging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execGetVerboseLogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVerboseLogging();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function GetVerboseLogging **********************

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketClosed ****************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketClosed", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::HorizonWebSocketComponent_eventHandleWebSocketClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketClosed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketClosed(Z_Param_StatusCode,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketClosed ******************

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketConnected *************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketConnected_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers that forward to component delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers that forward to component delegates" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventHandleWebSocketConnected_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventHandleWebSocketConnected_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketConnected", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::HorizonWebSocketComponent_eventHandleWebSocketConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::HorizonWebSocketComponent_eventHandleWebSocketConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketConnected)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketConnected(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketConnected ***************

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketConnectionError *******
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketConnectionError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketConnectionError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketConnectionError", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::HorizonWebSocketComponent_eventHandleWebSocketConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::HorizonWebSocketComponent_eventHandleWebSocketConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketConnectionError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketConnectionError(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketConnectionError *********

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketMessage ***************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketMessage", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::HorizonWebSocketComponent_eventHandleWebSocketMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::HorizonWebSocketComponent_eventHandleWebSocketMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketMessage *****************

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketMessageSent ***********
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketMessageSent_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketMessageSent_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketMessageSent", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::HorizonWebSocketComponent_eventHandleWebSocketMessageSent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::HorizonWebSocketComponent_eventHandleWebSocketMessageSent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketMessageSent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketMessageSent(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketMessageSent *************

// ********** Begin Class UHorizonWebSocketComponent Function HandleWebSocketRawMessage ************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics
{
	struct HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms
	{
		TArray<uint8> Data;
		int32 Size;
		int32 BytesRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_BytesRemaining = { "BytesRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms, BytesRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::NewProp_BytesRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "HandleWebSocketRawMessage", Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::HorizonWebSocketComponent_eventHandleWebSocketRawMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execHandleWebSocketRawMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_PROPERTY(FIntProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_BytesRemaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWebSocketRawMessage(Z_Param_Out_Data,Z_Param_Size,Z_Param_BytesRemaining);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function HandleWebSocketRawMessage **************

// ********** Begin Class UHorizonWebSocketComponent Function IsConnected **************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics
{
	struct HorizonWebSocketComponent_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventIsConnected_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "IsConnected", Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::HorizonWebSocketComponent_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::HorizonWebSocketComponent_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function IsConnected ****************************

// ********** Begin Class UHorizonWebSocketComponent Function SendBinaryMessage ********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics
{
	struct HorizonWebSocketComponent_eventSendBinaryMessage_Parms
	{
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Messaging" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventSendBinaryMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventSendBinaryMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventSendBinaryMessage_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SendBinaryMessage", Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::HorizonWebSocketComponent_eventSendBinaryMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::HorizonWebSocketComponent_eventSendBinaryMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSendBinaryMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendBinaryMessage(Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SendBinaryMessage **********************

// ********** Begin Class UHorizonWebSocketComponent Function SendHeartbeat ************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Heartbeat" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SendHeartbeat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSendHeartbeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendHeartbeat();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SendHeartbeat **************************

// ********** Begin Class UHorizonWebSocketComponent Function SendMessage **************************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics
{
	struct HorizonWebSocketComponent_eventSendMessage_Parms
	{
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Messaging" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventSendMessage_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SendMessage", Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::HorizonWebSocketComponent_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::HorizonWebSocketComponent_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SendMessage ****************************

// ********** Begin Class UHorizonWebSocketComponent Function SetAutoReconnect *********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics
{
	struct HorizonWebSocketComponent_eventSetAutoReconnect_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventSetAutoReconnect_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventSetAutoReconnect_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SetAutoReconnect", Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::HorizonWebSocketComponent_eventSetAutoReconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::HorizonWebSocketComponent_eventSetAutoReconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSetAutoReconnect)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoReconnect(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SetAutoReconnect ***********************

// ********** Begin Class UHorizonWebSocketComponent Function SetHeartbeatEnabled ******************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics
{
	struct HorizonWebSocketComponent_eventSetHeartbeatEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration access\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration access" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventSetHeartbeatEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventSetHeartbeatEnabled_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SetHeartbeatEnabled", Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::HorizonWebSocketComponent_eventSetHeartbeatEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::HorizonWebSocketComponent_eventSetHeartbeatEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSetHeartbeatEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeartbeatEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SetHeartbeatEnabled ********************

// ********** Begin Class UHorizonWebSocketComponent Function SetHeartbeatInterval *****************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics
{
	struct HorizonWebSocketComponent_eventSetHeartbeatInterval_Parms
	{
		float IntervalSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::NewProp_IntervalSeconds = { "IntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventSetHeartbeatInterval_Parms, IntervalSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::NewProp_IntervalSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SetHeartbeatInterval", Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::HorizonWebSocketComponent_eventSetHeartbeatInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::HorizonWebSocketComponent_eventSetHeartbeatInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSetHeartbeatInterval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_IntervalSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeartbeatInterval(Z_Param_IntervalSeconds);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SetHeartbeatInterval *******************

// ********** Begin Class UHorizonWebSocketComponent Function SetMaxReconnectAttempts **************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics
{
	struct HorizonWebSocketComponent_eventSetMaxReconnectAttempts_Parms
	{
		int32 MaxAttempts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketComponent_eventSetMaxReconnectAttempts_Parms, MaxAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::NewProp_MaxAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SetMaxReconnectAttempts", Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::HorizonWebSocketComponent_eventSetMaxReconnectAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::HorizonWebSocketComponent_eventSetMaxReconnectAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSetMaxReconnectAttempts)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttempts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxReconnectAttempts(Z_Param_MaxAttempts);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SetMaxReconnectAttempts ****************

// ********** Begin Class UHorizonWebSocketComponent Function SetVerboseLogging ********************
struct Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics
{
	struct HorizonWebSocketComponent_eventSetVerboseLogging_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((HorizonWebSocketComponent_eventSetVerboseLogging_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketComponent_eventSetVerboseLogging_Parms), &Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketComponent, nullptr, "SetVerboseLogging", Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::HorizonWebSocketComponent_eventSetVerboseLogging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::HorizonWebSocketComponent_eventSetVerboseLogging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketComponent::execSetVerboseLogging)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerboseLogging(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketComponent Function SetVerboseLogging **********************

// ********** Begin Class UHorizonWebSocketComponent ***********************************************
void UHorizonWebSocketComponent::StaticRegisterNativesUHorizonWebSocketComponent()
{
	UClass* Class = UHorizonWebSocketComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UHorizonWebSocketComponent::execConnect },
		{ "Disconnect", &UHorizonWebSocketComponent::execDisconnect },
		{ "ForceReconnect", &UHorizonWebSocketComponent::execForceReconnect },
		{ "GetAutoReconnect", &UHorizonWebSocketComponent::execGetAutoReconnect },
		{ "GetConnectionState", &UHorizonWebSocketComponent::execGetConnectionState },
		{ "GetCurrentReconnectAttempts", &UHorizonWebSocketComponent::execGetCurrentReconnectAttempts },
		{ "GetHeartbeatEnabled", &UHorizonWebSocketComponent::execGetHeartbeatEnabled },
		{ "GetHeartbeatInterval", &UHorizonWebSocketComponent::execGetHeartbeatInterval },
		{ "GetMaxReconnectAttempts", &UHorizonWebSocketComponent::execGetMaxReconnectAttempts },
		{ "GetServerProtocol", &UHorizonWebSocketComponent::execGetServerProtocol },
		{ "GetServerURL", &UHorizonWebSocketComponent::execGetServerURL },
		{ "GetVerboseLogging", &UHorizonWebSocketComponent::execGetVerboseLogging },
		{ "HandleWebSocketClosed", &UHorizonWebSocketComponent::execHandleWebSocketClosed },
		{ "HandleWebSocketConnected", &UHorizonWebSocketComponent::execHandleWebSocketConnected },
		{ "HandleWebSocketConnectionError", &UHorizonWebSocketComponent::execHandleWebSocketConnectionError },
		{ "HandleWebSocketMessage", &UHorizonWebSocketComponent::execHandleWebSocketMessage },
		{ "HandleWebSocketMessageSent", &UHorizonWebSocketComponent::execHandleWebSocketMessageSent },
		{ "HandleWebSocketRawMessage", &UHorizonWebSocketComponent::execHandleWebSocketRawMessage },
		{ "IsConnected", &UHorizonWebSocketComponent::execIsConnected },
		{ "SendBinaryMessage", &UHorizonWebSocketComponent::execSendBinaryMessage },
		{ "SendHeartbeat", &UHorizonWebSocketComponent::execSendHeartbeat },
		{ "SendMessage", &UHorizonWebSocketComponent::execSendMessage },
		{ "SetAutoReconnect", &UHorizonWebSocketComponent::execSetAutoReconnect },
		{ "SetHeartbeatEnabled", &UHorizonWebSocketComponent::execSetHeartbeatEnabled },
		{ "SetHeartbeatInterval", &UHorizonWebSocketComponent::execSetHeartbeatInterval },
		{ "SetMaxReconnectAttempts", &UHorizonWebSocketComponent::execSetMaxReconnectAttempts },
		{ "SetVerboseLogging", &UHorizonWebSocketComponent::execSetVerboseLogging },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHorizonWebSocketComponent;
UClass* UHorizonWebSocketComponent::GetPrivateStaticClass()
{
	using TClass = UHorizonWebSocketComponent;
	if (!Z_Registration_Info_UClass_UHorizonWebSocketComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonWebSocketComponent"),
			Z_Registration_Info_UClass_UHorizonWebSocketComponent.InnerSingleton,
			StaticRegisterNativesUHorizonWebSocketComponent,
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
	return Z_Registration_Info_UClass_UHorizonWebSocketComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorizonWebSocketComponent_NoRegister()
{
	return UHorizonWebSocketComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorizonWebSocketComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Horizon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon WebSocket Component\n * Actor component that provides WebSocket functionality to any Actor\n * Features auto-connection, event delegation, and easy Blueprint integration\n */" },
#endif
		{ "IncludePath", "HorizonWebsocketComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon WebSocket Component\nActor component that provides WebSocket functionality to any Actor\nFeatures auto-connection, event delegation, and easy Blueprint integration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Auto Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectURL_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Auto Connection" },
		{ "EditCondition", "bAutoConnect" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectProtocol_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Auto Connection" },
		{ "EditCondition", "bAutoConnect" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectDelay_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Auto Connection" },
		{ "EditCondition", "bAutoConnect" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebSocket_MetaData[] = {
		{ "Category", "Horizon|WebSocket" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WebSocket Client Instance\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WebSocket Client Instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event delegates (forwarded from the WebSocket client)\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event delegates (forwarded from the WebSocket client)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRawMessage_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageSent_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebsocketComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AutoConnectURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AutoConnectProtocol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoConnectDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WebSocket;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_Connect, "Connect" }, // 777254389
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_Disconnect, "Disconnect" }, // 646629417
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_ForceReconnect, "ForceReconnect" }, // 570132507
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetAutoReconnect, "GetAutoReconnect" }, // 1580581949
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetConnectionState, "GetConnectionState" }, // 3881530035
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetCurrentReconnectAttempts, "GetCurrentReconnectAttempts" }, // 1817330270
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatEnabled, "GetHeartbeatEnabled" }, // 2195778385
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetHeartbeatInterval, "GetHeartbeatInterval" }, // 3962960358
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetMaxReconnectAttempts, "GetMaxReconnectAttempts" }, // 2688990231
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerProtocol, "GetServerProtocol" }, // 2062620514
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetServerURL, "GetServerURL" }, // 2220572181
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_GetVerboseLogging, "GetVerboseLogging" }, // 3023109281
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketClosed, "HandleWebSocketClosed" }, // 1084276067
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnected, "HandleWebSocketConnected" }, // 3695041200
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketConnectionError, "HandleWebSocketConnectionError" }, // 2351755152
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessage, "HandleWebSocketMessage" }, // 3344663959
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketMessageSent, "HandleWebSocketMessageSent" }, // 1018621758
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_HandleWebSocketRawMessage, "HandleWebSocketRawMessage" }, // 718339909
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_IsConnected, "IsConnected" }, // 2883558385
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SendBinaryMessage, "SendBinaryMessage" }, // 3311149830
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SendHeartbeat, "SendHeartbeat" }, // 1731422407
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SendMessage, "SendMessage" }, // 330354649
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SetAutoReconnect, "SetAutoReconnect" }, // 857461167
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatEnabled, "SetHeartbeatEnabled" }, // 1416621530
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 3478646151
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SetMaxReconnectAttempts, "SetMaxReconnectAttempts" }, // 3914419959
		{ &Z_Construct_UFunction_UHorizonWebSocketComponent_SetVerboseLogging, "SetVerboseLogging" }, // 2670915201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonWebSocketComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
{
	((UHorizonWebSocketComponent*)Obj)->bAutoConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonWebSocketComponent), &Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoConnect_MetaData), NewProp_bAutoConnect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectURL = { "AutoConnectURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, AutoConnectURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectURL_MetaData), NewProp_AutoConnectURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectProtocol = { "AutoConnectProtocol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, AutoConnectProtocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectProtocol_MetaData), NewProp_AutoConnectProtocol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectDelay = { "AutoConnectDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, AutoConnectDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectDelay_MetaData), NewProp_AutoConnectDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_WebSocket = { "WebSocket", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, WebSocket), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebSocket_MetaData), NewProp_WebSocket_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnConnected), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnected_MetaData), NewProp_OnConnected_MetaData) }; // 1233042676
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnConnectionError), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionError_MetaData), NewProp_OnConnectionError_MetaData) }; // 120365563
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnClosed), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 831514461
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnMessage), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessage_MetaData), NewProp_OnMessage_MetaData) }; // 984566582
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnRawMessage = { "OnRawMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnRawMessage), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRawMessage_MetaData), NewProp_OnRawMessage_MetaData) }; // 4113811939
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnMessageSent = { "OnMessageSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketComponent, OnMessageSent), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageSent_MetaData), NewProp_OnMessageSent_MetaData) }; // 794798860
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonWebSocketComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_bAutoConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectProtocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_AutoConnectDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_WebSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnRawMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketComponent_Statics::NewProp_OnMessageSent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHorizonWebSocketComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizonWebSocketComponent_Statics::ClassParams = {
	&UHorizonWebSocketComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHorizonWebSocketComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizonWebSocketComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizonWebSocketComponent()
{
	if (!Z_Registration_Info_UClass_UHorizonWebSocketComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizonWebSocketComponent.OuterSingleton, Z_Construct_UClass_UHorizonWebSocketComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizonWebSocketComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonWebSocketComponent);
UHorizonWebSocketComponent::~UHorizonWebSocketComponent() {}
// ********** End Class UHorizonWebSocketComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h__Script_Horizon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizonWebSocketComponent, UHorizonWebSocketComponent::StaticClass, TEXT("UHorizonWebSocketComponent"), &Z_Registration_Info_UClass_UHorizonWebSocketComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizonWebSocketComponent), 231966327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h__Script_Horizon_2414758390(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebsocketComponent_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
