#include "pch.h"
#include "CppUnitTest.h"
#include "../Bitset/bitset.h"
#include "../Bitset/bitset.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSetAndTest)
		{
			Bitset myBitset;
			myBitset.set(2);
			myBitset.set(5);
			Assert::IsTrue(myBitset.test(2));
			Assert::IsTrue(myBitset.test(5));
			Assert::IsFalse(myBitset.test(0));
		}
		TEST_METHOD(TestReset)
		{
			Bitset myBitset;
			myBitset.set(2);
			myBitset.reset(2);
			Assert::IsFalse(myBitset.test(2));
		}
		TEST_METHOD(TestResetAll)
		{
			Bitset myBitset;
			myBitset.set(2);
			myBitset.set(3);
			myBitset.set(4);
			myBitset.set(5);
			myBitset.resetAll();
			Assert::IsFalse(myBitset.test(0));
			Assert::IsFalse(myBitset.test(1));
			Assert::IsFalse(myBitset.test(2));
			Assert::IsFalse(myBitset.test(3));
			Assert::IsFalse(myBitset.test(4));
			Assert::IsFalse(myBitset.test(5));
			Assert::IsFalse(myBitset.test(6));
			Assert::IsFalse(myBitset.test(7));
		}
		TEST_METHOD(TestFlip)
		{
			Bitset myBitset;
			myBitset.flip();
			Assert::IsTrue(myBitset.test(0));
			Assert::IsTrue(myBitset.test(1));
			Assert::IsTrue(myBitset.test(2));
			Assert::IsTrue(myBitset.test(3));
			Assert::IsTrue(myBitset.test(4));
			Assert::IsTrue(myBitset.test(5));
			Assert::IsTrue(myBitset.test(6));
			Assert::IsTrue(myBitset.test(7));
		}

	};
}
