#pragma once
#include "LinkedList.h"

LinkedList::LinkedList() {
	_nbElement = 0;
	_head = NULL;
}

void LinkedList::add(LinkedListElement * element)
{
	element->_next = _head;
	_head = element;
	_nbElement++;
}
void LinkedList::remove(LinkedListElement * element)
{

	LinkedListElement* elementToRemove = search(element);
	if (elementToRemove != NULL) {
		if (elementToRemove == _head) _head = _head->_next;
		LinkedListElement* tempPrevious = searchPrevious(elementToRemove);
		tempPrevious->_next = elementToRemove->_next;
		delete elementToRemove;
		_nbElement--;
	}

}

LinkedListElement * LinkedList::search(LinkedListElement * element)
{
	LinkedListElement* temp = _head;

	while (_head != NULL) {
		if (temp == element) return temp;
		temp = temp->getNext();
	}

	return temp;
}
LinkedListElement * LinkedList::searchPrevious(LinkedListElement * element)
{
	LinkedListElement* temp = _head;
	LinkedListElement* tempPrevious = temp;

	while (temp != element) {
		tempPrevious = temp;
		temp = temp->getNext();
	}
	return tempPrevious;
}

int LinkedList::getNbElement() {
	return _nbElement;
}
LinkedListElement * LinkedList::getHead()
{
	return _head;
}
LinkedList::~LinkedList() {

}

