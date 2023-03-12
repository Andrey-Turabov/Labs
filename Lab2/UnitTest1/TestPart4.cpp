#include "pch.h"
#include "CppUnitTest.h"
#include "string"
#include "C:\Users\andre\Documents\GitHub\Labs\Lab2\Кратные трём\Part4.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int d1=-3;
			int m = 10;
			string True = "Верно";

			string actual = func1(d1, m);

			Assert::AreEqual(True, actual);
		}

		TEST_METHOD(TestMethod2)
		{
			int d1 = 3;
			int m = 10;
			string True = "Неверно";

			string actual = func1(d1, m);

			Assert::AreEqual(True, actual);
		}

		TEST_METHOD(TestMethod3)
		{
			int d1 = 3;
			int m = 6;
			string True = "Верно";

			string actual = func1(d1, m);

			Assert::AreEqual(True, actual);
		}

		TEST_METHOD(TestMethod4)
		{
			int d1 = -1;
			int m = 8;
			string True = "Верно";

			string actual = func1(d1, m);

			Assert::AreEqual(True, actual);
		}

		TEST_METHOD(TestMethod5)
		{
			int d1 = -10;
			int m = 1;
			string True = "Неверно";

			string actual = func1(d1, m);

			Assert::AreEqual(True, actual);
		}

	};
}
