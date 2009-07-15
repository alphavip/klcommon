///
/// ������̬�������ýṹ
///
namespace MServer
{
	/// ���õ���MS�ϵĳ����б�
	struct MSRgnInfo
	{
		long ms_id;
		/// ���泡��ģ��ID
		std::vector<long> rgn_list;

		/// ����ýṹ������ṹΪ��
		/*
		  ms_id(long),
		  rgn_list_size(long),
		  rgn_id1,
		  rgn_id2,
		  ...
		*/
		static void Encode( const MSRgnInfo &ms_rgn, DBWriteSet &db );

		/// ����ýṹ
		static void Decode( DBReadSet &db, MSRgnInfo &ms_rgn );
	};

	/// ���õ���GS�϶�Ӧ��MS�б�
	struct GSRgnInfo
	{
		/// <ms_id, ...>
		std::map<long, MSRgnInfo> ms_rgn_table;

		/// ��̬����ĳ����б�
		std::vector<long> dyna_rgn_list;

		/// ����ýṹ������ṹΪ��
		/*
		 ms_rgn_table_size(long),
		 ms_rgn_info1,
		 ms_rgn_info2,
		 ...
		 dyna_rgn_list_size(long),
		 dyna_rgn_id1,
		 dyna_rgn_id2,
		 ...
		*/
		static void Encode( const GSRgnInfo &gs_rgn, DBWriteSet &db );

		/// ����ýṹ���ڽ�������У�����MSRgnInfo���MS ID��Ϊmap��key
		static void Decode( DBReadSet &db, GSRgnInfo &gs_rgn );
	};
}

