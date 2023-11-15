#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 rec/lab 6.1 rec.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test[22] = { -7, -10, 7, 2, -4, -4, -10, -11, 4, -11, -13, -13, -14, -8, 1, -5, -11, -4, 0, 4, -5, 7 };
			int a;
			a = Count(test, 22, 0);
			Assert::AreEqual(a, 22);
		}
	};
}
