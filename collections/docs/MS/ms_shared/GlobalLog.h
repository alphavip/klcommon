///
/// ȫ����־�࣬��Ҫ���ڼ�¼һЩ����������־��
/// ���ļ�λ�ڹ���Ŀ¼�У���GS��MS����֮��
///
class CGlobalLog
{
public:
	/// д����־�ļ�
	void Write( const char *fmt, ... );

	/// д��UI
	void WriteToUI( const char *fmt, ... );

	/// д����־������
	void WriteToLOGS( const char *fmt, ... );
};
