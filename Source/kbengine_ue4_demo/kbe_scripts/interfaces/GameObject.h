// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	KBEngine�߼����ʵ�������
	������չ������Ϸʵ�嶼Ӧ�ü̳��ڸ�ģ��
*/
class GameObject : public Entity
{
public:
	GameObject();
	virtual ~GameObject();

public:
	// def�ж���Ŀͻ����漰����
	FString name;
	uint32 uid;
	uint32 utype;
	uint32 modelID;
	uint8 modelScale;
};
