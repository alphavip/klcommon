///
/// �ṩͬ��������������
///
namespace MServer
{
	namespace SyncOper
	{
		/// ͬ���������ݣ�һ�����ڳ�������ʱ�ı���
		/* �ú�������ʵ�֣�
		 	long ms_id = GetInst( CRgnDisConfiger ).GetDisMS( pRegion->GetID() );
			if( ms_id == NOT_DIS ) return ;
			if( ms_id == DYNA_DIS )
			{
				GetInst( CCacheData ).AddRegion( ms_id, pRegion->GetExID() );	
			}
			else
			{
				GetInst( CCacheData ).AddRegion( pRegion->GetExID() );
			}
		 */
		void SyncRegion( CServerRegion *pRegion );

		/// ͬ���������ݣ����ڹ��ﴴ��ʱ�ı��룬ʵ��ͬSyncRegion
		void SyncMonster( CMonster *pMonster );

		/// ͬ�����ܾ�̬����
		void SyncSkillCfg( /*ʵ�ִ���*/ );

		/// ͬ������ƶ�
		void SyncPlayerPos( const CGUID &player, float pos_x, float pos_y, long dir );

		/// ͬ������뿪����
		void SyncPlayerLeaveRgn( const CGUID &player, bool del );

		/// ͬ����ҽ��볡��
		void SyncPlayerEnterRgn( const CGUID &player, const CGUID &rgn, bool add );	

		/// ����������ͬ������л��������ú�������ͬ���뿪��������ͬ�����볡��
		/// ���漰������������жϣ��ϲ��ֱ�ӵ��øú����������л�����ʱ��MS
		/// ��Ӱ��
		/* �ú�������ʵ��Ϊ��
		 	bool del ;
			if( �¾ɳ�����ͬһMS ) del = false;
			else del = true;
			if( �ɳ������� )
				SyncPlayerLeaveRgn( player->GetExID(), del );
			SyncPlayerEnterRgn( player->GetExID(), new_rgn->GetExID(), del );
		 */
		void SyncPlayerChangeRgn( CPlayer *player, CServerRegion *old_rgn,
				CServerRegion *new_rgn );
	}
}

