/* What is the value of nullptr (what address value does a null pointer contain)?  Note that 
 * NULL is an older synonym for nullptr, and they are often used interchangeably.
 */
#include <iostream>
using std::cout;
using std::endl;

int main() {
	cout << "Null:";
	cout << (long)(nullptr) << endl;;
}