// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	KBEngine�߼����ʵ�������
	������չ������Ϸʵ�嶼Ӧ�ü̳��ڸ�ģ��
*/
class Combat
{
public:
	Combat();
	virtual ~Combat();

	void set_HP(int32 old);
	void set_HP_Max(int32 old);
	void set_MP(int32 old);
	void set_MP_Max(int32 old);

public:
	// def�ж���Ŀͻ����漰����
	int32 HP;
	int32 HP_Max;
	int32 MP;
	int32 MP_Max;
};
