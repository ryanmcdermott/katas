#ifndef binary_tree_level_order_h_
#define binary_tree_level_order_h_

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *newNode(int data);

#endif
