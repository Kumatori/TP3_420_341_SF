#pragma once
#include "LinkedListElement.h"
#include "Node.h"

using namespace std;
class LinkedList {
	public:
		LinkedList();
		~LinkedList();
		bool searchElement(LinkedListElement* element);
		void add(LinkedListElement* element);
		unsigned int getNbOfElements();
	private:
		LinkedListElement* _last;
		unsigned int _nbOfElements;
};