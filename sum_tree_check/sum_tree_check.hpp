#include <stdlib.h>

#ifndef sum_tree_check_h_
#define sum_tree_check_h_

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *newNode(int data);

bool sum_tree_check(Node *root);

#endif
