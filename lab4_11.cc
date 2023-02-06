// What happens if you try to delete the same node twice?

#include <iostream>
#include "node.h"
using std::cout;
using std::endl;

int main() {
	int count = 0;
	while (true) {
		Node *node1 = new Node();
		if (count % 1000 == 0) {
			cout << count << endl;
		}
		count++;
	}
}