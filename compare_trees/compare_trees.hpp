#ifndef COMPARE_TREES_H_
#define COMPARE_TREES_H_

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *new_node(int data);

bool compare_trees(struct Node *l, struct Node *r);

#endif
