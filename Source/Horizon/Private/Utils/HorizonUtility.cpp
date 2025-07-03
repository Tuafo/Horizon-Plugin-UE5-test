#include "Utils/HorizonUtility.h"
#include "Misc/Guid.h"
#include "Misc/DateTime.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

bool UHorizonUtility::ParseWebSocketURL(const FString& URL, FString& OutProtocol, FString& OutHost, int32& OutPort, FString& OutPath)
{
	// Reset output parameters
	OutProtocol.Empty();
	OutHost.Empty();
	OutPort = 0;
	OutPath.Empty();

	if (URL.IsEmpty())
	{
		return false;
	}

	FString WorkingURL = URL;

	// Extract protocol
	int32 ProtocolEnd = WorkingURL.Find(TEXT("://"));
	if (ProtocolEnd == INDEX_NONE)
	{
		return false;
	}

	OutProtocol = WorkingURL.Left(ProtocolEnd).ToLower();
	if (OutProtocol != TEXT("ws") && OutProtocol != TEXT("wss"))
	{
		return false;
	}

	WorkingURL = WorkingURL.Mid(ProtocolEnd + 3);

	// Extract path (everything after the first '/')
	int32 PathStart = WorkingURL.Find(TEXT("/"));
	if (PathStart != INDEX_NONE)
	{
		OutPath = WorkingURL.Mid(PathStart);
		WorkingURL = WorkingURL.Left(PathStart);
	}
	else
	{
		OutPath = TEXT("/");
	}

	// Extract port (everything after the last ':')
	int32 PortStart = WorkingURL.Find(TEXT(":"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	if (PortStart != INDEX_NONE)
	{
		FString PortString = WorkingURL.Mid(PortStart + 1);
		OutPort = FCString::Atoi(*PortString);
		OutHost = WorkingURL.Left(PortStart);
	}
	else
	{
		// Use default ports
		OutPort = (OutProtocol == TEXT("wss")) ? 443 : 80;
		OutHost = WorkingURL;
	}

	return !OutHost.IsEmpty() && OutPort > 0;
}

bool UHorizonUtility::IsValidWebSocketURL(const FString& URL)
{
	FString Protocol, Host, Path;
	int32 Port;
	return ParseWebSocketURL(URL, Protocol, Host, Port, Path);
}

FString UHorizonUtility::CreateJSONMessage(const FString& Namespace, const FString& Event, const TMap<FString, FString>& Data)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	
	JsonObject->SetStringField(TEXT("namespace"), Namespace);
	JsonObject->SetStringField(TEXT("event"), Event);

	TSharedPtr<FJsonObject> DataObject = MakeShareable(new FJsonObject);
	for (const auto& Param : Data)
	{
		DataObject->SetStringField(Param.Key, Param.Value);
	}
	JsonObject->SetObjectField(TEXT("data"), DataObject);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return OutputString;
}

bool UHorizonUtility::ParseJSONMessage(const FString& JSONMessage, FString& OutNamespace, FString& OutEvent, FString& OutData)
{
	OutNamespace.Empty();
	OutEvent.Empty();
	OutData.Empty();

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONMessage);

	if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
	{
		return false;
	}

	if (!JsonObject->TryGetStringField(TEXT("namespace"), OutNamespace))
	{
		return false;
	}
	
	if (!JsonObject->TryGetStringField(TEXT("event"), OutEvent))
	{
		return false;
	}

	const TSharedPtr<FJsonObject>* DataObject;
	if (JsonObject->TryGetObjectField(TEXT("data"), DataObject) && DataObject->IsValid())
	{
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutData);
		FJsonSerializer::Serialize(DataObject->ToSharedRef(), Writer);
	}

	return true;
}

TArray<uint8> UHorizonUtility::StringToByteArray(const FString& StringData)
{
	TArray<uint8> ByteArray;
	
	// Convert string to UTF-8 bytes
	FTCHARToUTF8 UTF8String(*StringData);
	ByteArray.Append(reinterpret_cast<const uint8*>(UTF8String.Get()), UTF8String.Length());

	return ByteArray;
}

FString UHorizonUtility::ByteArrayToString(const TArray<uint8>& ByteData)
{
	// Convert UTF-8 bytes to string
	FUTF8ToTCHAR TCHARData(reinterpret_cast<const ANSICHAR*>(ByteData.GetData()), ByteData.Num());
	return FString(TCHARData.Length(), TCHARData.Get());
}

FString UHorizonUtility::GenerateClientID()
{
	// Generate a unique client ID using GUID and timestamp
	FGuid NewGuid = FGuid::NewGuid();
	FString Timestamp = FString::FromInt(FDateTime::Now().ToUnixTimestamp());
	
	return FString::Printf(TEXT("Horizon_%s_%s"), *NewGuid.ToString(EGuidFormats::DigitsWithHyphensInBraces), *Timestamp);
} 