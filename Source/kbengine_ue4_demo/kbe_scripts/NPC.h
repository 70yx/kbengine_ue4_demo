// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;
class NPCObject;
class Motion;

/*
	��Ӧentity_defs/*
*/
class NPC : public GameObject, public NPCObject, public Motion
{
public:
	NPC();
	virtual ~NPC();

public:
	// def�ж���Ŀͻ����漰���Ժͷ�������Ҫ������ENTITYDEF_BEGIN��ENTITYDEF_END֮��
	ENTITYDEF_BEGIN()
	ENTITYDEF_END()
};
