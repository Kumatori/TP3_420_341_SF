#pragma once
#include "TreeElement.h"
#include <iostream>

using namespace std;
class Tree {
	public:
		Tree();
		~Tree();
		void add(TreeElement* e);
		bool isEmpty();
		int searchElement(TreeElement* e);
		int nbOfElements();
		int getDepth(); //BONUS
	private:
		struct Node {
			public:
				Node();
			private:
				TreeElement* _element;
				Node* _parent;
				Node* _left;
				Node* _right;
		};
		void balanceTree();
		Node* _root;
};