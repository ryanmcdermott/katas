#include "./binary_tree_height_balanced.hpp"
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { return (a >= b) ? a : b; }

struct Node *newNode(int data) {
  struct Node *node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

int binary_tree_height(Node *node) {
  if (node == 0) {
    return 0;
  }

  return 1 +
         max(binary_tree_height(node->left), binary_tree_height(node->right));
}

bool binary_tree_height_balanced(Node *root) {
  if (root == 0) {
    return true;
  }

  int left_height = binary_tree_height(root->left);
  int right_height = binary_tree_height(root->right);

  if (abs(left_height - right_height) <= 1 &&
      binary_tree_height_balanced(root->left) &&
      binary_tree_height_balanced(root->right)) {
    return true;
  }
  return false;
}
