// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class NPCObject
{
public:
	NPCObject() {}
	NPCObject(Entity* entity);
	virtual ~NPCObject();

	void set_entityNO(int32 old);

public:
	Entity* self;

	// def�ж���Ŀͻ����漰����
	uint32 entityNO;
};
