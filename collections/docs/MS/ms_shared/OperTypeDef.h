///
/// ����GS��MS���������ĸ�������
/// ���ļ�����GS��MS�����ļ���������Ŀ¼�ĽṹΪ��
/// ./GameServer
/// ./MonsterServer
/// ./ms_shared/OperTypeDef.h
///
#ifndef MS_OPERTYPE_DEF_H_
#define MS_OPERTYPE_DEF_H_
/*
 GS��MS��ͬ������(SYN_OPER)�����������ͣ�
 - ͬ�����ݣ�һ���ǵ��������ݣ���Ϊ��̬���ã�
 - ͬ��������һ����ĳ�ֲ������ᵼ��MS������һЩAI���������ͣ�Ҳ���һЩ�������ݡ�

���е�ͬ������������
	�������ݣ���������ʱ���볡��
		SDT_REGION
	���ܲ������ã�����������ʱ���뾲̬�������ã����֣�
		SDT_SKILL
	�����������ã�monsterlist.ini
		SDT_MONSTERLIST
	�������ԣ����ﴴ��ʱ�ı���
		SDT_MONSTER
	����ƶ��������ĸı����꣬MS���������л�
		SAT_PLAYER_MOVE
		player_id(CGUID)
		pos_x(float)
		pos_y(float)
		dir(long)
	����뿪������������Ӧ��MS�ϻὫ����Ƴ��ó�����
		SAT_PLAYER_LEAVERGN
		player_id(CGUID)
		del_flag(byte) : ָʾ�Ƿ���Ҫɾ������ң�������л�����ʱ��GS�Ƚ�
		������������MS�Ƿ���ͬ������ͬ��ָ���ñ�־������˳���ϷҲָ���ñ�־	
	��ҽ��볡����������Ӧ��MS�Ὣ��Ҽ����³���
		SAT_PLAYER_ENTERRGN
		player_id(CGUID)
		region_id(CGUID)
		pos_x(float)
		pos_y(float)
		add_flag(byte) : ָʾ�Ƿ���Ҫ�������ң�һ���ʾMS��û�д����
		raw_data : �����ϸ����
		
*/
namespace MServer
{
	/// ͬ������(SYN_DATA)����
	enum SyncDataType
	{
		SDT_REGION,
		SDT_SKILL,
		SDT_MONSTERLIST,
		SDT_MONSTER,
		SDT_MAX
	};

	/// ͬ������(SYN_ACT)���ͣ���ֵ��Ҫ��ͬ�����ݲ�ͬ
	enum SyncActType
	{
		SAT_WAKEUP = SDT_MAX,
		SAT_PLAYER_MOVE,
		SAT_PLAYER_LEAVERGN,
		SAT_PLAYER_ENTERRGN
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

