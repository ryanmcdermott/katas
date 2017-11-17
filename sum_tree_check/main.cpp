#include "./sum_tree_check.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  struct Node *root = newNode(26);
  root->left = newNode(10);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(6);
  root->right->right = newNode(3);
  bool is_sum_tree = sum_tree_check(root);
  assert(is_sum_tree == true);
}
