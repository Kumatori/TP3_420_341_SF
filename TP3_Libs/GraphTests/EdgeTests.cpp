#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GraphTests {
	TEST_CLASS(EdgeTests) {
		public:
			TEST_METHOD(CreatingAnyEdge_WithAnyNode_getNeighbor_RETURNS_anyNode) {
				string anyName = "any Name";
				Node* anyNode = new Node(anyName);
				Edge* anyEdge = new Edge(1, anyNode);

				Node* neighborNode = anyEdge->getNeighbor();

				Assert::AreEqual(anyNode->getName(), neighborNode->getName());
			}
			TEST_METHOD(CreatingAnyEdge_WithAnyCost_getCost_RETURNS_anyCost) {
				int anyCost = 3;
				Node* anyNode = new Node("any Name");
				Edge* anyEdge = new Edge(anyCost, anyNode);

				Assert::AreEqual(anyCost, anyEdge->getCost());
			}
	};
}