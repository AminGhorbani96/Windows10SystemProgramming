#include "pch.h"

int main(int argc, const char* argv[])
{

	if (argc < 2)
	{
		printf("Not valid input \n");
		return(-1);
	}

	int message = atoi(argv[1]);
	LPWSTR buffer;
	DWORD buffersize = FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, 0, message, 0, (LPWSTR)&buffer, 0, nullptr);

	if (buffersize)
	{
		printf("Error Message is : %ws\n", buffer);
		::LocalFree(buffer);
	}
	else
	{
		printf("No such error find\n");
	}

}