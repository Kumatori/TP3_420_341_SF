#pragma once
#include "TreeElement.h"
#include <iostream>

using namespace std;
class Tree {
	public:
		Tree();
		~Tree();
		void add(TreeElement* element);
		bool isEmpty();
		int searchElement(TreeElement* element);
		int nbOfElements();
		int getDepth(); //BONUS
	private:
		struct Node {
			public:
				Node(TreeElement* element, Node* parent);
			private:
				TreeElement* _element;
				Node* _parent;
				Node* _left;
				Node* _right;
		};
		void balanceTree();
		Node* _root;
};