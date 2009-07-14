///
/// ����GS��MS���������ĸ�������
/// ���ļ�����GS��MS�����ļ���������Ŀ¼�ĽṹΪ��
/// ./GameServer
/// ./MonsterServer
/// ./ms_shared/OperTypeDef.h
///
#ifndef MS_OPERTYPE_DEF_H_
#define MS_OPERTYPE_DEF_H_

namespace MS
{
	/// ͬ������(SYN_DATA)����
	enum SyncDataType
	{
		SDT_REGION,
		SDT_SKILL,
		SDT_MONSTERLIST,
		SDT_PLAYERPOS,
		SDT_MAX
	};

	/// ͬ������(SYN_ACT)���ͣ���ֵ��Ҫ��ͬ�����ݲ�ͬ
	enum SyncActType
	{
		SAT_WAKEUP = SDT_MAX,
	};

	/// MS��������
	enum RequestType
	{
		RT_MOVE,
		RT_USESKILL
	};

	/// GS��ӦMS��������
	enum ResponseType
	{
		RT_RES_MOVE,
		RT_RES_USESKILL,
	};
}

#endif

