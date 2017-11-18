#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace TreeTests {		
	TEST_CLASS(TreeTest) {
		public:
			TEST_METHOD(InitiatingATree_ShouldReturnEmptyTree) {
				Tree anyTree;
				
				Assert::IsTrue(anyTree.isEmpty());
			}
	};
}