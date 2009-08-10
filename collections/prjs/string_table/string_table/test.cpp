///
///
///
#include "string_table_impl.h"
#include <stdio.h>

int main()
{
	StringTableImpl st;
	st.load( "st_set.xml" );
	ST_COLLECT( StringTableImpl::ST_RGN, "ˮ������" );
	ST_COLLECT( StringTableImpl::ST_RGN, "ˮ����" );
	ST_COLLECT( StringTableImpl::ST_RGN, "ʷX��" );

	printf( "%s\n", ST_CONVERT( StringTableImpl::ST_RGN, "ˮ����" ).c_str() );
	st.save();
	return 0;
}
