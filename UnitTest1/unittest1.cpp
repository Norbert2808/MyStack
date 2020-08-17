#include "stdafx.h" 
#include "CppUnitTest.h" 
#include "../ALG2Stack/Header.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Stack base;
			base.push(15);
			base.push(13);
			base.pop();
			Assert::IsTrue(base.top() == 15);
		}
		TEST_METHOD(TestMethod2)
		{
			Stack base;
			base.push(15);
			base.push(73);
			Assert::IsTrue(base.top() == 73);
			Assert::IsTrue(base.getSize() == 2);
		}
		TEST_METHOD(TestMethod3)
		{
			Stack base;
			base.push(15);
			base.push(-13);
			base.push(0);
			base.pop();
			Assert::IsTrue(base.top() == -13);
		}

	};
}