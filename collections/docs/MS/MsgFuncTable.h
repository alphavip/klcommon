///
/// ����������Ϣ�ĺ�����
/// 
class CMsgFuncTable
{
public:
	/// ������Ϣ�ĺ���ԭ��
	typedef void (*FuncType)( CMessage *msg );
private:
	/// ����������
	typedef std::map<long, FuncType> FuncTableType;
public:
	/// ��Ӻ�����������
	void AddFunc( long id, FuncType func );

	/// Ĭ����ȡ��Ϣ��һ��LONG�����ݣ�Ȼ���ں������в���
	/// ��Ӧ�ĺ���������֮��
	virtual void Execute( CMessage *msg );

	/// ����������
	virtual void BuildFuncTable() = 0;
protected:
	FuncTableType m_Funcs;
};

/// ��������ͬ�������ĺ�����
class CSyncRecvMgr : public CMsgFuncTable
{
public:
	void BuildFuncTable();
};

/// �������������Ӧ�ĺ�����
class CResRecvMgr : public CMsgFuncTable
{
public:
	void BuildFuncTable();
};

