// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class Spell
{
public:
	Spell() {}
	Spell(Entity* entity);
	virtual ~Spell();

public:
	Entity* self;

	// def�ж���Ŀͻ����漰����
};
