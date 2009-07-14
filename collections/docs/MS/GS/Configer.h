///
/// ����ά��һЩ������Ϣ
///
namespace MServer
{
	/// ��ȡ������������
	class CServerConfiger
	{
	public:
		struct Addr
		{
			std::string ip;
			unsigned short port;
		};
		struct ServerParam
		{
			Addr addr;
			long nMaxFreeSockOperNum;
			// �����������绷���Ĳ���
		};

	public:
		/// ��ȡGS�µĶ���MS����������
		bool Load();

		const ServerParam &GetCfg() const
		{
			return m_cfg;
		}
	private:
		ServerParam m_cfg;
	};

	/// ά��������������
	class CRgnDisConfiger
	{
	public:
		enum
		{
			NOT_DIS = -1
		};
	public:
		/// ��������
		void Decode( DBReadSet &db );

		/// ��ȡ����ģ�屻�����MS ID��û���ҵ�����NOT_DIS
		/// �ú�����Ϊ�����ж������Ƿ���Ҫ���͵�MS�ϱ�ʹ��
		long GetDisMS( long rgn_id );

	private:
		/// ��������ID��MS ID��ӳ��
		void BuildRgnMSTable();
	private:
		/// ������MS ID��ӳ�䣬�ɷ����Ժ��ѯ
		typedef std::map<long, long> RgnID2MSID;
	private:
		GSRgnInfo m_rgnCfg;
		RgnID2MSID m_rgnMSTable;
	};
}

