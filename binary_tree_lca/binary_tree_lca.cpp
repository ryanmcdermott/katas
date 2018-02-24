#include "./binary_tree_lca.hpp"

struct Node* newNode(int data) {
  struct Node* node = new Node();
  node->data = data;
  node->left = 0;
  node->right = 0;

  return node;
}

struct Node* binary_tree_lca(Node* root, int n1, int n2) {
  if (root == 0) {
    return 0;
  }

  if (root->data > n1 && root->data > n2) {
    return binary_tree_lca(root->left, n1, n2);
  }

  if (root->data < n1 && root->data < n2) {
    return binary_tree_lca(root->right, n1, n2);
  }

  return root;
}
