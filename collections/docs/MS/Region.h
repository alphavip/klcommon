///
/// ����������Ҫ���泡���赲
/// 
class CRegion : public CObject
{
public:
	/// �赲����
	enum BlockType
	{
		BLOCK_NONE, 
		BLOCK_CANFLY,
		BLOCK_UNFLY,
		BLOCK_MONSTER,
		BLOCK_SHAPE,
		BLOCK_AIM
	};

	/// ���ӽṹ
	struct tagCell
	{
		WORD Block; ///< Ԥ��һЩ�ռ䱣��GS�ϵ���Ϣ
		WORD Switch; 
	};

	typedef stdext::hash_map<CGUID, CMonster*, hash_guid_compare>
		MonsterListType;
	typedef stdext::hash_map<CGUID, CPlayer*, hash_guid_compare>
		PlayerListType;
public:
	CRegion();

	/// �ͷ���Դ���ڴ棩
	~CRegion();

	/// ����
	virtual void Decode( DBReadSet &db );

	/// ��ȡָ�������赲����
	unsigned char GetBlock( long x, long y );

	/// �����赲
	void SetBlock( long x, long y, unsigned char b );

	/// ��ȡָ��ID��SHAPE
	CShape *FindShape( const CGUID &guid, long type );

	/// ��ȡָ��SHPAE��Χ���ض�����SHAPE�б�
	/// type����CObject::OBJ_ALLʱ���������
	size_t FindAroundShape( CShape *self, long type, std::vector<CShape*> &retShapes );
	
	/// ���һ��SHAPE
	void AddShape( long type, CShape *shape );

	/// �Ƴ�һ��SHAPE
	void RemoveShape( long type, const CGUID &shape_id );
private:
	long m_RgnType; ///< ��������
	long m_Width;
	long m_Height;
	unsigned char m_Country;
	tagCell *m_CellArray; ///< �赲����
	CArea *m_AreaArray; ///< ��������
	MonsterListType m_Monsters;
	PlayerListType m_Players;
};

