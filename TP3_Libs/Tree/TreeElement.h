#pragma once

class TreeElement {
	protected:
		TreeElement();
	public:
		bool operator==(const TreeElement& rObject) const;
		bool operator<(const TreeElement& rObject) const;
	private:
		int _value;
};