///
/// ���淢��MS�ľֲ����ݵĹ����ࡣ
/// ����MS�����ݰ�����
/// ͬ�����ݣ���̬����
/// ��̬���ݣ�ͨ��ֻ��Ҫһ�θ��£��ְ�����
/// ȫ�����ݣ�����MS����Ҫ�����ݣ�����ﾲ̬�������á����ܾ�̬���ã�
/// �ֲ����ݣ�����MSӵ�е����ݣ����ض��ĳ������ó����ϵĹ���ʵ����
///
namespace MServer
{
	///
	/// ������Ӳ�������������ָ��MS�������ݣ����MSδ���ӣ��ͻ�
	/// �������ݡ�ɾ����������������ɾ����Ϣ��
	///
	class CCacheData
	{
	private:
		typedef std::vector<CGUID> RgnListType;
		/// MS���ֵĳ����б�<id, rgn_list>
		typedef std::map<long, RgnListType> RgnTableType;
		typedef std::vector<CGUID> MonsterListType;
		/// MS���ֵĹ����б�<id, monster_list>
		typedef std::map<long, MonsterListType> MonsterTableType;
		/// ����������MS ID��ӳ��
		typedef std::map<CGUID, long> Guid2Long;
	public:
		/// ��ӻ��泡��
		void AddRegion( long id, const CGUID &rgn );

		/// ��ָ��IDʱ��Ϊ��̬��ӳ�������Ҫ����Ӹ�����
		/// �ø����ᱻ�����ڸ��س������ٵ�MS
		long AddRegion( const CGUID &rgn );

		/// ɾ������
		void DelRegion( const CGUID &rgn );

		/// ��ӻ������
		void AddMonster( long id, const CGUID &monster );

		// ɾ������
		void DelMonster( const CGUID &monster );

		/// ���ͻ��泡����ָ��MS�����ͺ󲢲������������
		void SendRegions( long socketid );

		/// ���ͻ�������ָ��MS
		void SendMonsters( long id );	
	private:
		void SendRegion( long socketid, const CGUID &rgn );
		void SendMonster( long socketid, const CGUID &monster );
	private:
		RgnTableType m_RgnTable;
		MonsterTableType m_MonsterTable;
		Guid2Long m_Rgn2ID;
		Guid2Long m_Monster2ID;
	};
}

