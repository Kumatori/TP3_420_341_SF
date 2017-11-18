#include "Tree.h"

/**                TREE                **/
//PUBLIC
Tree::Tree() {
	_root = NULL;
}

Tree::~Tree() {
	while (_root != NULL) {

	}
}

void Tree::add(TreeElement* e) {

}

bool Tree::isEmpty() {
	if (_root == NULL);
}

int Tree::searchElement(TreeElement* e) {

}

int Tree::nbOfElements() {

}

int Tree::getDepth() {
	//BONUS
}

//PRIVATE
void Tree::balanceTree(){
	
}

/**                NODE                **/
//PUBLIC
Tree::Node::Node(TreeElement* e, Node* parent) {
	_element = e;
	_parent = parent;
	_left = NULL;
	_right = NULL;
}