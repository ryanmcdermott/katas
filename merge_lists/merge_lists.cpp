#include "./merge_lists.hpp"
#include <iostream>

using std::cout;

Node *newNode(int data) {
  struct Node *node = new Node();
  node->data = data;
  node->next = 0;
  return node;
}

void printList(Node *node) {
  while (node != 0) {
    cout << node->data;
    node = node->next;
  }
}

Node *merge_lists(Node *h1, Node *h2) {
  if (!h1) {
    return h2;
  }

  if (!h2) {
    return h1;
  }

  if (h1->data < h2->data) {
    h1->next = merge_lists(h1->next, h2);
    return h1;
  } else {
    h2->next = merge_lists(h1, h2->next);
    return h2;
  }
}
