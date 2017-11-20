#pragma once
#include "IntElement.h"

IntElement::IntElement(int value) {
	_value = value;
}

IntElement::~IntElement() {
}

bool IntElement::operator==(const IntElement & rObject) const {
	return rObject._value == this->_value;
}

bool IntElement::operator<(const IntElement & rObject) const {
	return rObject._value < this->_value;
}