#include "./binary_tree_height_balanced.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  struct Node *root = newNode(4);
  root->left = newNode(2);
  root->right = newNode(5);
  root->left->left = newNode(1);
  root->left->right = newNode(3);
  root->left->right->right = newNode(1);

  bool isBalanced = binary_tree_height_balanced(root);
  assert(isBalanced == false);

  root = newNode(5);
  root->left = newNode(3);
  root->left->left = newNode(1);
  root->left->right = newNode(4);

  root->right = newNode(8);
  root->right->left = newNode(7);
  root->right->right = newNode(9);

  isBalanced = binary_tree_height_balanced(root);
  assert(isBalanced == true);
}
