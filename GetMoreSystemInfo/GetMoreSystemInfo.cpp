#include "pch.h"

int main()
{
	SYSTEM_INFO si;
	::GetNativeSystemInfo(&si);
	printf(" >> System Native Informaion : \n");
	printf("dwPageSize : %d\n", si.dwPageSize);
	printf("MinimumApplicationAddress: 0x%p\n", si.lpMinimumApplicationAddress);
	printf("MaximumApplicationAddress : 0x%p\n", si.lpMaximumApplicationAddress);
	printf("NumberOfProcessors : 0x%d\n", si.dwNumberOfProcessors);
	printf("ProcessorType : 0x%d\n", si.dwProcessorType);
	printf(" >> ComputerName : \n");

	WCHAR computerName[MAX_COMPUTERNAME_LENGTH] = L"";
	DWORD bufferSize = sizeof(computerName);

	BOOL state = ::GetComputerName(computerName, &bufferSize);

	if (!state)
	{
		printf(" Error >> Couldn't Retrive Computer Name. Error Code is  : %d\n", GetLastError());
	}
	else
	{
		printf("Computer Name is : %ws\n", computerName);
	}

	WCHAR winDir[MAX_PATH] = L"";
	UINT winDirState = ::GetWindowsDirectory(winDir, MAX_PATH);
	if (!winDirState)
	{
		printf(" Error >> Couldn't Retrive Windows Directory. Error Code is  : %d\n", GetLastError());
	}
	else
	{
		printf("Windir : %ws \n", winDir);
	}

	LARGE_INTEGER performanceCount;
	BOOL pCounterState = ::QueryPerformanceCounter(&performanceCount);

	if (!pCounterState)
	{
		printf(" Error >> Couldn't Retrive PerformanceCounter. Error Code is  : %d\n", GetLastError());
	}
	else
	{
		printf("PerformanceCounter : %d \n", pCounterState);
	}

	return 0;
}