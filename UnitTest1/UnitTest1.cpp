#include "pch.h"
#include "CppUnitTest.h"
#include"..\main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[25] = { 5, 20, 46, 15, 8, 72, 60, 12, 11, 22, 68, 40, 9, 25, 48, 25, 27, 13, 39, 57, 47, 57, 54, 20, 17 };
			int index = 0;
			SeekingIndexForMax(arr, 25, arr[0], index, 0);
			Assert::AreEqual(index, 5);
		}
	};
}
