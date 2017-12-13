/**#pragma once
#include "Node.h"
#include <iostream>

using namespace std;
class Edge :
	public LinkedListElement {
		public:
			Edge(unsigned int cost, Node* neighbor);
			~Edge();
			unsigned int getCost();
			Node* getNeighbor();
		private:
			unsigned int _cost;
			Node* _neighbor;
};**/