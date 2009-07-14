///
/// �ṩ��ȡ/�������GS�µĸ���MS�ĳ����������ã��������ļ��������£�
/*
 <RgnDisConfig>
 	<GS id="1">
		<MS id="1">
			<Rgn id="60101" name="ѧԺ"/>
			<Rgn id="10101" name="" />
		</MS>
		<MS id="2">
			<Rgn id="10201" name="" />
			<Rgn id="20101" name="" />
		</MS>
	</GS>
	<GS id="2">
		<MS id="1">
			<Rgn id="30101" name=""/>
		</MS>
	</GS>
 </RgnDisConfig>	
*/

namespace MServer
{
	class CConfiger
	{
	private:
		/// <GS id, GS Rgn list>
		typedef std::map<long, GSRgnInfo> GSRgnTableType;	
	public:
		/// ��ȡ����
		bool Load();

		/// �������ø�ָ����GS
		/// ���ҵ�gs_id��Ӧ��GSRgnInfo��Ȼ�����ýṹ����
		void Encode( long gs_id, DBWriteSet &db );
	private:
		GSRgnTableType m_GSRgnCfg;
	};
}

