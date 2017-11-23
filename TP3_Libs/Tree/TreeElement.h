#pragma once

class TreeElement {
	protected:
		TreeElement(){}
	public:
		virtual bool operator==(const TreeElement& rObject) const = 0;
		virtual bool operator<(const TreeElement& rObject) const = 0;
		virtual int getElement() const = 0;
};