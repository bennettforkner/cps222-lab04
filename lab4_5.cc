// What happens if you try to apply delete to a pointer whose value is nullptr?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	Node *node1 = nullptr;

	delete node1;
}