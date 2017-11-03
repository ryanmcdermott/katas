#ifndef BINARY_TREE_CHECK_H_
#define BINARY_TREE_CHECK_H_

struct Node {
  int key;
  struct Node *left, *right;
};

bool binary_tree_check(Node *root);

#endif
