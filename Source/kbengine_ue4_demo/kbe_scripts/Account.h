// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

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
	void set_spaceID(uint32 oldVal) {

	}

	uint32 spaceID;
};
