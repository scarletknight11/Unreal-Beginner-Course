#include "pch.h"

TestClass::TestClass()
{
	TestString = "This is some string";
}

std::string TestClass::GetName()
{
	return TestString;
}
