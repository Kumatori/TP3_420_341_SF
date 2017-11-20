#pragma once
#include <iostream>

class TreeElement {
	public:
		TreeElement(int value);
		~TreeElement();
		bool operator==(const TreeElement& rObject) const;
		bool operator<(const TreeElement& rObject) const;
	private:
		int _value;
};