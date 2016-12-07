#include "kbengine_ue4_demo.h"
#include "Entity.h"
#include "interfaces/GameObject.h"
#include "interfaces/NPCObject.h"
#include "Gate.h"

ENTITYDEF_CLASS_REGISTER(Gate, GameObject, NPCObject)

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, position)
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, direction)
ENTITYDEF_PROPERTY_REGISTER(Gate, spaceID)

// ������ײ�ĳЩ���Ƴ�ͻ����������ʹ����һ��������ֹ��ͻ
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, name);

ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, entityNO);

ENTITYDEF_PROPERTY_REGISTER(Gate, uid);
ENTITYDEF_PROPERTY_REGISTER(Gate, utype);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, modelID);
ENTITYDEF_PROPERTY_WITH_SETMETHOD_REGISTER(Gate, modelScale);

Gate::Gate():
	GameObject(),
	NPCObject(this)
{
}

Gate::~Gate()
{
}
