#include <stdlib.h>

#ifndef sum_tree_check_h_
#define sum_tree_check_h_

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *newNode(int data) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->data = data;
  node->left = 0;
  node->right = 0;
  return (node);
}

bool sum_tree_check(Node *root);

#endif
