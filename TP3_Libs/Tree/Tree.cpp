#include "Tree.h"

/**                TREE                **/
//PUBLIC
Tree::Tree() {
	_root = NULL;
}

Tree::~Tree() {
	remove(_root);
}

void Tree::add(TreeElement* element) {
	if (_root == NULL) {
		_root = new Node(element, NULL);
	} else {
		add(element, _root);
	}
}

bool Tree::isEmpty() {
	return _root == NULL;
}

/**int Tree::searchElement(TreeElement* element) {

}

int Tree::nbOfElements() {

}

int Tree::getDepth() {
	//BONUS
}**/

//PRIVATE
void Tree::remove(Node* node) {
	if (node != NULL) {
		remove(node->_left);
		remove(node->_right);
		delete node;
	}
}

void Tree::add(TreeElement* element, Node* node) {
	if (*element == *(node->_element)) {
		throw element_to_add_already_existing();
	} else {
		if (*element < *(node->_element)) {
			if (node->_left == NULL) {
				Node* newNode = new Node(element, node);
				node->_left = newNode;
			} else {
				add(element, node->_left);
			}
		} else {
			if (node->_right == NULL) {
				Node* newNode = new Node(element, node);
				node->_right = newNode;
			} else {
				add(element, node->_right);
			}
		}
	}
}

/**void Tree::balanceTree(){
	
}**/

/**                NODE                **/
//PUBLIC
Tree::Node::Node(TreeElement* element, Node* parent) {
	_element = element;
	_parent = parent;
	_left = NULL;
	_right = NULL;
}