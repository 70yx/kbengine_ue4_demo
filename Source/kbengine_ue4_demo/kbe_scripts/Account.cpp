#include "kbengine_ue4_demo.h"
#include "Entity.h"
#include "interfaces/GameObject.h"
#include "Account.h"
#include "KBEngine.h"
#include "Event.h"

ENTITYDEF_CLASS_REGISTER(Account, GameObject)
//ENTITYDEF_PROPERTY_REGISTER(Account, characters);
ENTITYDEF_PROPERTY_REGISTER(Account, lastSelCharacter);

Account::Account():
	GameObject(),
	characters(),
	lastSelCharacter(0)
{
}

Account::~Account()
{
}

void Account::__init__()
{
	FKEventData_onLoginSuccessfully eventData;
	eventData.entity_uuid = KBEngineApp::getSingleton().entity_uuid();
	eventData.entity_id = id();
	KBENGINE_EVENT_FIRE("onLoginSuccessfully", eventData);

	// �����������ý�ɫ�б�
	baseCall(TEXT("reqAvatarList"));
}

void Account::onDestroy()
{
	// ע��ע��������¼�
	KBENGINE_DEREGISTER_ALL_EVENT();
}

void Account::reqCreateAvatar(uint8 roleType, const FString& name)
{
	DEBUG_MSG("roleType=%d", roleType);
}

void Account::reqRemoveAvatar(const FString& name)
{
	DEBUG_MSG("name=%s", *name);
}

void Account::reqRemoveAvatar(uint64 dbid)
{
	DEBUG_MSG("dbid=%lld", dbid);
}
