#pragma once
#define EXAMPLELIBRARY_IMPORT __declspec(dllimport)
#define EXAMPLELIBRARY_EXPORT __declspec(dllexport)
#include <string>
#include <vector>

EXAMPLELIBRARY_IMPORT void ExampleLibraryFunction();

class EXAMPLELIBRARY_EXPORT TESTCLASS 
{
private:
	int num;
public:
	int GetNum() { return num; }
	TESTCLASS() { num = rand() % 100; }
};

