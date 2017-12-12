#pragma once
#include "Node.h"

Node::Node(string name) {
	_name = name;
	_listEdges = NULL;
}

Node::~Node() {

}

void Node::add(Edge* edge) {
	if (isNeighbor(edge->getNeighbor)) throw EdgeToNeighborToAddAlreadyExistingException("Edge to neighbor to add alreay exists in list of edges!");
	if (edge->getNeighbor == this) throw EdgeToAddCannotTargetSelfNodeException("Edge to add can't target the node itself!");
	_listEdges->add(edge);
}

void Node::remove(Edge * edge) {
	_listEdges.remove(edge);
}

string Node::getName() {
	return _name;
}

int Node::getNbOfEgdes() {
	return _listEdges->getNbOfElements;
}

bool Node::isNeighbor(Node* node) {
	return false;
}