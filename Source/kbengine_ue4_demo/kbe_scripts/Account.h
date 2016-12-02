// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;

/*
	��Ӧentity_defs/*
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
	void reqRemoveAvatar(uint64 dbid);
	void selectAvatarGame(uint64 dbid);

	void onReqAvatarList(const KB_FIXED_DICT& datas);
	void onCreateAvatarResult(uint8 retcode, const KB_FIXED_DICT& info);
	void onRemoveAvatar(uint64 dbid);

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

	TMap<uint64, AVATAR_INFOS> characters;

	// def�ж���Ŀͻ����漰���Ժͷ�������Ҫ������ENTITYDEF_BEGIN��ENTITYDEF_END֮��
	ENTITYDEF_BEGIN()
	DBID lastSelCharacter;
	ENTITYDEF_END()
};
