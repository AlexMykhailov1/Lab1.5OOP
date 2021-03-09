#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.5OOP/Triad.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15OOp
{
	TEST_CLASS(UnitTest15OOp)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad T1;
			T1.SetX(1);
			Assert::AreEqual(1, T1.GetX());
		}
	};
}
