///
/// ȫ�ֹ���������
///
class CMonsterManager : public kl_common::ObjManager
						<CGUID, CMonster*, stdext::hash_map<CGUID, CMonster*, hash_map_compare> >
{
};
