#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\andre\Documents\GitHub\Labs\Lab2\Трёхзназные числа\Трёхзначные числа.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 1;
			int j = 2;
			int k = 3;

			bool actual = fun(i, j, k);

			Assert::IsTrue(actual);
		}

		TEST_METHOD(TestMethod2)
		{
			int i = 1;
			int j = 1;
			int k = 1;

			bool actual = fun(i, j, k);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(TestMethod3)
		{
			int i = 1;
			int j = 2;
			int k = 1;

			bool actual = fun(i, j, k);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(TestMethod4)
		{
			int i = 4;
			int j = 7;
			int k = 6;

			bool actual = fun(i, j, k);

			Assert::IsTrue(actual);
		}

		TEST_METHOD(TestMethod5)
		{
			int i = 9;
			int j = 9;
			int k = 8;

			bool actual = fun(i, j, k);

			Assert::IsFalse(actual);
		}
	};
}
