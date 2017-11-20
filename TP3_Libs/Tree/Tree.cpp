#pragma once
#include "Tree.h"

/**                TREE                **/
Tree::Tree() {
	_root = NULL;
}

bool Tree::isEmpty() {
	return _root == NULL;
}

Tree::~Tree() {
	remove(_root);
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
	if (*element == *(node->_element)) {
		throw ElementToAddAlreadyExistingException("Element already exists in tree!");
	}
	else {
		if (*element < *(node->_element)) {
			if (node->_left == NULL) {
				Node* newNode = new Node(element, node);
				node->_left = newNode;
			}
			else {
				add(element, node->_left);
			}
		}
		else {
			if (node->_right == NULL) {
				Node* newNode = new Node(element, node);
				node->_right = newNode;
			}
			else {
				add(element, node->_right);
			}
		}
	}
}

void Tree::balanceTree(){

}

int Tree::nbOfElements() {
	int nbElements = 0;
	return nbOfElements(_root, nbElements);
}

int Tree::nbOfElements(Node* node, int nbElements) {
	if (node != NULL) {
		nbElements++;
		nbOfElements(node->_left, nbElements);
		nbOfElements(node->_right, nbElements);
	}
}

int Tree::searchElement(TreeElement* element) {
	int depth = -1;
	if (_root == NULL) return depth;
	int tempDepth = 0;
	return depth + searchElement(_root, element, tempDepth);
}

int Tree::searchElement(Node* node, TreeElement* element, int tempDepth) {
	tempDepth++;
	if (node->_element = element) return tempDepth;
	if (node->_left == NULL) {
		tempDepth = 0;
	} else {
		searchElement(node->_left, element, tempDepth);
	}
	if (node->_right == NULL) {
		tempDepth = 0;
	} else {
		searchElement(node->_right, element, tempDepth);
	}

	return tempDepth;
}

int Tree::getDepth() {
	//BONUS
	return 0;
}

/**                NODE                **/
Tree::Node::Node(TreeElement* element, Node* parent) {
	_element = element;
	_parent = parent;
	_left = NULL;
	_right = NULL;
}