
#include "pch.h"

int main()
{
	HANDLE hMutex = CreateMutex(NULL, TRUE, TEXT("MyMutext"));
	if (hMutex == NULL || GetLastError() == ERROR_ALREADY_EXISTS) {
		printf("THere is one instance of this programm \n");

	}
	else
	{
		printf("Running ...");
	}

	getchar();
	CloseHandle(hMutex);
	return 0;
}