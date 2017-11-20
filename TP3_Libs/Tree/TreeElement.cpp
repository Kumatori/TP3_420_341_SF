#pragma once
#include "TreeElement.h"

TreeElement::TreeElement(int value) {
	_value = value;
}

TreeElement::~TreeElement() {
}

bool TreeElement::operator==(const TreeElement & rObject) const {
	return rObject._value == this->_value;
}

bool TreeElement::operator<(const TreeElement & rObject) const {
	return rObject._value < this->_value;
}