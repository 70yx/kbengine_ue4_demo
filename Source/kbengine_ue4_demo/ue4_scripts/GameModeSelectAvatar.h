// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ue4_scripts/GameModeBase.h"
#include "GameModeSelectAvatar.generated.h"

/**
 * 
 */
UCLASS()
class KBENGINE_UE4_DEMO_API AGameModeSelectAvatar : public AGameModeBase
{
	GENERATED_UCLASS_BODY()

public:
	/*
		��װ��½ʱ��Ҫ������KBE�¼�
	*/
	virtual void installEvents() override;

	/* KBE�¼�
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "KBEngine")
		void onReqAvatarList(const FKEventData& eventData);

	/* KBE�¼�
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "KBEngine")
		void onCreateAvatarResult(const FKEventData& eventData);

	/* KBE�¼�
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "KBEngine")
		void onRemoveAvatar(const FKEventData& eventData);
};
