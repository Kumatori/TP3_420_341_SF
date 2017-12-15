#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GraphTests {		
	TEST_CLASS(LinkedListTests) {
		public:	
			TEST_METHOD(creatingLinkedList_getNbElements_returns0) {
				LinkedList* anyList = new LinkedList();

				Assert::AreEqual(0, anyList->getNbElement());
			}
			TEST_METHOD(creatingLinkedList_getHead_returnsNull) {
				LinkedList* anyList = new LinkedList();

				Assert::IsNull(anyList->getHead());
			}
			TEST_METHOD(addingOneElement_toAnyList_elementIsAdded) {
				LinkedList* anyList = new LinkedList();
				LinkedListElement* anyElement = new Node("anyElement");
				anyList->add(anyElement);

				Assert::IsTrue(anyElement == anyList->getHead());
				Assert::AreEqual(1, anyList->getNbElement());
			}
			TEST_METHOD(addingOneElement_toAnyList_thenDeletingIt_elementIsRemoved) {
				LinkedList* anyList = new LinkedList();
				LinkedListElement* anyElement = new Node("anyElement");
				anyList->add(anyElement);
				anyList->remove(anyElement);

				Assert::IsNull(anyList->getHead());
				Assert::AreEqual(0, anyList->getNbElement());
			}
			TEST_METHOD(addingOneElement_toAnyList_elementIsAdded_ContainsReturnsTrue) {
				LinkedList* anyList = new LinkedList();
				LinkedListElement* anyElement = new Node("anyElement");
				anyList->add(anyElement);

				Assert::IsTrue(anyList->contains(anyElement));
			}
			TEST_METHOD(TryingContainsOnEmpty_AnyList_ContainsReturnsTrue) {
				LinkedList* anyList = new LinkedList();
				LinkedListElement* anyElement = new Node("anyElement");

				Assert::IsFalse(anyList->contains(anyElement));
			}
	};
}