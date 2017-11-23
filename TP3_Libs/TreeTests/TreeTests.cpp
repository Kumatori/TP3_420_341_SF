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
			TEST_METHOD(AddingOneElement_TreeIsntEmpty) {
				Tree anyTree;
				IntElement anyElement(3);

				anyTree.add(&anyElement);

				Assert::IsFalse(anyTree.isEmpty());
			}
			TEST_METHOD(AddingOneElement_addedElementIsRoot) {
				Tree anyTree;
				IntElement anyElement(3);

				anyTree.add(&anyElement);
				int depth = anyTree.searchElement(&anyElement);
				Assert::AreEqual(0,depth);
			}
			TEST_METHOD(AddingTwoElement_FirstElementIsRoot) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				int depth = anyTree.searchElement(&firstElement);
				Assert::AreEqual(0, depth);
			}
			TEST_METHOD(AddingTwoElement_secondElementIsntRoot) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				int depth = anyTree.searchElement(&secondElement);
				Assert::AreEqual(1, depth);
			}
	};
}