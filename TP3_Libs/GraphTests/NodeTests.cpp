#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GraphTests {
	TEST_CLASS(NodeTests) {
		public:
			TEST_METHOD(creatingNode_getDegree_returns0) {
				Node* anyNode = new Node("anyNode");

				Assert::AreEqual(0, anyNode->getDegree());
			}
			TEST_METHOD(creatingNode_getName_returnsAnyName) {
				string anyName = "anyName";
				Node* anyNode = new Node(anyName);

				Assert::AreEqual(anyName, anyNode->getName());
			}
			TEST_METHOD(creatingNode_addingOneEdge_getDegree_returns1) {
				Node* anyNode = new Node("anyNode");
				Node* neighborNode = new Node("neighbor");
				Edge* anyEdge = new Edge(4, neighborNode);

				anyNode->addEdge(anyEdge);

				Assert::AreEqual(1, anyNode->getDegree());
			}
			TEST_METHOD(creatingNode_addingOneEdge_isNeighbor_returnsTrue) {
				Node* anyNode = new Node("anyNode");
				Node* neighborNode = new Node("neighbor");
				Edge* anyEdge = new Edge(4, neighborNode);

				anyNode->addEdge(anyEdge);

				Assert::IsTrue(anyNode->isNeighbor(neighborNode));
			}
			TEST_METHOD(creatingNode_isNeighbor_returnsFalse) {
				Node* anyNode = new Node("anyNode");
				Node* neighborNode = new Node("neighbor");

				Assert::IsFalse(anyNode->isNeighbor(neighborNode));
			}
			TEST_METHOD(creatingNode_addingOneEdgeTwice_throwsException) {
				Node* anyNode = new Node("anyNode");
				Node* neighborNode = new Node("neighbor");
				Edge* anyEdge = new Edge(4, neighborNode);

				anyNode->addEdge(anyEdge);
				bool throwed = false;

				try
				{
					anyNode->addEdge(anyEdge);
				}
				catch (const std::runtime_error&)
				{
					throwed = true;
				}

				Assert::IsTrue(throwed);
			}
			TEST_METHOD(creatingNode_addingOneEdgeWithSelfNodeAsNeighbor_throwsException) {
				Node* anyNode = new Node("anyNode");
				Edge* anyEdge = new Edge(4, anyNode);

				bool throwed = false;

				try
				{
					anyNode->addEdge(anyEdge);
				}
				catch (const std::runtime_error&)
				{
					throwed = true;
				}

				Assert::IsTrue(throwed);
			}
	};
}