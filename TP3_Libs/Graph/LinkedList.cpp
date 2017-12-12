#pragma once
#include "LinkedList.h"

LinkedList::LinkedList() {
	_last = NULL;
	_nbOfElements = 0;
}

LinkedList::~LinkedList() {

}

bool LinkedList::searchElement(LinkedListElement * node) {
	return false;
}

void LinkedList::add(LinkedListElement * node) {
	_nbOfElements++;
}

unsigned int LinkedList::getNbOfElements() {
	return _nbOfElements;
}