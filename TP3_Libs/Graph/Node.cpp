#pragma once
#include "Node.h"
#include "LinkedList.h"
#include "LinkedListElement.h"
#include "Edge.h"

Node::Node(string name) {
	_name = name;
	_listEdges = new LinkedList();
}

void Node::addEdge(Edge * edge)
{
	_listEdges->add(edge);
}

bool Node::isNeighbor(Node * node)
{
	Edge* tempEdge = (Edge*)_listEdges->getHead();
	while (tempEdge != NULL) {
		if (tempEdge->getNeighbor()  == node) return true;
		tempEdge = (Edge*)tempEdge->getNext();
	}
	return false;
}

LinkedListElement * Node::getNext()
{
	return _next;
}

string Node::getName()
{
	return _name;
}

int Node::getDegree()
{
	return _listEdges->getNbElement();
}

Node::~Node() {
	while (_listEdges->getHead() != NULL) {
		_listEdges->remove(_listEdges->getHead());
	}
}
