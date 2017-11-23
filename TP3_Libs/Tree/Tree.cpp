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
	if (*element == *(node->_element)) throw ElementToAddAlreadyExistingException("Element already exists in tree!");
	if (*element < *(node->_element)) {
		if (node->_left == NULL) {
			Node* newNode = new Node(element, node);
			node->_left = newNode;
			balanceTree(node->_parent);
		}
		else {
			add(element, node->_left);
		}
	} else {
		if (node->_right == NULL) {
			Node* newNode = new Node(element, node);
			node->_right = newNode;
			balanceTree(node->_parent);
		}
		else {
			add(element, node->_right);
		}
	}
}

void Tree::balanceTree(Node* node){
	int tempDepth1 = 0;
	int tempDepth2 = 0;

	if ((getDepth(node->_left, tempDepth1, tempDepth2) - getDepth(node->_right, tempDepth1, tempDepth2)) == 0 || (getDepth(node->_left, tempDepth1, tempDepth2) - getDepth(node->_right, tempDepth1, tempDepth2)) == 1) {
		if (node->_parent != NULL) balanceTree(node->_parent);
	}
}

int Tree::getDepth(Node* node, int tempDepth1,int tempDepth2) {

	
	// TODO: hello

	tempDepth1++;
	tempDepth2++;

	if (node == NULL) {
		tempDepth1--;
		tempDepth2--;
	}
	if (node != NULL) {
		tempDepth1 = getDepth(node->_left, tempDepth1, tempDepth2);
		tempDepth2 = getDepth(node->_right, tempDepth1, tempDepth2);
	}
	return fmax(tempDepth1, tempDepth1);
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