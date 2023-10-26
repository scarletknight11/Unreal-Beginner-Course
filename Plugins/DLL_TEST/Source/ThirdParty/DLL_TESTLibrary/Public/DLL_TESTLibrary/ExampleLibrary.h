#pragma once
#define EXAMPLELIBRARY_IMPORT __declspec(dllimport)
#define EXAMPLELIBRARY_EXPORT __declspec(dllexport)

EXAMPLELIBRARY_IMPORT void ExampleLibraryFunction();

class EXAMPLELIBRARY_EXPORT TESTCLASS 
{
private:
	int num;
public:
	int GetNum();
	TESTCLASS() { num = rand() % 100; }
};

