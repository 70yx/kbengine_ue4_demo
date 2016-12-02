// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;
class Combat;
class Motion;
class State;
class Flags;
class Spell;
class SkillBox;
class Teleport;

/*
	��Ӧentity_defs/*
*/
class Avatar : public GameObject, public Combat, public Motion, public State, public Flags, public Spell, public SkillBox, public Teleport
{
public:
	Avatar();
	virtual ~Avatar();

public:
	// def�ж���Ŀͻ����漰����
	uint16 level;
	uint16 own_val;
};
