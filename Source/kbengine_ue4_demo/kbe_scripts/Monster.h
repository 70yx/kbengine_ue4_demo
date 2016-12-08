// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "KBECommon.h"

class GameObject;
class NPCObject;
class Combat;
class Motion;
class State;
class Flags;
class Spell;

/*
	��Ӧentity_defs/*
*/
class Monster : public GameObject, public NPCObject, public Combat, public Motion, public State, public Flags, public Spell
{
public:
	Monster();
	virtual ~Monster();

public:
	// def�ж���Ŀͻ����漰����
};


/*
Declare all of the properties and methods of the KBE-Entity

Example:
	#define ENTITYDEF_DECLARE_[module name of Entity](PARENT_MODULE)	\
		ENTITYDEF_PROPERTY_*(PARENT_MODULE, xx_property)	\
		ENTITYDEF_METHOD_ARGS[0~20]_REGISTER(PARENT_MODULE, xx_method)
*/

#define ENTITYDEF_DECLARE_Monster(PARENT_MODULE)	