#include "binary_tree_check.hpp"
#include <limits.h>

struct Node *newNode(int data) {
  struct Node *node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

bool binary_tree_check_helper(Node *node, int min, int max) {
  if (node == 0) {
    return true;
  }

  if (node->data < min || node->data > max) {
    return false;
  }

  return binary_tree_check_helper(node->left, min, node->data - 1) &&
         binary_tree_check_helper(node->right, node->data + 1, max);
}

bool binary_tree_check(Node *root) {
  return binary_tree_check_helper(root, INT_MIN, INT_MAX);
}
