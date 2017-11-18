#pragma once
#include "Node.h"
#include <iostream>

using namespace std;
class Edge {
	public:
		Edge();
		~Edge();
		unsigned int getCost();
		//Node* getNeighbor();
	private:
		unsigned int _cost;
		//Node* _neighbor;
};