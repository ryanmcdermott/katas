#include <iostream>
#include "./linked_list_reversed.h"

using std::cout;

int main() {
  LinkedList l;
  l.addValue(5);
  l.addValue(12);
  l.addValue(24);
  l.addValue(70);

  Node *current = l.getHead();
  reverse(current);

  cout << l.popValue();
}
