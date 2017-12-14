#pragma once
#include "Edge.h"
#include "Node.h"
#include "LinkedList.h"
#include "LinkedListElement.h"

Edge::Edge( int cost, Node* neighbor) {
	_cost = cost;
	_neighbor = neighbor;
}

Node * Edge::getNeighbor()
{
	return _neighbor;
}

LinkedListElement * Edge::getNext()
{
	return _next;
}

int Edge::getCost()
{
	return _cost;
}

Edge::~Edge() {

}
