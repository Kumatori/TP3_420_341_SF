#pragma once
#include "TreeElement.h"
#include <iostream>

class Tree {
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
		void balanceTree(Node * node, TreeElement* element);
		bool isBalanced(Node* node);
		void balanceLeft(Node* node, TreeElement* element);
		void balanceRight(Node* node, TreeElement* element);
		void rotateLeft(Node* node);
		void rotateRight(Node* node);
		int getDepth(Node * node);
		int nbOfElements(Node* node, int nbElements);
		int searchElement(Node* node, TreeElement* element, int tempDepth);
		Node* _root;
	public:
		Tree();
		~Tree();
		void add(TreeElement* element);
		bool isEmpty();
		int searchElement(TreeElement* element);
		int nbOfElements();
		int getDepth();
};