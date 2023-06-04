#include "pch.h"

int main()
{
	HANDLE hMutex = ::CreateMutex(nullptr, true, TEXT("SingleInstanceMutex"));

	if (!hMutex || GetLastError() == ERROR_ALREADY_EXISTS)
	{
		::MessageBox(nullptr, TEXT("Failed to create mutex"), TEXT("Single Instance App"), MB_OK);
		return -1;
	}
	getchar();
	::CloseHandle(hMutex);
	return 0;
}