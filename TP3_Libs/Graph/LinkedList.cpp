#pragma once
#include "LinkedList.h"

LinkedList::LinkedList() {
	_last = NULL;
	_nbOfElements = 0;
}

LinkedList::~LinkedList() {

}

bool LinkedList::searchElement(LinkedListElement * node) {
	
}

void LinkedList::add(LinkedListElement * node) {
	_nbOfElements++;
}

void LinkedList::remove(LinkedListElement* element) {
	LinkedListElement* previous = _last;
	LinkedListElement* current = _last;
}

unsigned int LinkedList::getNbOfElements() {
	return _nbOfElements;
}