// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/*
*/
class Teleport
{
public:
	Teleport() {}
	Teleport(Entity* entity);
	virtual ~Teleport();

public:
	Entity* self;

	// def�ж���Ŀͻ����漰����
	uint32 spaceUType;
};
