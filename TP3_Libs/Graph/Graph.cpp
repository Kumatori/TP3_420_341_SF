#pragma once
#include "Graph.h"

Graph::Graph() {
	_listNodes = new LinkedList();
}

void Graph::add(Node * node)
{
	_listNodes->add(node);
}

void Graph::remove(Node * node)
{
	_listNodes->remove(node);
}

Graph::~Graph() {
	while (_listNodes->getHead() != NULL) {
		_listNodes->remove(_listNodes->getHead());
	}
	delete this->_listNodes;
}
