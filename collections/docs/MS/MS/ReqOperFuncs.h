///
/// �ṩ����(REQUEST)�����ĺ�����
///
namespace ReqOper
{
	/// ��������ƶ�
	void ReqMonsterMove( const CGUID &monster, const CGUID &rgn, long dir );

	/// �������ʹ�ü���
	void ReqMonsterUseSkill( const CGUID &monster, const CGUID &rgn, 
			long skill_id, long skill_lvl, const CGUID &target_id );
}
