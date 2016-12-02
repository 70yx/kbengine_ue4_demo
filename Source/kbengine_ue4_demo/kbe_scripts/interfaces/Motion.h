// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class Motion
{
public:
	Motion() {}
	Motion(Entity* entity);
	virtual ~Motion();

	void set_moveSpeed(uint8 old);

public:
	Entity* self;

	// def�ж���Ŀͻ����漰����
	uint8 moveSpeed;
};
