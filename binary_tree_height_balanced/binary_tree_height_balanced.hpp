#ifndef binary_tree_height_balanced_h_
#define binary_tree_height_balanced_h_

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *newNode(int data);

bool binary_tree_height_balanced(Node *root);

#endif
