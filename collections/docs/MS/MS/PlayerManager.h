///
/// ȫ�ֹ�����ҵ���
///
class CPlayerManager : public kl_common::ObjManager
						<CGUID, CPlayer*, stdext::hash_map<CGUID, CCPlayer*, hash_map_compare> >
{
};

