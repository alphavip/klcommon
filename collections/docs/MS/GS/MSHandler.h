///
/// ά��GS��MS��ͨѶ���
/// 
namespace MServer
{
	class CMSHandler
	{
	private:
		///  MS�ṹ
		struct MSInfo
		{
			long id;
			long socketid;
			// ���ܻ���Ӹ������
		};
	public:
		/// ��ʼ���������
		bool Init();

		/// ������������
		void Release();

		/// ����MS����Ϣ����
		void ProcessMessage();

		/// �µ�MS�����ϣ��ú�����������ݵ�MS
		void OnConnect( CMessage *msg );

		/// MS�Ͽ�
		void OnDisconnect( long socketid );

		/// ����ID��ȡSocket ID
		long GetSocketByID( long id );

		/// ����Socket ID��ȡID
		long GetIDBySocket( long socket );
	private:
		const MSInfo *GetMSByID( long id );
		const MSInfo *GetMSBySocket( long socketid );
	private:
		/// �ṩ��ID��SOCKET�ֱ��ȡMSInfo������
		typedef std::vector<MSInfo> MSInfoListType;
		typedef std::map<long, size_t> MSIDTable;	
		typedef std::map<long, size_t> MSSocketTable;
		MSInfoListType m_MSInfos;
		MSIDTable m_MSIDs;
		MSSocketTable m_MSSockets;
	};

}
