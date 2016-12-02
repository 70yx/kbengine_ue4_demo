#include "kbengine_ue4_demo.h"
#include "Entity.h"
#include "interfaces/GameObject.h"
#include "interfaces/NPCObject.h"
#include "interfaces/Motion.h"
#include "NPC.h"

ENTITYDEF_CLASS_REGISTER(NPC, GameObject, NPCObject, Motion)

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(NPC, position)
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(NPC, direction)
ENTITYDEF_PROPERTY_REGISTER(NPC, spaceID)

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(NPC, moveSpeed);

// ������ײ�ĳЩ���Ƴ�ͻ����������ʹ����һ��������ֹ��ͻ
ENTITYDEF_PROPERTY_ALIAS_REGISTER(NPC, name, name_);

ENTITYDEF_PROPERTY_REGISTER(NPC, uid);
ENTITYDEF_PROPERTY_REGISTER(NPC, utype);
ENTITYDEF_PROPERTY_REGISTER(NPC, modelID);
ENTITYDEF_PROPERTY_REGISTER(NPC, modelScale);

ENTITYDEF_PROPERTY_REGISTER(NPC, entityNO);

NPC::NPC():
	GameObject(),
	NPCObject(this),
	Motion(this)
{
}

NPC::~NPC()
{
}
