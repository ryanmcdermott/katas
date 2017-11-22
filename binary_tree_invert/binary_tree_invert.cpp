#include "./binary_tree_invert.hpp"

struct Node *newNode(int data) {
  struct Node *node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

void binary_tree_invert(Node *root) {
  if (root == 0) {
    return;
  }

  binary_tree_invert(root->left);
  binary_tree_invert(root->right);

  Node *temp = root->left;
  root->left = root->right;
  root->right = temp;
}
