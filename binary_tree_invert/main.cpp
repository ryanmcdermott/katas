#include "./binary_tree_invert.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

void inOrder(Node *node) {
  if (node == 0)
    return;

  inOrder(node->left);
  cout << node->data;

  inOrder(node->right);
}

int main() {
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  cout << "\n Inorder traversal of the constructed tree is \n";
  inOrder(root);

  binary_tree_invert(root);

  cout << "\n Inorder traversal of the inverted tree is \n";
  inOrder(root);

  return 0;
}
