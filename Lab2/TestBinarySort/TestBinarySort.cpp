#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\andre\Documents\GitHub\Labs\Lab2\Lab2\Строки(bin).cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestBinarySort
{
	TEST_CLASS(TestBinarySort)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str[5] = {"1111111","10001000","1101111","110111","10000000"};
			string str1[5] = {"110111","1101111","1111111","10000000","10001000"};

			SortBinary(str);

			Assert::AreEqual(str[0], str1[0]);
			Assert::AreEqual(str[1], str1[1]);
			Assert::AreEqual(str[2], str1[2]);
			Assert::AreEqual(str[3], str1[3]);
			Assert::AreEqual(str[4], str1[4]);
		}

		TEST_METHOD(TestMethod2)
		{
			string str[5] = { "10","1","11","110","100" };
			string str1[5] = { "1","10","11","100","110" };

			SortBinary(str);

			Assert::AreEqual(str[0], str1[0]);
			Assert::AreEqual(str[1], str1[1]);
			Assert::AreEqual(str[2], str1[2]);
			Assert::AreEqual(str[3], str1[3]);
			Assert::AreEqual(str[4], str1[4]);
		}

		TEST_METHOD(TestMethod3)
		{
			string str[5] = { "100100","100101","11", "1", "100"};
			string str1[5] = { "1","11","100","100100","100101"};

			SortBinary(str);

			Assert::AreEqual(str[0], str1[0]);
			Assert::AreEqual(str[1], str1[1]);
			Assert::AreEqual(str[2], str1[2]);
		}

		TEST_METHOD(TestMethod4)
		{
			string str[5] = { "111","1000","101","100","10" };
			string str1[5] = { "10","100","101","111","1000" };

			SortBinary(str);

			Assert::AreEqual(str[0], str1[0]);
			Assert::AreEqual(str[1], str1[1]);
			Assert::AreEqual(str[2], str1[2]);
			Assert::AreEqual(str[3], str1[3]);
			Assert::AreEqual(str[4], str1[4]);
		}

		TEST_METHOD(TestMethod5)
		{
			string str[5] = { "1111","1001","1101","1011","1000" };
			string str1[5] = { "1000","1001","1011","1101","1111" };

			SortBinary(str);

			Assert::AreEqual(str[0], str1[0]);
			Assert::AreEqual(str[1], str1[1]);
			Assert::AreEqual(str[2], str1[2]);
			Assert::AreEqual(str[3], str1[3]);
			Assert::AreEqual(str[4], str1[4]);
		}
	};
}
