/* CPS222 Lab 4 question 10.  What happens when you try to store a value
 * into a node that is bigger than the size of the node?
 * Copyright (c) 2001, 2002, 2003, 2013 - Russell C. Bjork
 */

#include <iostream>
#include <cstring>

#include "node.h"

int main(int argc, char * argv []) {
  // Create two nodes.
  Node * p = new Node();
  Node * q = new Node();

  // Store a value into the second node
  q -> setValue("Node #2");

  // Store a value into the first - note that it is too long to fit
  p -> setValue("Antidisestablishmentarianism is a very long word");

  // Write out the node contents
  std::cout << "Strings are:  " << p -> getValue() << ", "
            << q -> getValue() << std::endl;
}
