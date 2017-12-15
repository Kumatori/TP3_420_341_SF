#pragma once
#include "LinkedListElement.h"
#include "Node.h"

using namespace std;
class LinkedList {
	public:
		LinkedList();
		void add(LinkedListElement* element);
		void remove(LinkedListElement* element);
		int getNbElement();
		bool contains(LinkedListElement* element);
		LinkedListElement* getHead();
		~LinkedList();
	private:
		int _nbElement;
		LinkedListElement* search(LinkedListElement* element);
		LinkedListElement* searchPrevious(LinkedListElement* element);
		LinkedListElement* _head;

};