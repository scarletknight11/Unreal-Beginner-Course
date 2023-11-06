#include <Windows.h>
#include "Public/DLL_TESTLibrary/ExampleLibrary.h"
#define EXAMPLELIBRARY_EXPORT __declspec(dllexport)


EXAMPLELIBRARY_EXPORT void ExampleLibraryFunction()
{
#if defined _WIN32 || defined _WIN64
	MessageBox(NULL, TEXT("Loaded ExampleLibrary.dll from Third Party Plugin sample."), TEXT("Third Party Plugin"), MB_OK);
#else
    printf("Loaded ExampleLibrary from Third Party Plugin sample");
#endif
}

int TESTCLASS::GetNum()
{
 	return num;
}