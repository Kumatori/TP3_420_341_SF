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
		void add(Node* node);
		void remove(Node* node);
		//unsigned int getBestCost(Node* node1, Node* node2);
	private:
		struct ElementToAddAlreadyExistingException : public std::runtime_error {
			public:
				ElementToAddAlreadyExistingException(const char* message) : std::runtime_error(message) {};
		};
		LinkedList* _listNodes;
};