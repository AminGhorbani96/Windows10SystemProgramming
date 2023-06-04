
#include "pch.h"

int main(int argc, char* argv[])
{
	HANDLE hProcess = ::OpenProcess(PROCESS_TERMINATE, FALSE, atoi(argv[1]));

	if (!hProcess)
	{
		printf("Couldn't Retrive process handle Error Code : %d\n", GetLastError());
		return -1;
	}

	BOOL closeState = ::TerminateProcess(hProcess, 1);
	if (!closeState)
	{
		printf("Couldn't Terminate process handle Error Code : %d\n", GetLastError());
		return -1;
	}
	
	printf("Process Killed \n");
	return 0;
}