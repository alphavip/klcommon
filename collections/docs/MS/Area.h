///
/// ��Ҫ�ṩ�ڳ����ϲ���ָ��SHAPE��ΧSHAPE������
///
class CArea
{
public:
	typedef std::vector<CGUID> GuidSetType;
public:
	/// ���SHAPE����������
	void AddShape( long type, const CGUID &guid );

	/// ɾ��һ��SHAPE
	void RemoveShape( long type, const CGUID &guid );

	/// ��ȡ������ָ�����͵�����SHAPE
	size_t GetShapes( long type, std::vector<CShape*> &shapelist );
private:
	/// �������ϵĹ���
	GuidSetType m_Monsters;

	/// �������ϵ����
	GuidSetType m_Players;

	/// �������ڳ����ϵ�����
	long m_X;
	long m_Y;

	/// ���������ڳ���
	CRegion *m_pFather;
};

