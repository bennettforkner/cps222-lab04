// Does the implementation of delete change the value of the pointer variable used?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = new Node();

	cout << "Before: " << node1 << endl;

	delete node1;

	cout << "After: " << node1 << endl;
}