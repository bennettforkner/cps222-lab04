// Are deleted nodes recycled when you request the same size node? 

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = new Node();

	node1->SetValue("Hello World!");

	cout << "Node1: " << node1 << endl;
	cout << "Node1: " << node1->GetValue() << endl;

	delete node1;

	Node *node2 = new Node();

	cout << "Node2: " << node2 << endl;
	cout << "Node2: " << node2->GetValue() << endl;
}