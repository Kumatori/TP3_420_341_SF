#pragma once
#include "TreeElement.h"
#include <iostream>

class Tree {
	public:
		Tree();
		~Tree();
		void add(TreeElement* element);
		bool isEmpty();
		int searchElement(TreeElement* element);
		int nbOfElements();
	private:
		struct ElementToAddAlreadyExistingException : public std::runtime_error {
		public:
			ElementToAddAlreadyExistingException(const char* message) : std::runtime_error(message) {};
		};
		struct Node {
		public:
			Node(TreeElement* element, Node* parent);
			TreeElement* _element;
			Node* _parent;
			Node* _left;
			Node* _right;
		};
		void remove(Node* node);
		void add(TreeElement* element, Node* node);
		void balanceTree(Node * node);
		bool isBalanced(Node* node);
		int getDepth(Node * node);
		int nbOfElements(Node* node, int nbElements);
		int searchElement(Node* node, TreeElement* element, int tempDepth);
		Node* _root;
};