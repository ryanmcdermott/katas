#ifndef merge_lists_h_
#define merge_lists_h_

struct Node {
  int data;
  Node *next;
};

struct Node *newNode(int data);

void printList(Node *node);

Node *merge_lists(Node *h1, Node *h2);

#endif
