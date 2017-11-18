#include "Tree.h"

/**                TREE                **/
//PUBLIC
Tree::Tree() {
	_root = NULL;
}

Tree::~Tree() {
	
}

/**void Tree::add(TreeElement* element) {
	if (searchElement(e) != -1) throw std::exception("Element already exists!");
	if (_root == NULL) {
		Node* nodeToAdd = new Node(e, _root);
		_root = nodeToAdd;
	} else {
		
	}
}**/

bool Tree::isEmpty() {
	return _root == NULL;
}

/**int Tree::searchElement(TreeElement* element) {

}

int Tree::nbOfElements() {

}

int Tree::getDepth() {
	//BONUS
}

//PRIVATE
void Tree::balanceTree(){
	
}**/

/**                NODE                **/
//PUBLIC
Tree::Node::Node(TreeElement* element, Node* parent) {
	_element = e;
	_parent = parent;
	_left = NULL;
	_right = NULL;
}