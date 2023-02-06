// What happens if you try to delete the same node twice?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = new Node();

	delete node1;

	delete node1;
}