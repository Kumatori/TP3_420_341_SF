#pragma once
#include "Tree.h"
#include "TreeElement.h"
#include <cmath>

/**                TREE                **/
Tree::Tree() {
	_root = NULL;
}

Tree::~Tree() {
	remove(_root);
}

bool Tree::isEmpty() {
	return _root == NULL;
}

void Tree::remove(Node* node) {
	if (node != NULL) {
		remove(node->_left);
		remove(node->_right);
		delete node;
	}
}

void Tree::add(TreeElement* element) {
	if (_root == NULL) {
		_root = new Node(element, NULL);
	} else {
		add(element, _root);
	}
}

void Tree::add(TreeElement* element, Node* node) {
	if (*element == *node->_element) throw ElementToAddAlreadyExistingException("Element already exists in tree!");
	if (*element < *node->_element) {
		if (node->_left == NULL) {
			Node* newNode = new Node(element, node);
			node->_left = newNode;
		} else {
			add(element, node->_left);
		}
	} else if(*element > *node->_element) {
		if (node->_right == NULL) {
			Node* newNode = new Node(element, node);
			node->_right = newNode;
		} else {
			add(element, node->_right);
		}
	}
	balanceTree(node, element);
}

void Tree::balanceTree(Node* node, TreeElement* element) {
	if ((getDepth(node->_left) - getDepth(node->_right)) == 2) {
		if (element < node->_left->_element) {
			rotateLeft(node);
		} else {
			doubleRotateLeft(node);
		}
	}
	if ((getDepth(node->_left) - getDepth(node->_right)) == -2) {
		if (element > node->_right->_element) {
			rotateRight(node);
		} else {
			doubleRotateRight(node);
		}
	}
}

void Tree::rotateLeft(Node * node) {
	Node* tempNode = node->_left;
	node->_left = tempNode->_right;
	tempNode->_parent = node->_parent;
	node->_parent = tempNode;
	tempNode->_right = node;
}

void Tree::doubleRotateLeft(Node * node){
	rotateRight(node->_left);
	node->_left = node->_left->_parent;
	rotateLeft(node);
}

void Tree::rotateRight(Node * node) {
	Node* tempNode = node->_right;
	node->_right = tempNode->_left;
	tempNode->_parent = node->_parent;
	node->_parent = tempNode;
	tempNode->_left = node;
}

void Tree::doubleRotateRight(Node * node) {
	rotateLeft(node->_right);
	rotateRight(node);
}

int Tree::getDepth(Node* node) {
	if (node) return (int)(1 + fmax(getDepth(node->_left), getDepth(node->_right)));

	return 0;
}

int Tree::nbOfElements() {
	int nbElements = 0;

	return nbOfElements(_root, nbElements);
}

int Tree::getDepth() {
	while (_root->_parent != NULL) {
		_root = _root->_parent;
	}
	return getDepth(_root);
}

int Tree::nbOfElements(Node* node, int nbElements) {
	if (node != NULL) {
		nbElements++;
		nbOfElements(node->_left, nbElements);
		nbOfElements(node->_right, nbElements);
	}

	return nbElements;
}

int Tree::searchElement(TreeElement* element) {
	int depth = -1;
	int tempDepth = 0;

	if (_root == NULL) return depth;

	return depth + searchElement(_root, element, tempDepth);
}

int Tree::searchElement(Node* node, TreeElement* element, int tempDepth) {
	tempDepth++;

	if (node->_element == element) return tempDepth;
	if ((node->_left == NULL) && (node->_right == NULL)) tempDepth--;
	if (node->_left != NULL) tempDepth = searchElement(node->_left, element, tempDepth);
	if (node->_right != NULL) tempDepth = searchElement(node->_right, element, tempDepth);

	return tempDepth;
}

/**                NODE                **/
Tree::Node::Node(TreeElement* element, Node* parent) {
	_element = element;
	_parent = parent;
	_left = NULL;
	_right = NULL;
}