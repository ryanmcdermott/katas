#include <assert.h>
#include <iostream>
#include "./binary_tree_lca.hpp"

using std::cout;

int main() {
  struct Node *root = newNode(20);
  root->left = newNode(8);
  root->right = newNode(22);
  root->left->left = newNode(4);
  root->left->right = newNode(12);
  root->left->right->left = newNode(10);
  root->left->right->right = newNode(14);

  struct Node *t;

  int n1 = 10, n2 = 14;
  t = binary_tree_lca(root, n1, n2);
  assert(t->data == 12);

  n1 = 14, n2 = 8;
  t = binary_tree_lca(root, n1, n2);
  assert(t->data == 8);

  n1 = 10, n2 = 22;
  t = binary_tree_lca(root, n1, n2);
  assert(t->data == 20);
}
