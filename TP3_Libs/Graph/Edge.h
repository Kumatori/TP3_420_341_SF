#pragma once
#include "Node.h"
#include "LinkedListElement.h"
#include <iostream>

using namespace std;

class LinkedListElement;
class Node;
class Edge:
	public LinkedListElement {
		public:
			Edge( int cost, Node* neighbor);
			Node* getNeighbor();
			LinkedListElement* getNext();
			int getCost();
			~Edge();
		private :
			int _cost;
			Node* _neighbor;
};