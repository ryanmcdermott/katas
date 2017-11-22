#ifndef binary_tree_invert_h_
#define binary_tree_invert_h_

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *newNode(int data);

void binary_tree_invert(Node *root);

#endif
