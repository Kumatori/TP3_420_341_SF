#pragma once
#include "TreeElement.h"

using namespace std;
class TreeElement {
	TreeElement::TreeElement() {
	}

	bool TreeElement::operator==(const TreeElement& rObject) const{
		return false;
	}

	bool TreeElement::operator<(const TreeElement& rObject) const {
		return false;
	}
};
