// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorizonBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HORIZON_API UClass* Z_Construct_UClass_UHorizonBlueprintLibrary();
HORIZON_API UClass* Z_Construct_UClass_UHorizonBlueprintLibrary_NoRegister();
HORIZON_API UClass* Z_Construct_UClass_UHorizonWebSocketClient_NoRegister();
HORIZON_API UEnum* Z_Construct_UEnum_Horizon_EHorizonWebSocketState();
UPackage* Z_Construct_UPackage__Script_Horizon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHorizonBlueprintLibrary Function BroadcastToAllClients ******************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics
{
	struct HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms
	{
		const UObject* WorldContext;
		FString Message;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Quick Access" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Send a message to all connected WebSocket clients\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @param Message The message to broadcast\n\x09 * @return Number of clients the message was sent to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message to all connected WebSocket clients\n@param WorldContext World context for subsystem access\n@param Message The message to broadcast\n@return Number of clients the message was sent to" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "BroadcastToAllClients", Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::HorizonBlueprintLibrary_eventBroadcastToAllClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execBroadcastToAllClients)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UHorizonBlueprintLibrary::BroadcastToAllClients(Z_Param_WorldContext,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function BroadcastToAllClients ********************

// ********** Begin Class UHorizonBlueprintLibrary Function ByteArrayToString **********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics
{
	struct HorizonBlueprintLibrary_eventByteArrayToString_Parms
	{
		TArray<uint8> ByteData;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert byte array to string\n\x09 * @param ByteData The byte array to convert\n\x09 * @return String representation of the byte array\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert byte array to string\n@param ByteData The byte array to convert\n@return String representation of the byte array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventByteArrayToString_Parms, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventByteArrayToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "ByteArrayToString", Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::HorizonBlueprintLibrary_eventByteArrayToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::HorizonBlueprintLibrary_eventByteArrayToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execByteArrayToString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonBlueprintLibrary::ByteArrayToString(Z_Param_Out_ByteData);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function ByteArrayToString ************************

// ********** Begin Class UHorizonBlueprintLibrary Function ConfigureWebSocket *********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics
{
	struct HorizonBlueprintLibrary_eventConfigureWebSocket_Parms
	{
		UHorizonWebSocketClient* Client;
		bool bEnableHeartbeat;
		float HeartbeatInterval;
		int32 MaxReconnectAttempts;
		bool bAutoReconnect;
		bool bVerboseLogging;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply configuration to an existing WebSocket client\n\x09 * @param Client The client to configure\n\x09 * @param bEnableHeartbeat Enable heartbeat functionality\n\x09 * @param HeartbeatInterval Heartbeat interval in seconds\n\x09 * @param MaxReconnectAttempts Maximum number of reconnection attempts\n\x09 * @param bAutoReconnect Enable automatic reconnection\n\x09 * @param bVerboseLogging Enable verbose logging\n\x09 */" },
#endif
		{ "CPP_Default_bAutoReconnect", "true" },
		{ "CPP_Default_bEnableHeartbeat", "true" },
		{ "CPP_Default_bVerboseLogging", "false" },
		{ "CPP_Default_HeartbeatInterval", "30.000000" },
		{ "CPP_Default_MaxReconnectAttempts", "3" },
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply configuration to an existing WebSocket client\n@param Client The client to configure\n@param bEnableHeartbeat Enable heartbeat functionality\n@param HeartbeatInterval Heartbeat interval in seconds\n@param MaxReconnectAttempts Maximum number of reconnection attempts\n@param bAutoReconnect Enable automatic reconnection\n@param bVerboseLogging Enable verbose logging" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Client;
	static void NewProp_bEnableHeartbeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeartbeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartbeatInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReconnectAttempts;
	static void NewProp_bAutoReconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnect;
	static void NewProp_bVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_Client = { "Client", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms, Client), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bEnableHeartbeat_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventConfigureWebSocket_Parms*)Obj)->bEnableHeartbeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bEnableHeartbeat = { "bEnableHeartbeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bEnableHeartbeat_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_HeartbeatInterval = { "HeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms, HeartbeatInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_MaxReconnectAttempts = { "MaxReconnectAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms, MaxReconnectAttempts), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bAutoReconnect_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventConfigureWebSocket_Parms*)Obj)->bAutoReconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bAutoReconnect = { "bAutoReconnect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bAutoReconnect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bVerboseLogging_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventConfigureWebSocket_Parms*)Obj)->bVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bVerboseLogging = { "bVerboseLogging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventConfigureWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bVerboseLogging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_Client,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bEnableHeartbeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_HeartbeatInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_MaxReconnectAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bAutoReconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::NewProp_bVerboseLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "ConfigureWebSocket", Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::HorizonBlueprintLibrary_eventConfigureWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::HorizonBlueprintLibrary_eventConfigureWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execConfigureWebSocket)
{
	P_GET_OBJECT(UHorizonWebSocketClient,Z_Param_Client);
	P_GET_UBOOL(Z_Param_bEnableHeartbeat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeartbeatInterval);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxReconnectAttempts);
	P_GET_UBOOL(Z_Param_bAutoReconnect);
	P_GET_UBOOL(Z_Param_bVerboseLogging);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHorizonBlueprintLibrary::ConfigureWebSocket(Z_Param_Client,Z_Param_bEnableHeartbeat,Z_Param_HeartbeatInterval,Z_Param_MaxReconnectAttempts,Z_Param_bAutoReconnect,Z_Param_bVerboseLogging);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function ConfigureWebSocket ***********************

// ********** Begin Class UHorizonBlueprintLibrary Function ConnectionStateToString ****************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics
{
	struct HorizonBlueprintLibrary_eventConnectionStateToString_Parms
	{
		EHorizonWebSocketState State;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert WebSocket connection state to a readable string\n\x09 * @param State The connection state to convert\n\x09 * @return Human-readable string representation of the state\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert WebSocket connection state to a readable string\n@param State The connection state to convert\n@return Human-readable string representation of the state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventConnectionStateToString_Parms, State), Z_Construct_UEnum_Horizon_EHorizonWebSocketState, METADATA_PARAMS(0, nullptr) }; // 1121817835
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventConnectionStateToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "ConnectionStateToString", Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::HorizonBlueprintLibrary_eventConnectionStateToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::HorizonBlueprintLibrary_eventConnectionStateToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execConnectionStateToString)
{
	P_GET_ENUM(EHorizonWebSocketState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonBlueprintLibrary::ConnectionStateToString(EHorizonWebSocketState(Z_Param_State));
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function ConnectionStateToString ******************

// ********** Begin Class UHorizonBlueprintLibrary Function CreateConfiguredWebSocket **************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics
{
	struct HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms
	{
		const UObject* WorldContext;
		bool bEnableHeartbeat;
		float HeartbeatInterval;
		int32 MaxReconnectAttempts;
		bool bAutoReconnect;
		bool bVerboseLogging;
		UHorizonWebSocketClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create WebSocket client with advanced configuration\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @param bEnableHeartbeat Enable heartbeat functionality\n\x09 * @param HeartbeatInterval Heartbeat interval in seconds\n\x09 * @param MaxReconnectAttempts Maximum number of reconnection attempts\n\x09 * @param bAutoReconnect Enable automatic reconnection\n\x09 * @param bVerboseLogging Enable verbose logging\n\x09 * @return Configured WebSocket client instance\n\x09 */" },
#endif
		{ "CPP_Default_bAutoReconnect", "true" },
		{ "CPP_Default_bEnableHeartbeat", "true" },
		{ "CPP_Default_bVerboseLogging", "false" },
		{ "CPP_Default_HeartbeatInterval", "30.000000" },
		{ "CPP_Default_MaxReconnectAttempts", "3" },
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create WebSocket client with advanced configuration\n@param WorldContext World context for subsystem access\n@param bEnableHeartbeat Enable heartbeat functionality\n@param HeartbeatInterval Heartbeat interval in seconds\n@param MaxReconnectAttempts Maximum number of reconnection attempts\n@param bAutoReconnect Enable automatic reconnection\n@param bVerboseLogging Enable verbose logging\n@return Configured WebSocket client instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static void NewProp_bEnableHeartbeat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeartbeat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeartbeatInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReconnectAttempts;
	static void NewProp_bAutoReconnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReconnect;
	static void NewProp_bVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseLogging;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bEnableHeartbeat_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms*)Obj)->bEnableHeartbeat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bEnableHeartbeat = { "bEnableHeartbeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bEnableHeartbeat_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_HeartbeatInterval = { "HeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms, HeartbeatInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_MaxReconnectAttempts = { "MaxReconnectAttempts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms, MaxReconnectAttempts), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bAutoReconnect_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms*)Obj)->bAutoReconnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bAutoReconnect = { "bAutoReconnect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bAutoReconnect_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bVerboseLogging_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms*)Obj)->bVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bVerboseLogging = { "bVerboseLogging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bVerboseLogging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms, ReturnValue), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bEnableHeartbeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_HeartbeatInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_MaxReconnectAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bAutoReconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_bVerboseLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "CreateConfiguredWebSocket", Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::HorizonBlueprintLibrary_eventCreateConfiguredWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execCreateConfiguredWebSocket)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_UBOOL(Z_Param_bEnableHeartbeat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeartbeatInterval);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxReconnectAttempts);
	P_GET_UBOOL(Z_Param_bAutoReconnect);
	P_GET_UBOOL(Z_Param_bVerboseLogging);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonWebSocketClient**)Z_Param__Result=UHorizonBlueprintLibrary::CreateConfiguredWebSocket(Z_Param_WorldContext,Z_Param_bEnableHeartbeat,Z_Param_HeartbeatInterval,Z_Param_MaxReconnectAttempts,Z_Param_bAutoReconnect,Z_Param_bVerboseLogging);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function CreateConfiguredWebSocket ****************

// ********** Begin Class UHorizonBlueprintLibrary Function CreateJSONMessage **********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics
{
	struct HorizonBlueprintLibrary_eventCreateJSONMessage_Parms
	{
		FString MessageType;
		TMap<FString,FString> Parameters;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a JSON message string from key-value pairs\n\x09 * @param MessageType The message type/action\n\x09 * @param Parameters Key-value pairs for the message\n\x09 * @return JSON formatted message string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a JSON message string from key-value pairs\n@param MessageType The message type/action\n@param Parameters Key-value pairs for the message\n@return JSON formatted message string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateJSONMessage_Parms, MessageType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageType_MetaData), NewProp_MessageType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateJSONMessage_Parms, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateJSONMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_MessageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "CreateJSONMessage", Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::HorizonBlueprintLibrary_eventCreateJSONMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::HorizonBlueprintLibrary_eventCreateJSONMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execCreateJSONMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonBlueprintLibrary::CreateJSONMessage(Z_Param_MessageType,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function CreateJSONMessage ************************

// ********** Begin Class UHorizonBlueprintLibrary Function CreateWebSocket ************************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics
{
	struct HorizonBlueprintLibrary_eventCreateWebSocket_Parms
	{
		const UObject* WorldContext;
		UHorizonWebSocketClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Horizon|WebSocket|Quick Access" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a new Horizon WebSocket client\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @return New WebSocket client instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a new Horizon WebSocket client\n@param WorldContext World context for subsystem access\n@return New WebSocket client instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateWebSocket_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventCreateWebSocket_Parms, ReturnValue), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "CreateWebSocket", Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::HorizonBlueprintLibrary_eventCreateWebSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::HorizonBlueprintLibrary_eventCreateWebSocket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execCreateWebSocket)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonWebSocketClient**)Z_Param__Result=UHorizonBlueprintLibrary::CreateWebSocket(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function CreateWebSocket **************************

// ********** Begin Class UHorizonBlueprintLibrary Function DisconnectAllClients *******************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics
{
	struct HorizonBlueprintLibrary_eventDisconnectAllClients_Parms
	{
		const UObject* WorldContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Quick Access" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disconnect all WebSocket clients\n\x09 * @param WorldContext World context for subsystem access\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disconnect all WebSocket clients\n@param WorldContext World context for subsystem access" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventDisconnectAllClients_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "DisconnectAllClients", Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::HorizonBlueprintLibrary_eventDisconnectAllClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::HorizonBlueprintLibrary_eventDisconnectAllClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execDisconnectAllClients)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHorizonBlueprintLibrary::DisconnectAllClients(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function DisconnectAllClients *********************

// ********** Begin Class UHorizonBlueprintLibrary Function FindClientsByURL ***********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics
{
	struct HorizonBlueprintLibrary_eventFindClientsByURL_Parms
	{
		const UObject* WorldContext;
		FString URL;
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find WebSocket clients by server URL\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @param URL The server URL to search for\n\x09 * @return Array of clients connected to the specified URL\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find WebSocket clients by server URL\n@param WorldContext World context for subsystem access\n@param URL The server URL to search for\n@return Array of clients connected to the specified URL" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventFindClientsByURL_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventFindClientsByURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventFindClientsByURL_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "FindClientsByURL", Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::HorizonBlueprintLibrary_eventFindClientsByURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::HorizonBlueprintLibrary_eventFindClientsByURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execFindClientsByURL)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=UHorizonBlueprintLibrary::FindClientsByURL(Z_Param_WorldContext,Z_Param_URL);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function FindClientsByURL *************************

// ********** Begin Class UHorizonBlueprintLibrary Function GenerateClientID ***********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics
{
	struct HorizonBlueprintLibrary_eventGenerateClientID_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a unique client ID for identification\n\x09 * @return Unique client identifier string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a unique client ID for identification\n@return Unique client identifier string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGenerateClientID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "GenerateClientID", Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::HorizonBlueprintLibrary_eventGenerateClientID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::HorizonBlueprintLibrary_eventGenerateClientID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execGenerateClientID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonBlueprintLibrary::GenerateClientID();
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function GenerateClientID *************************

// ********** Begin Class UHorizonBlueprintLibrary Function GetAllActiveClients ********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics
{
	struct HorizonBlueprintLibrary_eventGetAllActiveClients_Parms
	{
		const UObject* WorldContext;
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all active WebSocket clients\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @return Array of all active WebSocket clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all active WebSocket clients\n@param WorldContext World context for subsystem access\n@return Array of all active WebSocket clients" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetAllActiveClients_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetAllActiveClients_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "GetAllActiveClients", Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::HorizonBlueprintLibrary_eventGetAllActiveClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::HorizonBlueprintLibrary_eventGetAllActiveClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execGetAllActiveClients)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=UHorizonBlueprintLibrary::GetAllActiveClients(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function GetAllActiveClients **********************

// ********** Begin Class UHorizonBlueprintLibrary Function GetAllConnectedClients *****************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics
{
	struct HorizonBlueprintLibrary_eventGetAllConnectedClients_Parms
	{
		const UObject* WorldContext;
		TArray<UHorizonWebSocketClient*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get all connected WebSocket clients\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @return Array of all connected WebSocket clients\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all connected WebSocket clients\n@param WorldContext World context for subsystem access\n@return Array of all connected WebSocket clients" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetAllConnectedClients_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetAllConnectedClients_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "GetAllConnectedClients", Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::HorizonBlueprintLibrary_eventGetAllConnectedClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::HorizonBlueprintLibrary_eventGetAllConnectedClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execGetAllConnectedClients)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UHorizonWebSocketClient*>*)Z_Param__Result=UHorizonBlueprintLibrary::GetAllConnectedClients(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function GetAllConnectedClients *******************

// ********** Begin Class UHorizonBlueprintLibrary Function GetConnectionStatistics ****************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics
{
	struct HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms
	{
		const UObject* WorldContext;
		int32 OutTotalCreated;
		int32 OutTotalAttempts;
		int32 OutTotalSuccessful;
		float OutSuccessRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get connection statistics\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @param OutTotalCreated Total number of clients created\n\x09 * @param OutTotalAttempts Total number of connection attempts\n\x09 * @param OutTotalSuccessful Total number of successful connections\n\x09 * @param OutSuccessRate Connection success rate as a percentage\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get connection statistics\n@param WorldContext World context for subsystem access\n@param OutTotalCreated Total number of clients created\n@param OutTotalAttempts Total number of connection attempts\n@param OutTotalSuccessful Total number of successful connections\n@param OutSuccessRate Connection success rate as a percentage" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalCreated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalSuccessful;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSuccessRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalCreated = { "OutTotalCreated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms, OutTotalCreated), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalAttempts = { "OutTotalAttempts", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms, OutTotalAttempts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalSuccessful = { "OutTotalSuccessful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms, OutTotalSuccessful), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutSuccessRate = { "OutSuccessRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms, OutSuccessRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutTotalSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::NewProp_OutSuccessRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "GetConnectionStatistics", Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::HorizonBlueprintLibrary_eventGetConnectionStatistics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execGetConnectionStatistics)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCreated);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalAttempts);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalSuccessful);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSuccessRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UHorizonBlueprintLibrary::GetConnectionStatistics(Z_Param_WorldContext,Z_Param_Out_OutTotalCreated,Z_Param_Out_OutTotalAttempts,Z_Param_Out_OutTotalSuccessful,Z_Param_Out_OutSuccessRate);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function GetConnectionStatistics ******************

// ********** Begin Class UHorizonBlueprintLibrary Function GetHorizonVersion **********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics
{
	struct HorizonBlueprintLibrary_eventGetHorizonVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the Horizon plugin version\n\x09 * @return Version string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the Horizon plugin version\n@return Version string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventGetHorizonVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "GetHorizonVersion", Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::HorizonBlueprintLibrary_eventGetHorizonVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::HorizonBlueprintLibrary_eventGetHorizonVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execGetHorizonVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UHorizonBlueprintLibrary::GetHorizonVersion();
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function GetHorizonVersion ************************

// ********** Begin Class UHorizonBlueprintLibrary Function IsHorizonFeatureAvailable **************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics
{
	struct HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms
	{
		FString FeatureName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a specific Horizon feature is available\n\x09 * @param FeatureName The name of the feature to check\n\x09 * @return True if the feature is available\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a specific Horizon feature is available\n@param FeatureName The name of the feature to check\n@return True if the feature is available" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FeatureName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms, FeatureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureName_MetaData), NewProp_FeatureName_MetaData) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_FeatureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "IsHorizonFeatureAvailable", Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::HorizonBlueprintLibrary_eventIsHorizonFeatureAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execIsHorizonFeatureAvailable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FeatureName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonBlueprintLibrary::IsHorizonFeatureAvailable(Z_Param_FeatureName);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function IsHorizonFeatureAvailable ****************

// ********** Begin Class UHorizonBlueprintLibrary Function IsHorizonWebSocketAvailable ************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics
{
	struct HorizonBlueprintLibrary_eventIsHorizonWebSocketAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the Horizon WebSocket system is available\n\x09 * @return True if Horizon WebSocket system is loaded and available\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the Horizon WebSocket system is available\n@return True if Horizon WebSocket system is loaded and available" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventIsHorizonWebSocketAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventIsHorizonWebSocketAvailable_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "IsHorizonWebSocketAvailable", Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::HorizonBlueprintLibrary_eventIsHorizonWebSocketAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::HorizonBlueprintLibrary_eventIsHorizonWebSocketAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execIsHorizonWebSocketAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonBlueprintLibrary::IsHorizonWebSocketAvailable();
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function IsHorizonWebSocketAvailable **************

// ********** Begin Class UHorizonBlueprintLibrary Function IsValidWebSocketURL ********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics
{
	struct HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms
	{
		FString URL;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate a WebSocket URL format\n\x09 * @param URL The URL to validate\n\x09 * @return True if the URL format is valid for WebSocket connections\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate a WebSocket URL format\n@param URL The URL to validate\n@return True if the URL format is valid for WebSocket connections" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "IsValidWebSocketURL", Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::HorizonBlueprintLibrary_eventIsValidWebSocketURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execIsValidWebSocketURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonBlueprintLibrary::IsValidWebSocketURL(Z_Param_URL);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function IsValidWebSocketURL **********************

// ********** Begin Class UHorizonBlueprintLibrary Function ParseJSONMessage ***********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics
{
	struct HorizonBlueprintLibrary_eventParseJSONMessage_Parms
	{
		FString JSONMessage;
		FString OutMessageType;
		TMap<FString,FString> OutParameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Parse a JSON message string to extract type and parameters\n\x09 * @param JSONMessage The JSON message to parse\n\x09 * @param OutMessageType The extracted message type\n\x09 * @param OutParameters The extracted parameters\n\x09 * @return True if the message was successfully parsed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse a JSON message string to extract type and parameters\n@param JSONMessage The JSON message to parse\n@param OutMessageType The extracted message type\n@param OutParameters The extracted parameters\n@return True if the message was successfully parsed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JSONMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMessageType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutParameters_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutParameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutParameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_JSONMessage = { "JSONMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseJSONMessage_Parms, JSONMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JSONMessage_MetaData), NewProp_JSONMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutMessageType = { "OutMessageType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseJSONMessage_Parms, OutMessageType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters_ValueProp = { "OutParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters_Key_KeyProp = { "OutParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters = { "OutParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseJSONMessage_Parms, OutParameters), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventParseJSONMessage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventParseJSONMessage_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_JSONMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutMessageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_OutParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "ParseJSONMessage", Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::HorizonBlueprintLibrary_eventParseJSONMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::HorizonBlueprintLibrary_eventParseJSONMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execParseJSONMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONMessage);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMessageType);
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonBlueprintLibrary::ParseJSONMessage(Z_Param_JSONMessage,Z_Param_Out_OutMessageType,Z_Param_Out_OutParameters);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function ParseJSONMessage *************************

// ********** Begin Class UHorizonBlueprintLibrary Function ParseWebSocketURL **********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics
{
	struct HorizonBlueprintLibrary_eventParseWebSocketURL_Parms
	{
		FString URL;
		FString OutProtocol;
		FString OutHost;
		int32 OutPort;
		FString OutPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Parse a WebSocket URL to extract components\n\x09 * @param URL The WebSocket URL to parse\n\x09 * @param OutProtocol The protocol (ws or wss)\n\x09 * @param OutHost The host/domain\n\x09 * @param OutPort The port number\n\x09 * @param OutPath The path\n\x09 * @return True if URL was successfully parsed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse a WebSocket URL to extract components\n@param URL The WebSocket URL to parse\n@param OutProtocol The protocol (ws or wss)\n@param OutHost The host/domain\n@param OutPort The port number\n@param OutPath The path\n@return True if URL was successfully parsed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutProtocol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutHost;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutProtocol = { "OutProtocol", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms, OutProtocol), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutHost = { "OutHost", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms, OutHost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutPort = { "OutPort", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms, OutPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms, OutPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HorizonBlueprintLibrary_eventParseWebSocketURL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HorizonBlueprintLibrary_eventParseWebSocketURL_Parms), &Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutProtocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutHost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "ParseWebSocketURL", Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::HorizonBlueprintLibrary_eventParseWebSocketURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::HorizonBlueprintLibrary_eventParseWebSocketURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execParseWebSocketURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutProtocol);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutHost);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutPort);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UHorizonBlueprintLibrary::ParseWebSocketURL(Z_Param_URL,Z_Param_Out_OutProtocol,Z_Param_Out_OutHost,Z_Param_Out_OutPort,Z_Param_Out_OutPath);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function ParseWebSocketURL ************************

// ********** Begin Class UHorizonBlueprintLibrary Function QuickConnect ***************************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics
{
	struct HorizonBlueprintLibrary_eventQuickConnect_Parms
	{
		const UObject* WorldContext;
		FString URL;
		FString Protocol;
		UHorizonWebSocketClient* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Quick Access" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create and immediately connect a WebSocket client\n\x09 * @param WorldContext World context for subsystem access\n\x09 * @param URL The WebSocket server URL\n\x09 * @param Protocol The WebSocket protocol (optional)\n\x09 * @return Connected WebSocket client instance, or nullptr if failed\n\x09 */" },
#endif
		{ "CPP_Default_Protocol", "" },
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and immediately connect a WebSocket client\n@param WorldContext World context for subsystem access\n@param URL The WebSocket server URL\n@param Protocol The WebSocket protocol (optional)\n@return Connected WebSocket client instance, or nullptr if failed" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventQuickConnect_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventQuickConnect_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventQuickConnect_Parms, Protocol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventQuickConnect_Parms, ReturnValue), Z_Construct_UClass_UHorizonWebSocketClient_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "QuickConnect", Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::HorizonBlueprintLibrary_eventQuickConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::HorizonBlueprintLibrary_eventQuickConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execQuickConnect)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHorizonWebSocketClient**)Z_Param__Result=UHorizonBlueprintLibrary::QuickConnect(Z_Param_WorldContext,Z_Param_URL,Z_Param_Protocol);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function QuickConnect *****************************

// ********** Begin Class UHorizonBlueprintLibrary Function StringToByteArray **********************
struct Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics
{
	struct HorizonBlueprintLibrary_eventStringToByteArray_Parms
	{
		FString StringData;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Horizon|WebSocket|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert string to byte array for binary messages\n\x09 * @param StringData The string to convert\n\x09 * @return Byte array representation of the string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert string to byte array for binary messages\n@param StringData The string to convert\n@return Byte array representation of the string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_StringData = { "StringData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventStringToByteArray_Parms, StringData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringData_MetaData), NewProp_StringData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorizonBlueprintLibrary_eventStringToByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_StringData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHorizonBlueprintLibrary, nullptr, "StringToByteArray", Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::HorizonBlueprintLibrary_eventStringToByteArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::HorizonBlueprintLibrary_eventStringToByteArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHorizonBlueprintLibrary::execStringToByteArray)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=UHorizonBlueprintLibrary::StringToByteArray(Z_Param_StringData);
	P_NATIVE_END;
}
// ********** End Class UHorizonBlueprintLibrary Function StringToByteArray ************************

// ********** Begin Class UHorizonBlueprintLibrary *************************************************
void UHorizonBlueprintLibrary::StaticRegisterNativesUHorizonBlueprintLibrary()
{
	UClass* Class = UHorizonBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastToAllClients", &UHorizonBlueprintLibrary::execBroadcastToAllClients },
		{ "ByteArrayToString", &UHorizonBlueprintLibrary::execByteArrayToString },
		{ "ConfigureWebSocket", &UHorizonBlueprintLibrary::execConfigureWebSocket },
		{ "ConnectionStateToString", &UHorizonBlueprintLibrary::execConnectionStateToString },
		{ "CreateConfiguredWebSocket", &UHorizonBlueprintLibrary::execCreateConfiguredWebSocket },
		{ "CreateJSONMessage", &UHorizonBlueprintLibrary::execCreateJSONMessage },
		{ "CreateWebSocket", &UHorizonBlueprintLibrary::execCreateWebSocket },
		{ "DisconnectAllClients", &UHorizonBlueprintLibrary::execDisconnectAllClients },
		{ "FindClientsByURL", &UHorizonBlueprintLibrary::execFindClientsByURL },
		{ "GenerateClientID", &UHorizonBlueprintLibrary::execGenerateClientID },
		{ "GetAllActiveClients", &UHorizonBlueprintLibrary::execGetAllActiveClients },
		{ "GetAllConnectedClients", &UHorizonBlueprintLibrary::execGetAllConnectedClients },
		{ "GetConnectionStatistics", &UHorizonBlueprintLibrary::execGetConnectionStatistics },
		{ "GetHorizonVersion", &UHorizonBlueprintLibrary::execGetHorizonVersion },
		{ "IsHorizonFeatureAvailable", &UHorizonBlueprintLibrary::execIsHorizonFeatureAvailable },
		{ "IsHorizonWebSocketAvailable", &UHorizonBlueprintLibrary::execIsHorizonWebSocketAvailable },
		{ "IsValidWebSocketURL", &UHorizonBlueprintLibrary::execIsValidWebSocketURL },
		{ "ParseJSONMessage", &UHorizonBlueprintLibrary::execParseJSONMessage },
		{ "ParseWebSocketURL", &UHorizonBlueprintLibrary::execParseWebSocketURL },
		{ "QuickConnect", &UHorizonBlueprintLibrary::execQuickConnect },
		{ "StringToByteArray", &UHorizonBlueprintLibrary::execStringToByteArray },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHorizonBlueprintLibrary;
UClass* UHorizonBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UHorizonBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UHorizonBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorizonBlueprintLibrary"),
			Z_Registration_Info_UClass_UHorizonBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUHorizonBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UHorizonBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UHorizonBlueprintLibrary_NoRegister()
{
	return UHorizonBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHorizonBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Horizon Blueprint Function Library\n * Provides convenient static functions for easy access to Horizon WebSocket functionality in Blueprints\n */" },
#endif
		{ "IncludePath", "HorizonBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/HorizonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizon Blueprint Function Library\nProvides convenient static functions for easy access to Horizon WebSocket functionality in Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_BroadcastToAllClients, "BroadcastToAllClients" }, // 2187807134
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_ByteArrayToString, "ByteArrayToString" }, // 3612272337
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_ConfigureWebSocket, "ConfigureWebSocket" }, // 516659558
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_ConnectionStateToString, "ConnectionStateToString" }, // 2241561785
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateConfiguredWebSocket, "CreateConfiguredWebSocket" }, // 2193740787
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateJSONMessage, "CreateJSONMessage" }, // 3972198080
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_CreateWebSocket, "CreateWebSocket" }, // 2210186714
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_DisconnectAllClients, "DisconnectAllClients" }, // 3399701306
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_FindClientsByURL, "FindClientsByURL" }, // 2788715373
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_GenerateClientID, "GenerateClientID" }, // 3358127715
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllActiveClients, "GetAllActiveClients" }, // 1681633780
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_GetAllConnectedClients, "GetAllConnectedClients" }, // 744361488
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_GetConnectionStatistics, "GetConnectionStatistics" }, // 912343642
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_GetHorizonVersion, "GetHorizonVersion" }, // 318879809
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonFeatureAvailable, "IsHorizonFeatureAvailable" }, // 1866316932
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsHorizonWebSocketAvailable, "IsHorizonWebSocketAvailable" }, // 2833637549
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_IsValidWebSocketURL, "IsValidWebSocketURL" }, // 1339198484
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseJSONMessage, "ParseJSONMessage" }, // 1774433546
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_ParseWebSocketURL, "ParseWebSocketURL" }, // 1256146476
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_QuickConnect, "QuickConnect" }, // 1860514193
		{ &Z_Construct_UFunction_UHorizonBlueprintLibrary_StringToByteArray, "StringToByteArray" }, // 548175488
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Horizon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::ClassParams = {
	&UHorizonBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHorizonBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UHorizonBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizonBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UHorizonBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHorizonBlueprintLibrary.OuterSingleton;
}
UHorizonBlueprintLibrary::UHorizonBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonBlueprintLibrary);
UHorizonBlueprintLibrary::~UHorizonBlueprintLibrary() {}
// ********** End Class UHorizonBlueprintLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h__Script_Horizon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHorizonBlueprintLibrary, UHorizonBlueprintLibrary::StaticClass, TEXT("UHorizonBlueprintLibrary"), &Z_Registration_Info_UClass_UHorizonBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizonBlueprintLibrary), 786162937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h__Script_Horizon_1658800015(TEXT("/Script/Horizon"),
	Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h__Script_Horizon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_redst_OneDrive_Documents_Unreal_Projects_MyProject2_Plugins_Horizon_Source_Horizon_Public_HorizonBlueprintLibrary_h__Script_Horizon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
