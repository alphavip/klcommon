///
/// CConnector���װ�������ӵ�ϸ�ڣ���������������
///
class CConnector
{
public:
	typedef msgQueue MsgQueueType;
public:
	/// ��ʼ������ײ�
	bool Init();

	/// �ͷŲ������ر�����㣬�ر������߳�
	void Release();

	/// ����GS���������ʧ�ܻὨ�������̣߳�
	/// �����ɹ�������Ϣ������ѹ�������ɹ���Ϣ 
	bool Connect( const std::string &ip, unsigned short port );

	/// ��ȡ���յ���������Ϣ
	size_t GetAllMessage( MsgQueueType &msgs );	

private:
	CServer *m_pServer;
};

