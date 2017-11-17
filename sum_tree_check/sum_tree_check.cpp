#include "./sum_tree_check.hpp"

int sum(Node *root) {
  if (root == 0) {
    return 0;
  }

  return sum(root->left) + root->data + sum(root->right);
}

bool sum_tree_check(Node *root) {}
