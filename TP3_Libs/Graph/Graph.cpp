/**#pragma once
#include "Graph.h"

Graph::Graph() {
	_listNodes = NULL;
}

Graph::~Graph() {

}

void Graph::add(Node* node) {
	if (_listNodes->searchElement(node)) throw ElementToAddAlreadyExistingException("Node already exists in graph!");
	_listNodes->add(node);
}

void Graph::remove(Node * node) {

}**/