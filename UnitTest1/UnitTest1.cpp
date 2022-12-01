#include "pch.h"
#include "CppUnitTest.h"
#include "../lab08(2)/lab08(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string strinput;
			int count = 0;
			char a = 'a';
			stringstream words(strinput);
			bool isFound = true;
			FindA("asdfg ngf", "asdfg", isFound);
			Assert::IsTrue(isFound);
		}
	};
}
