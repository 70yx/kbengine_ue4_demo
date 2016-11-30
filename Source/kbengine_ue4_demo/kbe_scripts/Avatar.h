// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;

/*
	KBEngine�߼����ʵ�������
	������չ������Ϸʵ�嶼Ӧ�ü̳��ڸ�ģ��
*/
class Avatar : public GameObject
{
public:
	Avatar();
	virtual ~Avatar();

public:
	// def�ж���Ŀͻ����漰����
	uint16 level;
	uint16 own_val;
};
