#include "binary_tree_check.hpp"
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

  bool isBST = binary_tree_check(root);
  assert(isBST == false);

  root = newNode(5);
  root->left = newNode(3);
  root->left->left = newNode(1);
  root->left->right = newNode(4);

  root->right = newNode(8);
  root->right->left = newNode(7);
  root->right->right = newNode(9);

  isBST = binary_tree_check(root);
  assert(isBST == true);
}
