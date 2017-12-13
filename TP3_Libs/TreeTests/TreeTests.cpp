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
			TEST_METHOD(AddingTwoElement_secondElementIsAtDepth_1) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				int depth = anyTree.searchElement(&secondElement);

				Assert::AreEqual(1, depth);
			}
			TEST_METHOD(SearchingForElement_WHEN_elementIsntInTree_shouldReturn_minus1) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(4);

				anyTree.add(&firstElement);
				int depth = anyTree.searchElement(&secondElement);

				Assert::AreEqual(-1, depth);
			}
			TEST_METHOD(SearchingForElement_WHEN_elementIsInTree_shouldReturn_depth) {
				Tree anyTree;
				IntElement firstElement(1);
				IntElement secondElement(2);
				IntElement thirdElement(3);
				IntElement fourElement(4);
				IntElement fifthElement(5);
				IntElement sixthElement(6);
				IntElement seventhElement(7);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				anyTree.add(&fourElement);
				anyTree.add(&fifthElement);
				anyTree.add(&sixthElement);
				anyTree.add(&seventhElement);
				int depth = anyTree.searchElement(&seventhElement);

				Assert::AreEqual(4, depth);
			}
			TEST_METHOD(SearchingForElement_WHEN_treeAsTwoSide_AND_elementIsInTree_shouldReturn_depth) {
				Tree anyTree;
				IntElement firstElement(2);
				IntElement secondElement(1);
				IntElement thirdElement(3);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				int depth = anyTree.searchElement(&thirdElement);

				Assert::AreEqual(1, depth);
			}
			TEST_METHOD(SearchingForElement_WHEN_treeAsTwoSide_AND_elementIsInTree_shouldReturn_depthOfElement) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(1);
				IntElement thirdElement(2);
				IntElement fourElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				anyTree.add(&fourElement);
				int depth = anyTree.searchElement(&thirdElement);

				Assert::AreEqual(2, depth);
			}
			TEST_METHOD(addingElements_5_3_4_TreeShouldBeBalanced_LEFT_RIGHT_CASE) {
				Tree anyTree;
				IntElement firstElement(5);
				IntElement secondElement(3);
				IntElement thirdElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				int depth = anyTree.getDepth();

				Assert::AreEqual(3, depth);
			}
			TEST_METHOD(addingElements_5_4_3_TreeShouldBeBalanced_LEFT_LEFT_CASE) {
				Tree anyTree;
				IntElement firstElement(5);
				IntElement secondElement(4);
				IntElement thirdElement(3);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				int depth = anyTree.getDepth();

				Assert::AreEqual(3, depth);
			}
			TEST_METHOD(addingElements_3_5_4_TreeShouldBeBalanced_RIGHT_LEFT_CASE) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(5);
				IntElement thirdElement(4);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				int depth = anyTree.getDepth();

				Assert::AreEqual(3, depth);
			}
			TEST_METHOD(addingElements_3_4_5_TreeShouldBeBalanced_RIGHT_RIGHT_CASE) {
				Tree anyTree;
				IntElement firstElement(3);
				IntElement secondElement(4);
				IntElement thirdElement(5);

				anyTree.add(&firstElement);
				anyTree.add(&secondElement);
				anyTree.add(&thirdElement);
				int depth = anyTree.getDepth();

				Assert::AreEqual(3, depth);
			}
	};
}