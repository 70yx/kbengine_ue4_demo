KBEngine_ue4_demo(UE4.14.3)
=============

##����Ŀ��ΪKBEngine���������Ŀͻ�����ʾ��д
http://www.kbengine.org

##�ٷ���̳

	http://bbs.kbengine.org


##QQ����Ⱥ

	461368412


##Releases

	sources		: https://github.com/kbengine/kbengine_ue4_demo/releases/latest
	binarys		: https://sourceforge.net/projects/kbengine/files/


##KBE����ĵ�

	https://github.com/kbengine/kbengine_ue4_plugins/blob/master/README.md


##��ʼ:
	1. ȷ���Ѿ����ع�KBEngine��������棬���û��������������
		���ط����Դ��(KBEngine)��
			https://github.com/kbengine/kbengine/releases/latest

		����(KBEngine)��
			http://www.kbengine.org/docs/build.html

		��װ(KBEngine)��
			http://www.kbengine.org/docs/installation.html

	2. ����kbengine�ͻ��˲��������Demo�ʲ���:

	    * ʹ��git�����У����뵽kbengine_ue4_demoĿ¼ִ�У�

	        git submodule update --init --remote
![submodule_update1](http://www.kbengine.org/assets/img/screenshots/gitbash_submodule.png)

		* ����ʹ�� TortoiseGit(ѡ��˵�): TortoiseGit -> Submodule Update:
![submodule_update2](http://www.kbengine.org/assets/img/screenshots/unity3d_plugins_submodule_update.jpg)

                * Ҳ�����ֶ�����kbengine�ͻ��˲��������Demo�ʲ���

		        �ͻ��˲�����أ�
		            https://github.com/kbengine/kbengine_ue4_plugins/releases/latest
		            ���غ��뽫���ѹ�������Դ���������: Assets/plugins/kbengine/kbengine_ue4_plugins

		        ������ʲ������أ�
		            https://github.com/kbengine/kbengine_demos_assets/releases/latest
		            ���غ��뽫���ѹ��,����Ŀ¼�ļ������ڷ���������Ŀ¼"kbengine/"֮�£�����ͼ��

	3. ����������ʲ���"kbengine_demos_assets"������������Ŀ¼"kbengine/"֮�£�����ͼ��
![demo_configure](http://www.kbengine.org/assets/img/screenshots/demo_copy_kbengine.jpg)


##����Demo(��ѡ):

	�ı��¼IP��ַ��˿ڣ�ע�⣺���ڷ���˶˿ڲ��ֲο�http://www.kbengine.org/cn/docs/installation.html��:
![demo_configure](http://www.kbengine.org/assets/img/screenshots/demo_configure_ue4.jpg)

		kbengine_ue4_demo\Content\ClientApp-> ip
		kbengine_ue4_demo\Content\ClientApp-> port


##����������:

	ȷ����kbengine_ue4_demo\kbengine_demos_assets���Ѿ�������KBEngine��Ŀ¼��
		�ο��Ϸ��½ڣ���ʼ

	ʹ�������ű���������ˣ�
		Windows:
			kbengine\kbengine_demos_assets\start_server.bat

		Linux:
			kbengine\kbengine_demos_assets\start_server.sh

	�������״̬��
			��������ɹ���������־���ҵ�"Components::process(): Found all the components!"��
			�κ��������������־������"ERROR"�ؼ��֣����ݴ����������Խ����
			(����ο�: http://www.kbengine.org/docs/startup_shutdown.html)


##�����ͻ���:

	ֱ����ue4�༭���������߱��������


##���ɵ�������(��ѡ):
	
	�����ʹ��Recastnavigation��3D����Ѱ·��recastnavigation���ɵĵ�������Navmeshs�������ڣ�
		kbengine\kbengine_demos_assets\res\spaces\*

	��ue4��ʹ�ò�����ɵ�������Navmeshs��:
		����


##�ṹ�����壺

	KBE�����UE4�ͷ�����֮��Ĺ�ϵ��
		������������������������֮���������Ϣ�����˺ŵ�½/�ǳ����̡��ɷ����֪ͨ�����������߼�ʵ�塢ά��ͬ�����߼�ʵ���������ݵȵȡ�
		�����UE4�������ĳЩ�¼�������UE4ͼ�β㣬ͼ�β�����Ƿ���Ҫ����ĳЩ�¼�������ݽ�����Ⱦ���֣����磺�������ĳ��NPC���ƶ��ٶ����ӡ�HP�仯����
			UE4ͼ�β㽫�����¼�����������㣨���磺����ƶ��ˡ�����˸��ťUI��������߼��ű�������Ƿ���Ҫ��ת���������ȵȡ�

	clientapp��
		��KBE����ϵ�г����һ���ͻ���APP�����а���KBE�ͻ��˲���ĳ�ʼ�������ٵȵȡ�

	Plugins\KBEnginePlugins��
		KBE�ͻ��˲���ĺ��Ĳ���롣

	Source\kbe_scripts��
		KBE�ͻ��˵��߼��ű����ڴ�ʵ�ֶ�Ӧ����˵�ʵ��ű���ʵ��ı������ݽṹ�����ܿͻ����жϵȣ���

		kbe_scripts\Account��
			��ӦKBE����˵��˺�ʵ��Ŀͻ��˲��֡�

		kbe_scripts\Avatar��
			��ӦKBE����˵�����Ϸ�����ʵ��Ŀͻ��˲��֡�

		kbe_scripts\Monster��
			��ӦKBE����˵Ĺ���ʵ��Ŀͻ��˲��֡�

		kbe_scripts\interfaces\��
			��ӦKBE��entity_defs\interfaces����������ģ�顣

	Source\ue4_scripts��
		ue4ͼ�β㣨����������Ⱦ��UI�����岿��������ģ�͡�����ģ�͡�һ�й�����ʾ�Ķ����ȵȣ���

		ue4_scripts\PlayerCharacter��
			��ǰ�ͻ�������ɴ˽ű�����ģ�Ͷ����ȱ��ֲ��֡�

		ue4_scripts\GameEntity��
			�����ǹ��ﻹ��������Ҷ��ɴ˽ű�����ģ�Ͷ����ȱ��ֲ��֡�

		ue4_scripts\GameModeLogin:
			�����½����������KBE�������¼�ͬʱ��������һЩ�¼���

		ue4_scripts\GameModeSelectAvatar:
			�����ɫѡ�˳���������KBE�������¼�ͬʱ��������һЩ�¼���

		ue4_scripts\GameModeWorld:
			����KBE�������¼�ͬʱ��������һЩ�¼���������Ϸ�д��ͼ�򸱱�����Ⱦ��ű������磺���𽫾����3D���ﴴ���������С�

	Content\LoginScene:
		��ʼ�������ɴ�����������Ϸ��

	Content\SelectAvatarScene
		��ɫѡȡ������

	Content\WorldScene
		��Ϸ�д��ͼ/����������

##��ʾ��ͼ:
![screenshots1](http://www.kbengine.org/assets/img/screenshots/ue4_demo1.jpg)
![screenshots2](http://www.kbengine.org/assets/img/screenshots/ue4_demo2.jpg)
![screenshots3](http://www.kbengine.org/assets/img/screenshots/ue4_demo3.jpg)
