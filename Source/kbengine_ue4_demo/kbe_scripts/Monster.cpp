#include "kbengine_ue4_demo.h"
#include "Entity.h"
#include "interfaces/GameObject.h"
#include "interfaces/NPCObject.h"
#include "interfaces/Motion.h"
#include "interfaces/Combat.h"
#include "interfaces/State.h"
#include "interfaces/Flags.h"
#include "interfaces/Spell.h"
#include "Monster.h"

ENTITYDEF_CLASS_REGISTER(Monster, GameObject, NPCObject, Combat, Motion, State, Flags, Spell)

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, position)
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, direction)
ENTITYDEF_PROPERTY_REGISTER(Monster, spaceID)

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, flags);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, state);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, subState);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, forbids);

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, moveSpeed);

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, entityNO);

// ������ײ�ĳЩ���Ƴ�ͻ����������ʹ����һ��������ֹ��ͻ
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, name);

ENTITYDEF_PROPERTY_REGISTER(Monster, uid);
ENTITYDEF_PROPERTY_REGISTER(Monster, utype);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, modelID);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, modelScale);

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, HP);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, HP_Max);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, MP);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Monster, MP_Max);

Monster::Monster():
	GameObject(),
	NPCObject(this),
	Combat(this),
	Motion(this),
	State(this),
	Flags(this),
	Spell(this)
{
}

Monster::~Monster()
{
}
