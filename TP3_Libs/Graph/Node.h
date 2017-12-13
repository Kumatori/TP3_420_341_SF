/**#pragma once
#include "Edge.h"
#include "LinkedList.h"
#include "LinkedListElement.h"
#include <iostream>

using namespace std;
class Node :
	public LinkedListElement {
		public:
			Node(string name);
			~Node();
			void add(Edge* edge);
			void remove(Edge* edge);
			string getName();
			int getNbOfEgdes();
			bool isNeighbor(Node* node);
		private:
			struct EdgeToAddCannotTargetSelfNodeException : public std::runtime_error {
				public:
					EdgeToAddCannotTargetSelfNodeException(const char* message) : std::runtime_error(message) {};
			};
			struct EdgeToNeighborToAddAlreadyExistingException : public std::runtime_error {
			public:
				EdgeToNeighborToAddAlreadyExistingException(const char* message) : std::runtime_error(message) {};
			};
			string _name;
			LinkedList* _listEdges;
};**/