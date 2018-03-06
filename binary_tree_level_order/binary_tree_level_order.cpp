#include "./binary_tree_level_order.hpp"

struct Node* newNode(int data) {
  struct Node* node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

void binary_tree_level_order() {}
