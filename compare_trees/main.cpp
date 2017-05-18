#include "compare_trees.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  struct Node *root1 = new_node(1);
  struct Node *root2 = new_node(1);
  root1->left = new_node(2);
  root1->right = new_node(3);
  root1->left->left = new_node(4);
  root1->left->right = new_node(5);

  root2->left = new_node(2);
  root2->right = new_node(3);
  root2->left->left = new_node(4);
  root2->left->right = new_node(5);

  bool comparison = compare_trees(root1, root2);
  assert(comparison == true);
}
