/* CPS222 Lab 4 question 4.  What is the relationship between the amount
 * of storage requested and the amount of storage actually allocated?
 * Copyright (c) 2001, 2003, 2013, 2019 - Russell C. Bjork, Russ Tuck
 */

#include <cstring>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char * argv []) {
  int requestSize;

  cout << "Size of node to request? ";
  cin >> requestSize;

  while (requestSize >= 0) {
    char * p = new char [ requestSize ];
    char * q = new char [ requestSize ];

    cout << "Values of the two pointers (in decimal, not hex) are "
         << (unsigned long) p << ", " << (unsigned long) q << endl;
    cout << "Size actually allocated for first node appears to be: "
         << (unsigned long) q - (unsigned long) p << endl;

    cout << "Size of node to request (-1 to quit)? ";
    cin >> requestSize;
  }
}
