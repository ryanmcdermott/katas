#ifndef binary_tree_lca_h_
#define binary_tree_lca_h_

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node *newNode(int data);
struct Node *binary_tree_lca(Node *root, int n1, int n2);

#endif
