#include "Edge.h"

Edge::Edge(unsigned int cost, Node* neighbor) {
	_cost = cost;
	_neighbor = neighbor;
}

Edge::~Edge() {
	delete this;
}

unsigned int Edge::getCost() {
	return _cost;
}

Node* Edge::getNeighbor() {
	return _neighbor;
}