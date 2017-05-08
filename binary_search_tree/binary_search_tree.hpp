#ifndef BST_H_
#define BST_H_

struct Node {
  int key;
  struct Node *left, *right;
};

void inorder(struct Node *root);

struct Node *new_node(int key);

struct Node *insert(struct Node *node, int key);

struct Node *min_node(struct Node *root);

struct Node *delete_node(struct Node *root, int key);

#endif
