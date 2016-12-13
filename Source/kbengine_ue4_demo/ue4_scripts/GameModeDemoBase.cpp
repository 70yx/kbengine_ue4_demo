// Fill out your copyright notice in the Description page of Project Settings.

#include "kbengine_ue4_demo.h"
#include "GameModeDemoBase.h"
#include "KBEngine.h"

AGameModeDemoBase::AGameModeDemoBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AGameModeDemoBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

// Called when the game starts or when spawned
void AGameModeDemoBase::BeginPlay()
{
	Super::BeginPlay();
	installEvents();
}

void AGameModeDemoBase::Destroyed()
{
	KBENGINE_DEREGISTER_ALL_EVENT();
	Super::Destroyed();
}

void AGameModeDemoBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	// �������������Ϊ��ұ༭��Stop��Ϸ�����뿪���������
	if (Exiting)
	{
		KBENGINE_DEREGISTER_ALL_EVENT();
	}
}

void AGameModeDemoBase::installEvents()
{
	// common
	KBENGINE_REGISTER_EVENT("onKicked", onKicked);
	KBENGINE_REGISTER_EVENT("onDisableConnect", onDisableConnect);
	KBENGINE_REGISTER_EVENT("onConnectStatus", onConnectStatus);
}

void AGameModeDemoBase::fire(const FString& eventName, UKBEventData* pEventData)
{
	KBENGINE_EVENT_FIRE(eventName, pEventData);
}

void AGameModeDemoBase::onKicked_Implementation(const UKBEventData* pEventData)
{
}

void AGameModeDemoBase::onDisableConnect_Implementation(const UKBEventData* pEventData)
{
}

void AGameModeDemoBase::onConnectStatus_Implementation(const UKBEventData* pEventData)
{
}