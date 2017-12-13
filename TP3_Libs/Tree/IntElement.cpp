#pragma once
#include "IntElement.h"

IntElement::IntElement(const int& value) {
	this->_value = value;
}

IntElement::~IntElement() {
}

bool IntElement::operator==(const TreeElement & rObject) const {
	return this->_value == rObject.getElement();
}

bool IntElement::operator<(const TreeElement & rObject) const {
	return this->_value < rObject.getElement();
}

bool IntElement::operator>(const TreeElement & rObject) const {
	return this->_value > rObject.getElement();
}

int IntElement::getElement() const{
	return this->_value;
}