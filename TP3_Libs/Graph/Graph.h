#pragma once
#include "LinkedList.h"
#include "LinkedListElement.h"
#include "Node.h"
#include "Edge.h"
#include <iostream>

using namespace std;

class Node;
class Graph {

	public:
		Graph();
		void add(Node* node);
		void remove(Node* node);
		~Graph();
	private:
		LinkedList* _listNodes;
};