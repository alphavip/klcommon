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
	����AI���ѣ���������ֱ����MS�ϼ�⻽�ѣ�Ŀǰ����ֱ������GS�ϵĻ���
		SAT_MONSTER_WAKEUP
		monster_id(CGUID)
		rgn_id(CGUID) : ���볡��������MS�ڲ��ҹ���ʱ���
	���ﱻ��������������ģ�鴥�������ڱ����ֶ���һ����ζ�Ź��ｫ����ս��״̬
		SAT_MONSTER_HURT
		monster_id(CGUID)
		rgn_id(CGUID)
		attacker_type(long)
		attacker_id(CGUID)
		hurt(long) : Ϊ-1ʱ��ʾ��ɱ��
	����ʹ�ü��ܽ������ɿ���ͨ����MS���漼�ܶ���ʱ��ŵ�MS����
		SAT_MONSTER_SKILLEND
		monster_id(CGUID)
		rgn_id(CGUID)
	ɾ��������ڲ���Ҫ�����Ĺ����������һ��ʱ����ɾ��
		SAT_MONSTER_DEL
		monster_id(CGUID)
		rgn_id(CGUID)
	����������������ʱ���������������
		SAT_MONSTER_REBORN
		raw_data(monster)

 MS��GS��ͬ����������Ϊ����(REQUEST)���෴��GS������Щ����ķ�����Ϊ��Ӧ(RESPONSE)��
���е����������
	�����ƶ��������ƶ�ʱ��Ҫ����һ���ƶ����󣬵��õ���Ӧ��������ı�����
		RT_MOVE
		monster_id(CGUID)
		rgn_id(CGUID)
		dir(long) : Ĭ�ϰ��մ˷����ƶ�һ��
	����ʹ�ü��ܣ�����ʹ�ü������󣬼�����GS����
		RT_USESKILL
		monster_id(CGUID)
		rgn_id(CGUID)
		skill_id(long)
		skill_level(long)
		target_id(CGUID)
	����ı�״̬
		RT_CHANGESTATE
		monster_id(CGUID)
		rgn_id(CGUID)
		state(long)
���еĻ�Ӧ������
	�����ƶ�
		RT_RES_MOVE
		monster_id(CGUID)
		rgn_id(CGUID)
		pos_x(float)
		pos_y(float)
	����ʹ�ü��ܣ���Ҫ���ڹ���ʹ�ü���ʧ��ʱ�Ĵ���
		RT_RES_USESKILL
		monster_id(CGUID)
		rgn_id(CGUID)
		ret(byte) : 1���ɹ���0��ʧ�ܣ�ʧ��ʱ��Ҫ��������AI

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
		SAT_MONSTER_WAKEUP = SDT_MAX,
		SAT_MONSTER_HURT,
		SAT_MONSTER_SKILLEND,
		SAT_MONSTER_DEL,
		SAT_MONSTER_REBORN,
		SAT_PLAYER_MOVE,
		SAT_PLAYER_LEAVERGN,
		SAT_PLAYER_ENTERRGN
	};

	/// MS��������
	enum RequestType
	{
		RT_MOVE,
		RT_USESKILL,
		RT_CHANGESTATE,
	};

	/// GS��ӦMS��������
	enum ResponseType
	{
		RT_RES_MOVE,
		RT_RES_USESKILL,
	};
}

#endif

