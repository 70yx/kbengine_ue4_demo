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

	// def�ж���Ŀͻ����漰����
};

/*
Declare all of the properties and methods of the KBE-Entity

Example:
	#define ENTITYDEF_DECLARE_[module name of Entity](PARENT_MODULE)	\
		ENTITYDEF_PROPERTY_*(PARENT_MODULE, xx_property)	\
		ENTITYDEF_METHOD_ARGS[0~20]_REGISTER(PARENT_MODULE, xx_method)
*/
#define ENTITYDEF_DECLARE_Dialog(PARENT_MODULE)