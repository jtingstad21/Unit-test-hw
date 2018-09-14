#include "stdafx.h"
#include "CppUnitTest.h"
#include "Square.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesterSquare
{		
	TEST_CLASS(SquareTest) // Test suite for isSquare()
	{
	public:
		
		TEST_METHOD(NotZero)
		{
			// Check that isSquare() returns false when all sides = 0;
			Assert::AreEqual(isSquare(0, 0, 0, 0), false);
		}
		TEST_METHOD(SideNotEqual)
		{
			// Check that isSquare returns false when all sides are not equal
			Assert::AreEqual(isSquare(2, 2, 2, 3), false);
		}
		TEST_METHOD(NotNegative)
		{
			// Check that isSquare returns false when sides are negative lengths
			Assert::AreEqual(isSquare(-3, -3, -3, -3), false);
		}
		TEST_METHOD(SidesSame)
		{
			// Check that isSquare returns true when sides are all equal and positive
			Assert::AreEqual(isSquare(5, 5, 5, 5), true);
		}

	};
}