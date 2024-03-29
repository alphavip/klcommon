///
/// Some usful win32 functions
///
#ifndef ___WIN32_FUNCS_H_
#define ___WIN32_FUNCS_H_

#include <windows.h>
#include <string>
#include <vector>

namespace Win32
{
	struct ProcessInfo
	{
		unsigned long id;
		std::string name;
	};
	typedef std::vector<ProcessInfo> ProcessListType;

	size_t GetProcessList( ProcessListType *pl, bool ignore_same );

	bool ShutdownSystem( bool safe );
}

#endif

