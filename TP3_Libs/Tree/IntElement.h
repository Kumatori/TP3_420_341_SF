#pragma once
#include "TreeElement.h"

class IntElement :
	public TreeElement {
		public:
			IntElement(const int& value);
			~IntElement();
			bool operator==(const TreeElement& rObject) const;
			bool operator<(const TreeElement& rObject) const;
			bool operator>(const TreeElement& rObject) const;
		private:
			int getElement() const;
			int _value;
};