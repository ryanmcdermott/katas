#ifndef BINARY_TREE_CHECK_H_
#define BINARY_TREE_CHECK_H_

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *newNode(int data);

bool binary_tree_check(Node *root);

#endif
