#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_7.1_iter/PR_7.1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCreate)
		{
			const int rowCount = 8;
			const int colCount = 6;
			int Low = 16;
			int High = 97;
			int** a = new int* [rowCount];

			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Create(a, rowCount, colCount, Low, High);

			for (int i = 0; i < rowCount; i++)
				for (int j = 0; j < colCount; j++)
					Assert::IsTrue(a[i][j] >= Low && a[i][j] <= High);

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}

		TEST_METHOD(TestSort)
		{
			const int rowCount = 8;
			const int colCount = 6;
			int** a = new int* [rowCount];

			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			Sort(a, rowCount, colCount);

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}

		TEST_METHOD(TestCalc)
		{
			const int rowCount = 8;
			const int colCount = 6;
			int** a = new int* [rowCount];

			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			int S = 0;
			int k = 0;

			Calc(a, rowCount, colCount, S, k);

			for (int i = 0; i < rowCount; i++)
				delete[] a[i];
			delete[] a;
		}
	};
}
