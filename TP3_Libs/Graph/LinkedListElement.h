#pragma once

class LinkedListElement {
	protected:
		LinkedListElement() {}
	public:
		LinkedListElement* _next;
		virtual LinkedListElement* getNext() = 0;
};