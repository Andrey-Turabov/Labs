#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\andre\Documents\GitHub\Labs\Lab2\Фибоначчи\Фибоначчи.cpp "

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFidonacci
{
	TEST_CLASS(TestFidonacci)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 3;

			int actual = Fibonacci(n);

			Assert::AreEqual(2, actual);
		}

		TEST_METHOD(TestMethod2)
		{
			int n = 10;

			int actual = Fibonacci(n);

			Assert::AreNotEqual(40, actual);
		}

		TEST_METHOD(TestMethod3)
		{
			int n = 10;

			int actual = Fibonacci(n);

			Assert::AreEqual(55, actual);
		}

		TEST_METHOD(TestMethod4)
		{
			int n = 23;

			int actual = Fibonacci(n);

			Assert::AreEqual(28657, actual);
		}

		TEST_METHOD(TestMethod5)
		{
			int n = 15;

			int actual = Fibonacci(n);

			Assert::AreEqual(610, actual);
		}

	};
}
