///
/// ����SHAPE�Ļ��࣬���������SHAPE�Ĺ�ͬ����
///
class CObject
{
public:
	/// object������
	enum 
	{
		OBJ_ALL = -1, ///< monster && player
		OBJ_INVALID = 0,
		OBJ_REGION,
		OBJ_PLAYER,
		OBJ_MONSTER
	};
public:
	Object() : 
		m_type( OBJ_INVALID )
	{
	}

	virtual ~Object() { }

	/// ����
	virtual void Decode( DBReadSet &db );
protected:
	long m_type;
	CGUID m_guid;
};

