///
/// ����ά��һЩ������Ϣ
///
namespace MServer
{
	class CConfiger
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
	};
}
