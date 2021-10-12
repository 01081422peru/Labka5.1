#include "pch.h"
#include "CppUnitTest.h"
#include "../Labka5.1/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest6)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double a = 1;
			const double b = 2;
			t = h (a, b);
			Assert::AreEqual(t, 1.4);
		}
	};
}

