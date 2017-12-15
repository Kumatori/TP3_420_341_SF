#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GraphTests {
	TEST_CLASS(GraphTests) {
		public:
			TEST_METHOD(addingSameNodeTwice_SecondTime_ThrowsException) {
				Graph anyGraph;
				Node* anyNode = new Node("anyNode");

				anyGraph.add(anyNode);
				bool throwed = false;

				try {
					anyGraph.add(anyNode);
				} catch (const std::runtime_error&) {
					throwed = true;
				}

				Assert::IsTrue(throwed);
			}
	};
}