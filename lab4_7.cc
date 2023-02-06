// If you have a dangling reference to a node that has been deleted, and you dereference this 
// pointer, can you still access the node through this pointer?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = new Node();

	node1->SetValue("This is a value");

	cout << "Before: " << node1->GetValue() << endl;

	delete node1;

	cout << "After: " << node1->GetValue() << endl;
}