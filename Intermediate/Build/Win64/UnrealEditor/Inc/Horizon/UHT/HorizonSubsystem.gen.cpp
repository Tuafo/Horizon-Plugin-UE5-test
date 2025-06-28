// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
HORIZON_API UClass* Z_Construct_UClass_UHorizonSubsystem();
HORIZON_API UClass* Z_Construct_UClass_UHorizonSubsystem_NoRegister();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature();
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
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
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
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
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
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
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

// ********** Begin Class UHorizonSubsystem Function BroadcastBinaryMessage ************************
struct Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics
{
	struct HorizonSubsystem_eventBroadcastBinaryMessage_Parms
	{
		TArray<uint8> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Broadcast a binary message to all connected clients\n\x09 * @param Data The binary data to broadcast\n\x09 * @return Number of clients the message was sent to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast a binary message to all connected clients\n@param Data The binary data to broadcast\n@return Number of clients the message was sent to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventBroadcastBinaryMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventBroadcastBinaryMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "BroadcastBinaryMessage", Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::HorizonSubsystem_eventBroadcastBinaryMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::HorizonSubsystem_eventBroadcastBinaryMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execBroadcastBinaryMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->BroadcastBinaryMessage(Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function BroadcastBinaryMessage **************************

// ********** Begin Class UHorizonSubsystem Function BroadcastMessage ******************************
struct Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics
{
	struct HorizonSubsystem_eventBroadcastMessage_Parms
	{
		FString Message;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Broadcast a message to all connected clients\n\x09 * @param Message The message to broadcast\n\x09 * @return Number of clients the message was sent to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast a message to all connected clients\n@param Message The message to broadcast\n@return Number of clients the message was sent to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventBroadcastMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventBroadcastMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "BroadcastMessage", Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::HorizonSubsystem_eventBroadcastMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::HorizonSubsystem_eventBroadcastMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execBroadcastMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->BroadcastMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function BroadcastMessage ********************************

// ********** Begin Class UHorizonSubsystem Function CleanupInvalidClients *************************
struct Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clean up invalid client references\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clean up invalid client references" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "CleanupInvalidClients", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execCleanupInvalidClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupInvalidClients();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function CleanupInvalidClients ***************************

// ********** Begin Class UHorizonSubsystem Function CreateAndConnectWebSocket *********************
struct Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics
{
	struct HorizonSubsystem_eventCreateAndConnectWebSocket_Parms
	{
		FString URL;
		FString Protocol;
		UHorizonWebSocketClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and immediately connect a WebSocket client\n\x09 * @param URL The WebSocket server URL\n\x09 * @param Protocol The WebSocket protocol (optional)\n\x09 * @return New connected WebSocket client instance, or nullptr if connection failed\n\x09 */" },
#endif
		{ "CPP_Default_Protocol", "" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and immediately connect a WebSocket client\n@param URL The WebSocket server URL\n@param Protocol The WebSocket protocol (optional)\n@return New connected WebSocket client instance, or nullptr if connection failed" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventCreateAndConnectWebSocket_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventCreateAndConnectWebSocket_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventCreateAndConnectWebSocket_Parms, ReturnValue), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "CreateAndConnectWebSocket", Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::HorizonSubsystem_eventCreateAndConnectWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::HorizonSubsystem_eventCreateAndConnectWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execCreateAndConnectWebSocket)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonWebSocketClient**)Z_Param__Result=P_THIS->CreateAndConnectWebSocket(Z_Param_URL,Z_Param_Protocol);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function CreateAndConnectWebSocket ***********************

// ********** Begin Class UHorizonSubsystem Function CreateWebSocket *******************************
struct Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics
{
	struct HorizonSubsystem_eventCreateWebSocket_Parms
	{
		UHorizonWebSocketClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new WebSocket client managed by this subsystem\n\x09 * @return New WebSocket client instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new WebSocket client managed by this subsystem\n@return New WebSocket client instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventCreateWebSocket_Parms, ReturnValue), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "CreateWebSocket", Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::HorizonSubsystem_eventCreateWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::HorizonSubsystem_eventCreateWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execCreateWebSocket)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonWebSocketClient**)Z_Param__Result=P_THIS->CreateWebSocket();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function CreateWebSocket *********************************

// ********** Begin Class UHorizonSubsystem Function DisconnectAllClients **************************
struct Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disconnect all managed WebSocket clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect all managed WebSocket clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "DisconnectAllClients", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execDisconnectAllClients)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectAllClients();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function DisconnectAllClients ****************************

// ********** Begin Class UHorizonSubsystem Function FindWebSocketsByURL ***************************
struct Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics
{
	struct HorizonSubsystem_eventFindWebSocketsByURL_Parms
	{
		FString URL;
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find WebSocket clients by server URL\n\x09 * @param URL The server URL to search for\n\x09 * @return Array of clients connected to the specified URL\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find WebSocket clients by server URL\n@param URL The server URL to search for\n@return Array of clients connected to the specified URL" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventFindWebSocketsByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventFindWebSocketsByURL_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "FindWebSocketsByURL", Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::HorizonSubsystem_eventFindWebSocketsByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::HorizonSubsystem_eventFindWebSocketsByURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execFindWebSocketsByURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=P_THIS->FindWebSocketsByURL(Z_Param_URL);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function FindWebSocketsByURL *****************************

// ********** Begin Class UHorizonSubsystem Function GetActiveClientCount **************************
struct Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics
{
	struct HorizonSubsystem_eventGetActiveClientCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of active WebSocket clients\n\x09 * @return Number of managed clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of active WebSocket clients\n@return Number of managed clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetActiveClientCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetActiveClientCount", Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::HorizonSubsystem_eventGetActiveClientCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::HorizonSubsystem_eventGetActiveClientCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetActiveClientCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveClientCount();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetActiveClientCount ****************************

// ********** Begin Class UHorizonSubsystem Function GetAllWebSockets ******************************
struct Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics
{
	struct HorizonSubsystem_eventGetAllWebSockets_Parms
	{
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all active WebSocket clients\n\x09 * @return Array of all managed WebSocket clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all active WebSocket clients\n@return Array of all managed WebSocket clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetAllWebSockets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetAllWebSockets", Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::HorizonSubsystem_eventGetAllWebSockets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::HorizonSubsystem_eventGetAllWebSockets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetAllWebSockets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=P_THIS->GetAllWebSockets();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetAllWebSockets ********************************

// ********** Begin Class UHorizonSubsystem Function GetConnectedClientCount ***********************
struct Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics
{
	struct HorizonSubsystem_eventGetConnectedClientCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of connected WebSocket clients\n\x09 * @return Number of connected clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of connected WebSocket clients\n@return Number of connected clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetConnectedClientCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetConnectedClientCount", Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::HorizonSubsystem_eventGetConnectedClientCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::HorizonSubsystem_eventGetConnectedClientCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetConnectedClientCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConnectedClientCount();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetConnectedClientCount *************************

// ********** Begin Class UHorizonSubsystem Function GetConnectedWebSockets ************************
struct Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics
{
	struct HorizonSubsystem_eventGetConnectedWebSockets_Parms
	{
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all connected WebSocket clients\n\x09 * @return Array of all connected WebSocket clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all connected WebSocket clients\n@return Array of all connected WebSocket clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetConnectedWebSockets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetConnectedWebSockets", Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::HorizonSubsystem_eventGetConnectedWebSockets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::HorizonSubsystem_eventGetConnectedWebSockets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetConnectedWebSockets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=P_THIS->GetConnectedWebSockets();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetConnectedWebSockets **************************

// ********** Begin Class UHorizonSubsystem Function GetConnectionSuccessRate **********************
struct Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics
{
	struct HorizonSubsystem_eventGetConnectionSuccessRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Statistics" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetConnectionSuccessRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetConnectionSuccessRate", Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::HorizonSubsystem_eventGetConnectionSuccessRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::HorizonSubsystem_eventGetConnectionSuccessRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetConnectionSuccessRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetConnectionSuccessRate();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetConnectionSuccessRate ************************

// ********** Begin Class UHorizonSubsystem Function GetHorizonStatus ******************************
struct Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics
{
	struct HorizonSubsystem_eventGetHorizonStatus_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Horizon system status\n\x09 * @return Status information as a formatted string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Horizon system status\n@return Status information as a formatted string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetHorizonStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetHorizonStatus", Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::HorizonSubsystem_eventGetHorizonStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::HorizonSubsystem_eventGetHorizonStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetHorizonStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetHorizonStatus();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetHorizonStatus ********************************

// ********** Begin Class UHorizonSubsystem Function GetTotalClientsCreated ************************
struct Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics
{
	struct HorizonSubsystem_eventGetTotalClientsCreated_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Statistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Statistics getters\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Statistics getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetTotalClientsCreated_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetTotalClientsCreated", Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::HorizonSubsystem_eventGetTotalClientsCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::HorizonSubsystem_eventGetTotalClientsCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetTotalClientsCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalClientsCreated();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetTotalClientsCreated **************************

// ********** Begin Class UHorizonSubsystem Function GetTotalConnectionAttempts ********************
struct Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics
{
	struct HorizonSubsystem_eventGetTotalConnectionAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Statistics" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetTotalConnectionAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetTotalConnectionAttempts", Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::HorizonSubsystem_eventGetTotalConnectionAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::HorizonSubsystem_eventGetTotalConnectionAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetTotalConnectionAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalConnectionAttempts();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetTotalConnectionAttempts **********************

// ********** Begin Class UHorizonSubsystem Function GetTotalSuccessfulConnections *****************
struct Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics
{
	struct HorizonSubsystem_eventGetTotalSuccessfulConnections_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Statistics" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventGetTotalSuccessfulConnections_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "GetTotalSuccessfulConnections", Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::HorizonSubsystem_eventGetTotalSuccessfulConnections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::HorizonSubsystem_eventGetTotalSuccessfulConnections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execGetTotalSuccessfulConnections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTotalSuccessfulConnections();
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function GetTotalSuccessfulConnections *******************

// ********** Begin Class UHorizonSubsystem Function HandleClientClosed ****************************
struct Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics
{
	struct HorizonSubsystem_eventHandleClientClosed_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventHandleClientClosed_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventHandleClientClosed_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_bWasClean_SetBit(void* Obj)
{
	((HorizonSubsystem_eventHandleClientClosed_Parms*)Obj)->bWasClean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSubsystem_eventHandleClientClosed_Parms), &Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_StatusCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::NewProp_bWasClean,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "HandleClientClosed", Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::HorizonSubsystem_eventHandleClientClosed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::HorizonSubsystem_eventHandleClientClosed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execHandleClientClosed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StatusCode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_GET_UBOOL(Z_Param_bWasClean);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClientClosed(Z_Param_StatusCode,Z_Param_Reason,Z_Param_bWasClean);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function HandleClientClosed ******************************

// ********** Begin Class UHorizonSubsystem Function HandleClientConnected *************************
struct Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics
{
	struct HorizonSubsystem_eventHandleClientConnected_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers for global monitoring\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers for global monitoring" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((HorizonSubsystem_eventHandleClientConnected_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSubsystem_eventHandleClientConnected_Parms), &Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "HandleClientConnected", Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::HorizonSubsystem_eventHandleClientConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::HorizonSubsystem_eventHandleClientConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execHandleClientConnected)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClientConnected(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function HandleClientConnected ***************************

// ********** Begin Class UHorizonSubsystem Function HandleClientConnectionError *******************
struct Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics
{
	struct HorizonSubsystem_eventHandleClientConnectionError_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventHandleClientConnectionError_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "HandleClientConnectionError", Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::HorizonSubsystem_eventHandleClientConnectionError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::HorizonSubsystem_eventHandleClientConnectionError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execHandleClientConnectionError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClientConnectionError(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function HandleClientConnectionError *********************

// ********** Begin Class UHorizonSubsystem Function RemoveWebSocket *******************************
struct Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics
{
	struct HorizonSubsystem_eventRemoveWebSocket_Parms
	{
		UHorizonWebSocketClient* Client;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a WebSocket client from management and clean it up\n\x09 * @param Client The client to remove\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a WebSocket client from management and clean it up\n@param Client The client to remove" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventRemoveWebSocket_Parms, Client), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::NewProp_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "RemoveWebSocket", Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::HorizonSubsystem_eventRemoveWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::HorizonSubsystem_eventRemoveWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execRemoveWebSocket)
{
	P_GET_OBJECT(UHorizonWebSocketClient,Z_Param_Client);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWebSocket(Z_Param_Client);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function RemoveWebSocket *********************************

// ********** Begin Class UHorizonSubsystem Function SetGlobalDebugMode ****************************
struct Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics
{
	struct HorizonSubsystem_eventSetGlobalDebugMode_Parms
	{
		bool bEnableDebug;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable or disable debug mode for all clients\n\x09 * @param bEnableDebug Whether to enable debug mode\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable debug mode for all clients\n@param bEnableDebug Whether to enable debug mode" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((HorizonSubsystem_eventSetGlobalDebugMode_Parms*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSubsystem_eventSetGlobalDebugMode_Parms), &Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::NewProp_bEnableDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "SetGlobalDebugMode", Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::HorizonSubsystem_eventSetGlobalDebugMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::HorizonSubsystem_eventSetGlobalDebugMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execSetGlobalDebugMode)
{
	P_GET_UBOOL(Z_Param_bEnableDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalDebugMode(Z_Param_bEnableDebug);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function SetGlobalDebugMode ******************************

// ********** Begin Class UHorizonSubsystem Function SetGlobalHeartbeatSettings ********************
struct Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics
{
	struct HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms
	{
		bool bEnable;
		float Interval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Subsystem|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set global heartbeat settings for all future clients\n\x09 * @param bEnable Whether to enable heartbeat\n\x09 * @param Interval Heartbeat interval in seconds\n\x09 */" },
#endif
		{ "CPP_Default_Interval", "30.000000" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set global heartbeat settings for all future clients\n@param bEnable Whether to enable heartbeat\n@param Interval Heartbeat interval in seconds" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms), &Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms, Interval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::NewProp_Interval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonSubsystem, nullptr, "SetGlobalHeartbeatSettings", Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::HorizonSubsystem_eventSetGlobalHeartbeatSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonSubsystem::execSetGlobalHeartbeatSettings)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Interval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalHeartbeatSettings(Z_Param_bEnable,Z_Param_Interval);
	P_NATIVE_END;
}
// ********** End Class UHorizonSubsystem Function SetGlobalHeartbeatSettings **********************

// ********** Begin Class UHorizonSubsystem ********************************************************
void UHorizonSubsystem::StaticRegisterNativesUHorizonSubsystem()
{
	UClass* Class = UHorizonSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastBinaryMessage", &UHorizonSubsystem::execBroadcastBinaryMessage },
		{ "BroadcastMessage", &UHorizonSubsystem::execBroadcastMessage },
		{ "CleanupInvalidClients", &UHorizonSubsystem::execCleanupInvalidClients },
		{ "CreateAndConnectWebSocket", &UHorizonSubsystem::execCreateAndConnectWebSocket },
		{ "CreateWebSocket", &UHorizonSubsystem::execCreateWebSocket },
		{ "DisconnectAllClients", &UHorizonSubsystem::execDisconnectAllClients },
		{ "FindWebSocketsByURL", &UHorizonSubsystem::execFindWebSocketsByURL },
		{ "GetActiveClientCount", &UHorizonSubsystem::execGetActiveClientCount },
		{ "GetAllWebSockets", &UHorizonSubsystem::execGetAllWebSockets },
		{ "GetConnectedClientCount", &UHorizonSubsystem::execGetConnectedClientCount },
		{ "GetConnectedWebSockets", &UHorizonSubsystem::execGetConnectedWebSockets },
		{ "GetConnectionSuccessRate", &UHorizonSubsystem::execGetConnectionSuccessRate },
		{ "GetHorizonStatus", &UHorizonSubsystem::execGetHorizonStatus },
		{ "GetTotalClientsCreated", &UHorizonSubsystem::execGetTotalClientsCreated },
		{ "GetTotalConnectionAttempts", &UHorizonSubsystem::execGetTotalConnectionAttempts },
		{ "GetTotalSuccessfulConnections", &UHorizonSubsystem::execGetTotalSuccessfulConnections },
		{ "HandleClientClosed", &UHorizonSubsystem::execHandleClientClosed },
		{ "HandleClientConnected", &UHorizonSubsystem::execHandleClientConnected },
		{ "HandleClientConnectionError", &UHorizonSubsystem::execHandleClientConnectionError },
		{ "RemoveWebSocket", &UHorizonSubsystem::execRemoveWebSocket },
		{ "SetGlobalDebugMode", &UHorizonSubsystem::execSetGlobalDebugMode },
		{ "SetGlobalHeartbeatSettings", &UHorizonSubsystem::execSetGlobalHeartbeatSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHorizonSubsystem;
UClass* UHorizonSubsystem::GetPrivateStaticClass()
{
	using TClass = UHorizonSubsystem;
	if (!Z_Registration_Info_UClass_UHorizonSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonSubsystem"),
			Z_Registration_Info_UClass_UHorizonSubsystem.InnerSingleton,
			StaticRegisterNativesUHorizonSubsystem,
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
	return Z_Registration_Info_UClass_UHorizonSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorizonSubsystem_NoRegister()
{
	return UHorizonSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorizonSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon Subsystem\n * Provides centralized management of Horizon WebSocket clients across the game instance\n * Handles automatic cleanup and provides global access to Horizon functionality\n */" },
#endif
		{ "IncludePath", "HorizonSubsystem.h" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon Subsystem\nProvides centralized management of Horizon WebSocket clients across the game instance\nHandles automatic cleanup and provides global access to Horizon functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyClientConnected_MetaData[] = {
		{ "Category", "Horizon|Subsystem Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events for monitoring all WebSocket activity\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events for monitoring all WebSocket activity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyClientConnectionError_MetaData[] = {
		{ "Category", "Horizon|Subsystem Events" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyClientClosed_MetaData[] = {
		{ "Category", "Horizon|Subsystem Events" },
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedClients_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All managed WebSocket clients\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All managed WebSocket clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyClientConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyClientConnectionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyClientClosed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedClients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedClients;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonSubsystem_BroadcastBinaryMessage, "BroadcastBinaryMessage" }, // 854485131
		{ &Z_Construct_UFunction_UHorizonSubsystem_BroadcastMessage, "BroadcastMessage" }, // 3831180231
		{ &Z_Construct_UFunction_UHorizonSubsystem_CleanupInvalidClients, "CleanupInvalidClients" }, // 2115296355
		{ &Z_Construct_UFunction_UHorizonSubsystem_CreateAndConnectWebSocket, "CreateAndConnectWebSocket" }, // 2370281913
		{ &Z_Construct_UFunction_UHorizonSubsystem_CreateWebSocket, "CreateWebSocket" }, // 1799508126
		{ &Z_Construct_UFunction_UHorizonSubsystem_DisconnectAllClients, "DisconnectAllClients" }, // 170433040
		{ &Z_Construct_UFunction_UHorizonSubsystem_FindWebSocketsByURL, "FindWebSocketsByURL" }, // 2298416488
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetActiveClientCount, "GetActiveClientCount" }, // 206935611
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetAllWebSockets, "GetAllWebSockets" }, // 3441872000
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetConnectedClientCount, "GetConnectedClientCount" }, // 1836247526
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetConnectedWebSockets, "GetConnectedWebSockets" }, // 3432229908
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetConnectionSuccessRate, "GetConnectionSuccessRate" }, // 1114613051
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetHorizonStatus, "GetHorizonStatus" }, // 1653201916
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetTotalClientsCreated, "GetTotalClientsCreated" }, // 982524822
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetTotalConnectionAttempts, "GetTotalConnectionAttempts" }, // 2460585229
		{ &Z_Construct_UFunction_UHorizonSubsystem_GetTotalSuccessfulConnections, "GetTotalSuccessfulConnections" }, // 2007082478
		{ &Z_Construct_UFunction_UHorizonSubsystem_HandleClientClosed, "HandleClientClosed" }, // 3404892271
		{ &Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnected, "HandleClientConnected" }, // 3856099149
		{ &Z_Construct_UFunction_UHorizonSubsystem_HandleClientConnectionError, "HandleClientConnectionError" }, // 3772346646
		{ &Z_Construct_UFunction_UHorizonSubsystem_RemoveWebSocket, "RemoveWebSocket" }, // 2020121061
		{ &Z_Construct_UFunction_UHorizonSubsystem_SetGlobalDebugMode, "SetGlobalDebugMode" }, // 1339769804
		{ &Z_Construct_UFunction_UHorizonSubsystem_SetGlobalHeartbeatSettings, "SetGlobalHeartbeatSettings" }, // 4209034124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientConnected = { "OnAnyClientConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSubsystem, OnAnyClientConnected), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyClientConnected_MetaData), NewProp_OnAnyClientConnected_MetaData) }; // 1974068610
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientConnectionError = { "OnAnyClientConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSubsystem, OnAnyClientConnectionError), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyClientConnectionError_MetaData), NewProp_OnAnyClientConnectionError_MetaData) }; // 1851222800
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientClosed = { "OnAnyClientClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSubsystem, OnAnyClientClosed), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyClientClosed_MetaData), NewProp_OnAnyClientClosed_MetaData) }; // 389888001
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_ManagedClients_Inner = { "ManagedClients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_ManagedClients = { "ManagedClients", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonSubsystem, ManagedClients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedClients_MetaData), NewProp_ManagedClients_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_OnAnyClientClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_ManagedClients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonSubsystem_Statics::NewProp_ManagedClients,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHorizonSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizonSubsystem_Statics::ClassParams = {
	&UHorizonSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHorizonSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizonSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizonSubsystem()
{
	if (!Z_Registration_Info_UClass_UHorizonSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizonSubsystem.OuterSingleton, Z_Construct_UClass_UHorizonSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizonSubsystem.OuterSingleton;
}
UHorizonSubsystem::UHorizonSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonSubsystem);
UHorizonSubsystem::~UHorizonSubsystem() {}
// ********** End Class UHorizonSubsystem **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h__Script_Horizon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizonSubsystem, UHorizonSubsystem::StaticClass, TEXT("UHorizonSubsystem"), &Z_Registration_Info_UClass_UHorizonSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizonSubsystem), 3161784334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h__Script_Horizon_4168629153(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonSubsystem_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
