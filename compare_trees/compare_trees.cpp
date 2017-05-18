#include "compare_trees.hpp"
#include <stddef.h>

struct Node *new_node(int data) {
  struct Node *node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return node;
}

bool compare_trees(struct Node *left, struct Node *right) {
  if (left == NULL && right == NULL) {
    return true;
  }

  if (left->data != NULL && right->data != NULL) {
    return (left->data == right->data &&
            compare_trees(left->left, right->left) &&
            compare_trees(left->right, right->right));
  }

  return false;
}
