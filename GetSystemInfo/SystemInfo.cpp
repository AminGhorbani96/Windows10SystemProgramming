#include "pch.h"

int main()
{
	// link : https://learn.microsoft.com/en-us/windows/win32/api/sysinfoapi/nf-sysinfoapi-getnativesysteminfo
	SYSTEM_INFO si;
	::GetNativeSystemInfo(&si);

	printf("dwPageSize : %d\n", si.dwPageSize);
	printf("lpMinimumApplicationAddress : 0x%p\n", si.lpMinimumApplicationAddress);
	printf("lpMaximumApplicationAddress : 0x%p\n", si.lpMaximumApplicationAddress);
	printf("dwNumberOfProcessors : %d\n", si.dwNumberOfProcessors);
	printf("dwProcessorType : %d\n", si.dwProcessorType);
	return 0;

}