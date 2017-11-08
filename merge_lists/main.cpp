#include "./merge_lists.hpp"
#include <assert.h>
#include <iostream>

int main() {
  Node *node1 = newNode(1);
  node1->next = newNode(3);
  node1->next->next = newNode(5);

  Node *node2 = newNode(0);
  node2->next = newNode(2);
  node2->next->next = newNode(4);

  Node *merged = merge_lists(node1, node2);
  printList(merged);
}
