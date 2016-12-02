// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class Flags
{
public:
	Flags() {}
	Flags(Entity* entity);
	virtual ~Flags();

	void set_flags(int32 old);

public:
	Entity* self;

	// def�ж���Ŀͻ����漰���Ժͷ�������Ҫ������ENTITYDEF_BEGIN��ENTITYDEF_END֮��
	ENTITYDEF_BEGIN()
	int32 flags;
	ENTITYDEF_END()
};
