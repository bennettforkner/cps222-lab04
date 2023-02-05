// When you create a new node, what are the initial contents of the node?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = new Node();
	for (int i = 0; i < 24; i++) {
		cout << node1->GetCode(i) << endl;
	}
}