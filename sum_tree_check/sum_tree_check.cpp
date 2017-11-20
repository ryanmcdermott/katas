#include "./sum_tree_check.hpp"

struct Node *newNode(int data) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->data = data;
  node->left = 0;
  node->right = 0;
  return (node);
}

int sum(Node *root) {
  if (root == 0) {
    return 0;
  }

  return sum(root->left) + root->data + sum(root->right);
}

bool sum_tree_check(Node *root) {
  if (root == 0 || root->left == 0 || root->right == 0) {
    return true;
  }

  int left_sum = sum(root->left);
  int right_sum = sum(root->right);

  if (left_sum + right_sum == root->data && sum_tree_check(root->left) &&
      sum_tree_check(root->right)) {
    return true;
  }

  return false;
}
