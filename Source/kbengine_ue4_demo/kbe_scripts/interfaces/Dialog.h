// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class Dialog
{
public:
	Dialog() {}
	Dialog(Entity* entity);
	virtual ~Dialog();

public:
	Entity* self;

	// def�ж���Ŀͻ����漰���Ժͷ�������Ҫ������ENTITYDEF_BEGIN��ENTITYDEF_END֮��
	ENTITYDEF_BEGIN()
	ENTITYDEF_END()
};
