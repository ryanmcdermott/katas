#include "./binary_tree_level_order.hpp"
#include <vector>

struct Node* newNode(int data) {
  struct Node* node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

void print_level(Node* root, int level) {}

int height(Node* root) {
  if (root == 0) {
    return 0;
  } else {
    int left_height = height(root->left);
    int right_height = height(root->right);

    if (left_height > right_height) {
      return left_height + 1;
    }

    return right_height + 1;
  }
}

void binary_tree_level_order() {}
