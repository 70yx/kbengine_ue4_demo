// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class GameObject : public Entity
{
public:
	GameObject();
	virtual ~GameObject();

	void set_name(FString old);
	void set_modelID(uint32 old);
	void set_modelScale(uint8 old);

public:
	// def�ж���Ŀͻ����漰���Ժͷ�������Ҫ������ENTITYDEF_BEGIN��ENTITYDEF_END֮��
	ENTITYDEF_BEGIN()
	FString name; // ������ײ�ĳЩ���Ƴ�ͻ����������ʹ����һ��������ֹ��ͻ
	uint32 uid;
	uint32 utype;
	uint32 modelID;
	uint8 modelScale;
	ENTITYDEF_END()
};
