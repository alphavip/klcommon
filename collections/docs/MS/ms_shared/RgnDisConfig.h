///
/// ������̬�������ýṹ
///
namespace MServer
{
	/// ���õ���MS�ϵĳ����б�
	struct MSRgnInfo
	{
		long ms_id;
		std::vector<long> rgn_list;
	};

	/// ���õ���GS�϶�Ӧ��MS�б�
	struct GSRgnInfo
	{
		std::map<long, MSRgnInfo> ms_rgn_table;
	};
}
