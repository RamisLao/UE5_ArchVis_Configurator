//Publisher: stephen, Intended publishing: 2021
#pragma once
#include "FirebaseProxy.h"
#include "Kismet/GameplayStatics.h"
#include "firebase/app.h"
#include "firebase/auth.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "XmlParser.h"

#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#endif

TWeakObjectPtr<AFirebaseProxy> AFirebaseProxy::RuntimeProxyRef(NULL);

AFirebaseProxy::AFirebaseProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFirebaseProxy::BeginPlay()
{
	Super::BeginPlay();
}

void AFirebaseProxy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (AuthMgr)
	{
		AuthMgr->OnTick(DeltaSeconds);
	}
	if (FirestoreMgr)
	{
		FirestoreMgr->OnTick(DeltaSeconds);
	}
	if (StorageMgr)
	{
		StorageMgr->OnTick(DeltaSeconds);
	}
}

void AFirebaseProxy::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (AuthMgr)
	{
		AuthMgr->OnClear();
	}
	if (FirestoreMgr)
	{
		FirestoreMgr->OnClear();
	}
	if (StorageMgr)
	{
		StorageMgr->OnClear();
	}
	RuntimeProxyRef = NULL;
	FirebaseApp = NULL;
}

FString AFirebaseProxy::GetPListString(const FString& Key)
{
	if (PListStringMap.Contains(Key))
	{
		return PListStringMap[Key];
	}
	return TEXT("");
}

bool AFirebaseProxy::GetPListBool(const FString& Key)
{
	if (PListBoolMap.Contains(Key))
	{
		return PListBoolMap[Key];
	}
	return false;
}

void AFirebaseProxy::InitPlistContent()
{
	PListBoolMap.Empty();
	PListStringMap.Empty();

	FString PListPath = FPaths::Combine(FPaths::ProjectContentDir(), TEXT("Firebase/GoogleService-Info.plist"));
	if (!FPaths::FileExists(PListPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Firebase plist file is not exist: %s!"), *PListPath);
		PListPath = FPaths::ConvertRelativePathToFull(PListPath);
	}
	if (FPaths::FileExists(PListPath))
	{
		FXmlFile PListXml(PListPath);
		FXmlNode* PListRoot = PListXml.GetRootNode();
		const FXmlNode* DictNode = NULL;
		if (PListRoot)
		{
			DictNode = PListRoot->GetFirstChildNode();
		}
		if (DictNode)
		{
			int32 i = 0;
			while (i < DictNode->GetChildrenNodes().Num())
			{
				if (i + 1 >= DictNode->GetChildrenNodes().Num())
				{
					break;
				}
				const FXmlNode* KeyNode = DictNode->GetChildrenNodes()[i];
				const FXmlNode* ValNode = DictNode->GetChildrenNodes()[i + 1];
				if (KeyNode == NULL || KeyNode->GetTag() != TEXT("key") || ValNode == NULL)
				{
					continue;
				}

				if (ValNode->GetTag() == TEXT("string"))
				{
					UE_LOG(LogTemp, Log, TEXT("Add string property: %s:%s"), *KeyNode->GetContent(), *ValNode->GetContent());
					if (PListStringMap.Contains(KeyNode->GetContent()))
					{
						UE_LOG(LogTemp, Error, TEXT("Exist same key property: %s"), *KeyNode->GetContent());
						PListStringMap[KeyNode->GetContent()] = ValNode->GetContent();
					}
					else
					{
						PListStringMap.Add(KeyNode->GetContent(), ValNode->GetContent());
					}
				}
				else if (ValNode->GetTag() == TEXT("true") || ValNode->GetTag() == TEXT("false"))
				{
					bool BoolVal = (ValNode->GetTag() == TEXT("true")) ? true : false;
					UE_LOG(LogTemp, Log, TEXT("Add bool property: %s:%s"), *KeyNode->GetContent(), *ValNode->GetTag());

					if (PListBoolMap.Contains(KeyNode->GetContent()))
					{
						UE_LOG(LogTemp, Error, TEXT("Exist same key property: %s"), *KeyNode->GetContent());
						PListBoolMap[KeyNode->GetContent()] = BoolVal;
					}
					else
					{
						PListBoolMap.Add(KeyNode->GetContent(), BoolVal);
					}
				}
				i = i + 2;
			}

		}
	}
}

void AFirebaseProxy::InitializeFirebaseApp()
{
	if (FirebaseApp != NULL)
	{
		return;
	}

	firebase::AppOptions FirebaseOption;

#if PLATFORM_ANDROID || PLATFORM_WINDOWS
	FString JsonPath = FPaths::Combine(FPaths::ProjectContentDir(), TEXT("/Firebase/google-services.json"));
	
	if (!FPaths::FileExists(JsonPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Firebase json file is not exist: %s!"), *JsonPath);
		JsonPath = FPaths::ConvertRelativePathToFull(JsonPath);
	}

	UE_LOG(LogTemp, Log, TEXT("Firebase json file : %s!"), *JsonPath);
	
	FString JsonConfig;
	FFileHelper::LoadFileToString(JsonConfig, *JsonPath);

	if (JsonConfig.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Load Firebase json file failed: %s!"), *JsonPath);
	}

	firebase::AppOptions::LoadFromJsonConfig(TCHAR_TO_UTF8(*JsonConfig), &FirebaseOption);
#elif PLATFORM_IOS || PLATFORM_MAC
	InitPlistContent();
	FirebaseOption.set_api_key(TCHAR_TO_UTF8(*GetPListString(TEXT("API_KEY"))));
	FirebaseOption.set_app_id(TCHAR_TO_UTF8(*GetPListString(TEXT("GOOGLE_APP_ID"))));
	FirebaseOption.set_project_id(TCHAR_TO_UTF8(*GetPListString(TEXT("PROJECT_ID"))));
	FirebaseOption.set_database_url(TCHAR_TO_UTF8(*GetPListString(TEXT("DATABASE_URL"))));
	FirebaseOption.set_storage_bucket(TCHAR_TO_UTF8(*GetPListString(TEXT("STORAGE_BUCKET"))));
	//FirebaseOption.set_ga_tracking_id(TCHAR_TO_UTF8(*GetPListString(TEXT("GOOGLE_APP_ID"))));
	//FirebaseOption.set_messaging_sender_id(TCHAR_TO_UTF8(*GetPListString(TEXT("GCM_SENDER_ID"))));
#endif
	
#if PLATFORM_ANDROID
	FirebaseApp = firebase::App::Create(FAndroidApplication::GetJavaEnv(), FJavaWrapper::GameActivityThis);
#elif PLATFORM_WINDOWS
	FirebaseApp = firebase::App::Create(FirebaseOption);
#else
	FirebaseApp = firebase::App::Create(FirebaseOption);
#endif

	if (FirebaseApp == NULL)
	{
		UE_LOG(LogTemp, Error, TEXT("FirebaseApp Init Error!"));
	}

}
AFirebaseProxy* AFirebaseProxy::GetFirebaseProxy(UObject* WorldContentObject)
{
	if (RuntimeProxyRef.IsValid())
	{
		return RuntimeProxyRef.Get();
	}

	if (WorldContentObject && WorldContentObject->GetWorld())
	{
		TArray<AActor*> ProxyList;
		UGameplayStatics::GetAllActorsOfClass(WorldContentObject, AFirebaseProxy::StaticClass(), ProxyList);
		if (ProxyList.Num() > 0)
		{
			RuntimeProxyRef = Cast<AFirebaseProxy>(ProxyList[0]);
		}
	}
	if (RuntimeProxyRef.IsValid())
	{
		return RuntimeProxyRef.Get();
	}
	UE_LOG(LogTemp, Error, TEXT("GetFirebaseAuthManager fail, firebase proxy is null."));
	return NULL;
}

UFirebaseAuthMgr* AFirebaseProxy::GetAuthMgr()
{
	InitializeFirebaseApp();
	if (AuthMgr == NULL)
	{
		AuthMgr = NewObject<UFirebaseAuthMgr>(this);
	}
	return AuthMgr;
}

UFirebaseAuthMgr* AFirebaseProxy::GetFirebaseAuthManager(UObject* WorldContentObject)
{
	if (AFirebaseProxy* Proxy = AFirebaseProxy::GetFirebaseProxy(WorldContentObject))
	{
		return Proxy->GetAuthMgr();
	}
	return NULL;
}

UFirestoreMgr* AFirebaseProxy::GetFirestoreMgr()
{
	InitializeFirebaseApp();
	if (FirestoreMgr == NULL)
	{
		FirestoreMgr = NewObject<UFirestoreMgr>(this);
	}
	return FirestoreMgr;
}

UFirebaseStorageMgr* AFirebaseProxy::GetStorageMgr()
{
	InitializeFirebaseApp();
	if (StorageMgr == NULL)
	{
		StorageMgr = NewObject<UFirebaseStorageMgr>(this);
	}
	return StorageMgr;
}


UFirestoreMgr* AFirebaseProxy::GetFirestoreManager(UObject* WorldContentObject)
{
	if (AFirebaseProxy* Proxy = AFirebaseProxy::GetFirebaseProxy(WorldContentObject))
	{
		return Proxy->GetFirestoreMgr();
	}
	return NULL;
}

UFirebaseStorageMgr* AFirebaseProxy::GetStorageManager(UObject* WorldContentObject)
{
	if (AFirebaseProxy* Proxy = AFirebaseProxy::GetFirebaseProxy(WorldContentObject))
	{
		return Proxy->GetStorageMgr();
	}
	return NULL;
}