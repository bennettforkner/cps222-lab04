// What happens if you try to dereference a pointer whose value is nullptr?

#include <iostream>
using std::cout;
using std::endl;

int main() {
	int *ptr = nullptr;
	*ptr = 1;
}