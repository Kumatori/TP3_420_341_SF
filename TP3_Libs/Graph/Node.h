#pragma once
#include "Edge.h"
#include "LinkedList.h"
#include "LinkedListElement.h"
#include <iostream>

using namespace std;

class LinkedList;
class Edge;
class Node :
	public LinkedListElement {
		public:
			Node(string name);
			void addEdge(Edge* edge);
			bool isNeighbor(Node* node);
			LinkedListElement* getNext();
			string getName();
			int getDegree();
			~Node();
		private:
			struct InvalidEdgeAdded : public std::runtime_error {
				public:
					InvalidEdgeAdded(const char* message) : std::runtime_error(message) {};
			};
			string _name;
			LinkedList* _listEdges;
};