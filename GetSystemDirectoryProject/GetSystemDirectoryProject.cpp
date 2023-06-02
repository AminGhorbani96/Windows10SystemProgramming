
#include "pch.h"

int main()
{
	WCHAR systemDir[MAX_PATH];
	INT status = ::GetSystemDirectory(systemDir, MAX_PATH);

	if (status == 0)
	{
		std::wcout << TEXT("Error Code : ") << GetLastError() << std::endl;
		return -1;
	}

	std::wcout << TEXT("System Directory : ") << systemDir << std::endl;

	return 0;
}