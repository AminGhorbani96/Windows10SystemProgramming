#include "pch.h"

int main()
{
	const wchar_t* source = TEXT("Hello Wordl !;");
	std::wcout << source << std::endl;
	wchar_t unSafeBuffer[5]; // +1 to accommodate for the null terminator
	wcscpy(unSafeBuffer, source);

	std::wcout << TEXT("unSafeBuffer[5] : ") << unSafeBuffer << std::endl;


	WCHAR* cchBuffer = (WCHAR*)malloc(5 * sizeof(WCHAR));
	::StringCchCopy(cchBuffer, 5, source);
	std::wcout << TEXT("cchBuffer[5] : ") << cchBuffer << std::endl;

	WCHAR* safeBuffer = (WCHAR*)malloc(5 * sizeof(WCHAR));
	wcscpy_s(safeBuffer, 5, source); // 5 is char numbers no bytes

	std::wcout << TEXT("safeBuffer[5] : ") << safeBuffer << std::endl;
	free(safeBuffer);


	return 0;
}