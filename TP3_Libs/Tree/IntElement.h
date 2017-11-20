#pragma once
#include "TreeElement.h"

class IntElement :
	public TreeElement {
		public:
			IntElement(int value);
			~IntElement();
			bool operator==(const IntElement& rObject) const;
			bool operator<(const IntElement& rObject) const;
		private:
			int _value;
};