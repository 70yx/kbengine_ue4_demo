// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

class Entity;

/*
	��Ӧentity_defs/interfaces/
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

	// def�ж���Ŀͻ����漰����
	int32 flags;
};

/*
Declare all of the properties and methods of the KBE-Entity

Example:
	#define ENTITYDEF_DECLARE_[module name of Entity](PARENT_MODULE)	\
		ENTITYDEF_PROPERTY_*(PARENT_MODULE, xx_property)	\
		ENTITYDEF_METHOD_ARGS[0~20]_REGISTER(PARENT_MODULE, xx_method)
*/

#define ENTITYDEF_DECLARE_Flags(PARENT_MODULE)	\
	ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(PARENT_MODULE, flags)