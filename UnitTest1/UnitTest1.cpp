#include "pch.h"
#include "CppUnitTest.h"

#include "..//OOP_lab_5.3/ClassB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			B b;
			A* ptrA = &b;
			B* ptrB = dynamic_cast<B*>(ptrA);
			Assert::IsNotNull(ptrB);
		}
	};
}
