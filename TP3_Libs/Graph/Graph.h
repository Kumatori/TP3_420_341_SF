#pragma once
#include "LinkedList.h"
#include "LinkedListElement.h"
#include "Node.h"
#include "Edge.h"
#include <iostream>

using namespace std;
class Graph {
	public:
		Graph();
		~Graph();
		void add(LinkedListElement* e);
		void remove(LinkedListElement* e);
		unsigned int getBestCost(Node* e1, Node* e2);
	private:
		Node _listNodes;
};