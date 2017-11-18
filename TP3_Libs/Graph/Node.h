#pragma once
#include "Edge.h"
#include <iostream>

using namespace std;
class Node {
	public:
		Node();
		~Node();
		void add(Edge* e);
		void remove(Edge* e);
		string getName();
		int getNbOfEgdes();
		bool isNeighbor();
	private:
		string _name;
		Edge _listEdges;
};