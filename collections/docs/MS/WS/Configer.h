///
/// �ṩ��ȡ/�������GS�µĸ���MS�ĳ����������ã��������ļ��������£�
/*
 <!--setup/rgn_dispatch.xml-->
 <RgnDisConfig>
 	<GS id="1">
		<!--��̬���õĳ���-->
		<Static>
			<MS id="1">
				<Rgn id="60101" name="ѧԺ"/>
				<Rgn id="10101" name="" />
			</MS>
			<MS id="2">
				<Rgn id="10201" name="" />
				<Rgn id="20101" name="" />
			</MS>
		</Static>
		<!--��̬���õĳ�����һ��Ϊ����-->
		<Dynamic>
			<Rgn id="20001" name="���ݹ�"/>
		</Dynamic>
	</GS>
	<GS id="2">
		<Static>
			<MS id="1">
				<Rgn id="30101" name=""/>
			</MS>
		</Static>
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

