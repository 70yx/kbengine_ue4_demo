// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;

/*
	KBEngine�߼����ʵ�������
	������չ������Ϸʵ�嶼Ӧ�ü̳��ڸ�ģ��
*/
class Account : public GameObject
{
public:
	Account();
	virtual ~Account();

public:
	virtual void __init__() override;
	virtual void onDestroy() override;

	void reqCreateAvatar(uint8 roleType, const FString& name);
	void reqRemoveAvatar(const FString& name);
	void reqRemoveAvatar(uint64 dbid);

	void onReqAvatarList(const KB_ARRAY& datas);

	struct AVATAR_DATA
	{
		int8 param1;
		TArray<uint8> param2;
	};

	struct AVATAR_INFOS
	{
		uint64 dbid;
		FString name;
		uint8 roleType;
		uint16 level;
		AVATAR_DATA data;
	};

	// def�ж���Ŀͻ����漰����
	AVATAR_INFOS characters;
	DBID lastSelCharacter;
};
