#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_4/Lab05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = S0(4, 19);
			Assert::AreEqual(t,18.0393, 0.001);
		}
	};
}
