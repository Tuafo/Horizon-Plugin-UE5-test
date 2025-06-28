// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonWebSocketClient.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonWebSocketClient() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister();
HORIZON_API UEnum* Z_Construct_UEnum_Horizon_EHorizonWebSocketState();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature();
HORIZON_API UFunction* Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Horizon();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHorizonWebSocketState ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHorizonWebSocketState;
static UEnum* EHorizonWebSocketState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHorizonWebSocketState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHorizonWebSocketState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Horizon_EHorizonWebSocketState, (UObject*)Z_Construct_UPackage__Script_Horizon(), TEXT("EHorizonWebSocketState"));
	}
	return Z_Registration_Info_UEnum_EHorizonWebSocketState.OuterSingleton;
}
template<> HORIZON_API UEnum* StaticEnum<EHorizonWebSocketState>()
{
	return EHorizonWebSocketState_StaticEnum();
}
struct Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closing.DisplayName", "Closing" },
		{ "Closing.Name", "EHorizonWebSocketState::Closing" },
		{ "Connected.DisplayName", "Connected" },
		{ "Connected.Name", "EHorizonWebSocketState::Connected" },
		{ "Connecting.DisplayName", "Connecting" },
		{ "Connecting.Name", "EHorizonWebSocketState::Connecting" },
		{ "Disconnected.DisplayName", "Disconnected" },
		{ "Disconnected.Name", "EHorizonWebSocketState::Disconnected" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EHorizonWebSocketState::Failed" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
		{ "Reconnecting.DisplayName", "Reconnecting" },
		{ "Reconnecting.Name", "EHorizonWebSocketState::Reconnecting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHorizonWebSocketState::Disconnected", (int64)EHorizonWebSocketState::Disconnected },
		{ "EHorizonWebSocketState::Connecting", (int64)EHorizonWebSocketState::Connecting },
		{ "EHorizonWebSocketState::Connected", (int64)EHorizonWebSocketState::Connected },
		{ "EHorizonWebSocketState::Reconnecting", (int64)EHorizonWebSocketState::Reconnecting },
		{ "EHorizonWebSocketState::Failed", (int64)EHorizonWebSocketState::Failed },
		{ "EHorizonWebSocketState::Closing", (int64)EHorizonWebSocketState::Closing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Horizon,
	nullptr,
	"EHorizonWebSocketState",
	"EHorizonWebSocketState",
	Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Horizon_EHorizonWebSocketState()
{
	if (!Z_Registration_Info_UEnum_EHorizonWebSocketState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHorizonWebSocketState.InnerSingleton, Z_Construct_UEnum_Horizon_EHorizonWebSocketState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHorizonWebSocketState.InnerSingleton;
}
// ********** End Enum EHorizonWebSocketState ******************************************************

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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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

// ********** Begin Class UHorizonWebSocketClient Function Connect *********************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics
{
	struct HorizonWebSocketClient_eventConnect_Parms
	{
		FString URL;
		FString Protocol;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public API\n" },
#endif
		{ "CPP_Default_Protocol", "" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public API" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventConnect_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketClient_eventConnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketClient_eventConnect_Parms), &Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "Connect", Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::HorizonWebSocketClient_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::HorizonWebSocketClient_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execConnect)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param_URL,Z_Param_Protocol);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function Connect ***********************************

// ********** Begin Class UHorizonWebSocketClient Function Disconnect ******************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "Disconnect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function Disconnect ********************************

// ********** Begin Class UHorizonWebSocketClient Function ForceReconnect **************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Connection" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "ForceReconnect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execForceReconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceReconnect();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function ForceReconnect ****************************

// ********** Begin Class UHorizonWebSocketClient Function GetConnectionState **********************
struct Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics
{
	struct HorizonWebSocketClient_eventGetConnectionState_Parms
	{
		EHorizonWebSocketState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventGetConnectionState_Parms, ReturnValue), Z_Construct_UEnum_Horizon_EHorizonWebSocketState, METADATA_PARAMS(0, nullptr) }; // 1121817835
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "GetConnectionState", Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::HorizonWebSocketClient_eventGetConnectionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::HorizonWebSocketClient_eventGetConnectionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execGetConnectionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EHorizonWebSocketState*)Z_Param__Result=P_THIS->GetConnectionState();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function GetConnectionState ************************

// ********** Begin Class UHorizonWebSocketClient Function GetCurrentReconnectAttempts *************
struct Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics
{
	struct HorizonWebSocketClient_eventGetCurrentReconnectAttempts_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventGetCurrentReconnectAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "GetCurrentReconnectAttempts", Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::HorizonWebSocketClient_eventGetCurrentReconnectAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::HorizonWebSocketClient_eventGetCurrentReconnectAttempts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execGetCurrentReconnectAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentReconnectAttempts();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function GetCurrentReconnectAttempts ***************

// ********** Begin Class UHorizonWebSocketClient Function GetServerProtocol ***********************
struct Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics
{
	struct HorizonWebSocketClient_eventGetServerProtocol_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventGetServerProtocol_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "GetServerProtocol", Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::HorizonWebSocketClient_eventGetServerProtocol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::HorizonWebSocketClient_eventGetServerProtocol_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execGetServerProtocol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerProtocol();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function GetServerProtocol *************************

// ********** Begin Class UHorizonWebSocketClient Function GetServerURL ****************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics
{
	struct HorizonWebSocketClient_eventGetServerURL_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventGetServerURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "GetServerURL", Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::HorizonWebSocketClient_eventGetServerURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::HorizonWebSocketClient_eventGetServerURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execGetServerURL)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerURL();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function GetServerURL ******************************

// ********** Begin Class UHorizonWebSocketClient Function IsConnected *****************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics
{
	struct HorizonWebSocketClient_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Status" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketClient_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketClient_eventIsConnected_Parms), &Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "IsConnected", Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::HorizonWebSocketClient_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::HorizonWebSocketClient_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function IsConnected *******************************

// ********** Begin Class UHorizonWebSocketClient Function SendBinaryMessage ***********************
struct Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics
{
	struct HorizonWebSocketClient_eventSendBinaryMessage_Parms
	{
		TArray<uint8> Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Messaging" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventSendBinaryMessage_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketClient_eventSendBinaryMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketClient_eventSendBinaryMessage_Parms), &Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "SendBinaryMessage", Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::HorizonWebSocketClient_eventSendBinaryMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::HorizonWebSocketClient_eventSendBinaryMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execSendBinaryMessage)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendBinaryMessage(Z_Param_Out_Data);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function SendBinaryMessage *************************

// ********** Begin Class UHorizonWebSocketClient Function SendHeartbeat ***************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Heartbeat" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "SendHeartbeat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execSendHeartbeat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendHeartbeat();
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function SendHeartbeat *****************************

// ********** Begin Class UHorizonWebSocketClient Function SendMessage *****************************
struct Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics
{
	struct HorizonWebSocketClient_eventSendMessage_Parms
	{
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Messaging" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonWebSocketClient_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
void Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonWebSocketClient_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonWebSocketClient_eventSendMessage_Parms), &Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonWebSocketClient, nullptr, "SendMessage", Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::HorizonWebSocketClient_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::HorizonWebSocketClient_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonWebSocketClient::execSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonWebSocketClient Function SendMessage *******************************

// ********** Begin Class UHorizonWebSocketClient **************************************************
void UHorizonWebSocketClient::StaticRegisterNativesUHorizonWebSocketClient()
{
	UClass* Class = UHorizonWebSocketClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UHorizonWebSocketClient::execConnect },
		{ "Disconnect", &UHorizonWebSocketClient::execDisconnect },
		{ "ForceReconnect", &UHorizonWebSocketClient::execForceReconnect },
		{ "GetConnectionState", &UHorizonWebSocketClient::execGetConnectionState },
		{ "GetCurrentReconnectAttempts", &UHorizonWebSocketClient::execGetCurrentReconnectAttempts },
		{ "GetServerProtocol", &UHorizonWebSocketClient::execGetServerProtocol },
		{ "GetServerURL", &UHorizonWebSocketClient::execGetServerURL },
		{ "IsConnected", &UHorizonWebSocketClient::execIsConnected },
		{ "SendBinaryMessage", &UHorizonWebSocketClient::execSendBinaryMessage },
		{ "SendHeartbeat", &UHorizonWebSocketClient::execSendHeartbeat },
		{ "SendMessage", &UHorizonWebSocketClient::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHorizonWebSocketClient;
UClass* UHorizonWebSocketClient::GetPrivateStaticClass()
{
	using TClass = UHorizonWebSocketClient;
	if (!Z_Registration_Info_UClass_UHorizonWebSocketClient.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonWebSocketClient"),
			Z_Registration_Info_UClass_UHorizonWebSocketClient.InnerSingleton,
			StaticRegisterNativesUHorizonWebSocketClient,
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
	return Z_Registration_Info_UClass_UHorizonWebSocketClient.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister()
{
	return UHorizonWebSocketClient::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorizonWebSocketClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Horizon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon WebSocket Client - Standalone Implementation\n * A robust WebSocket client with automatic reconnection, heartbeat monitoring, and comprehensive event handling\n * No external dependencies - uses only UE5 core networking\n */" },
#endif
		{ "IncludePath", "HorizonWebSocketClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon WebSocket Client - Standalone Implementation\nA robust WebSocket client with automatic reconnection, heartbeat monitoring, and comprehensive event handling\nNo external dependencies - uses only UE5 core networking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRawMessage_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageSent_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Events" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeartbeat_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration properties\n" },
#endif
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeartbeatIntervalSeconds_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ClampMax", "300" },
		{ "ClampMin", "5" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReconnectAttempts_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReconnectDelaySeconds_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeartbeatMessage_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReconnect_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Configuration" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseLogging_MetaData[] = {
		{ "Category", "Horizon|WebSocket|Debug" },
		{ "ModuleRelativePath", "Public/HorizonWebSocketClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSent;
	static void NewProp_bEnableHeartbeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeartbeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartbeatIntervalSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReconnectAttempts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReconnectDelaySeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HeartbeatMessage;
	static void NewProp_bAutoReconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnect;
	static void NewProp_bVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_Connect, "Connect" }, // 3163251963
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_Disconnect, "Disconnect" }, // 2290271013
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_ForceReconnect, "ForceReconnect" }, // 821959069
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_GetConnectionState, "GetConnectionState" }, // 392504603
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_GetCurrentReconnectAttempts, "GetCurrentReconnectAttempts" }, // 1299768468
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_GetServerProtocol, "GetServerProtocol" }, // 2284085558
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_GetServerURL, "GetServerURL" }, // 1768409734
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_IsConnected, "IsConnected" }, // 1799334743
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_SendBinaryMessage, "SendBinaryMessage" }, // 2421249831
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_SendHeartbeat, "SendHeartbeat" }, // 396007435
		{ &Z_Construct_UFunction_UHorizonWebSocketClient_SendMessage, "SendMessage" }, // 2656297597
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonWebSocketClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnConnected), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnected_MetaData), NewProp_OnConnected_MetaData) }; // 2271862890
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnConnectionError), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketConnectionError__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectionError_MetaData), NewProp_OnConnectionError_MetaData) }; // 49999319
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnClosed), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClosed_MetaData), NewProp_OnClosed_MetaData) }; // 385182957
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnMessage), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessage_MetaData), NewProp_OnMessage_MetaData) }; // 3195392125
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnRawMessage = { "OnRawMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnRawMessage), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketRawMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRawMessage_MetaData), NewProp_OnRawMessage_MetaData) }; // 2517274021
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnMessageSent = { "OnMessageSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, OnMessageSent), Z_Construct_UDelegateFunction_Horizon_OnHorizonWebSocketMessageSent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMessageSent_MetaData), NewProp_OnMessageSent_MetaData) }; // 3657527373
void Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bEnableHeartbeat_SetBit(void* Obj)
{
	((UHorizonWebSocketClient*)Obj)->bEnableHeartbeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bEnableHeartbeat = { "bEnableHeartbeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonWebSocketClient), &Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bEnableHeartbeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHeartbeat_MetaData), NewProp_bEnableHeartbeat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_HeartbeatIntervalSeconds = { "HeartbeatIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, HeartbeatIntervalSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeartbeatIntervalSeconds_MetaData), NewProp_HeartbeatIntervalSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_MaxReconnectAttempts = { "MaxReconnectAttempts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, MaxReconnectAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReconnectAttempts_MetaData), NewProp_MaxReconnectAttempts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_ReconnectDelaySeconds = { "ReconnectDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, ReconnectDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReconnectDelaySeconds_MetaData), NewProp_ReconnectDelaySeconds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_HeartbeatMessage = { "HeartbeatMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHorizonWebSocketClient, HeartbeatMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeartbeatMessage_MetaData), NewProp_HeartbeatMessage_MetaData) };
void Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bAutoReconnect_SetBit(void* Obj)
{
	((UHorizonWebSocketClient*)Obj)->bAutoReconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bAutoReconnect = { "bAutoReconnect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonWebSocketClient), &Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bAutoReconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReconnect_MetaData), NewProp_bAutoReconnect_MetaData) };
void Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bVerboseLogging_SetBit(void* Obj)
{
	((UHorizonWebSocketClient*)Obj)->bVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bVerboseLogging = { "bVerboseLogging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHorizonWebSocketClient), &Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bVerboseLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseLogging_MetaData), NewProp_bVerboseLogging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonWebSocketClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnConnectionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnRawMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_OnMessageSent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bEnableHeartbeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_HeartbeatIntervalSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_MaxReconnectAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_ReconnectDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_HeartbeatMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bAutoReconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonWebSocketClient_Statics::NewProp_bVerboseLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHorizonWebSocketClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizonWebSocketClient_Statics::ClassParams = {
	&UHorizonWebSocketClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHorizonWebSocketClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketClient_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWebSocketClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizonWebSocketClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizonWebSocketClient()
{
	if (!Z_Registration_Info_UClass_UHorizonWebSocketClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizonWebSocketClient.OuterSingleton, Z_Construct_UClass_UHorizonWebSocketClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizonWebSocketClient.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonWebSocketClient);
// ********** End Class UHorizonWebSocketClient ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHorizonWebSocketState_StaticEnum, TEXT("EHorizonWebSocketState"), &Z_Registration_Info_UEnum_EHorizonWebSocketState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1121817835U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizonWebSocketClient, UHorizonWebSocketClient::StaticClass, TEXT("UHorizonWebSocketClient"), &Z_Registration_Info_UClass_UHorizonWebSocketClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizonWebSocketClient), 2448341017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_1160140767(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonWebSocketClient_h__Script_Horizon_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
