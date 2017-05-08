#include "./binary_search_tree.hpp"
#include <iostream>

using std::cout;

void inorder(struct Node *root) {
  if (root != NULL) {
    inorder(root->left);
    cout << root->key << "\n";
    inorder(root->right);
  }
}

struct Node *new_node(int key) {
  struct Node *node = new Node();
  node->key = key;
  node->left = NULL;
  node->right = NULL;
  return node;
}

struct Node *insert(struct Node *node, int key) {
  if (node == NULL) {
    return new_node(key);
  }

  if (key < node->key) {
    node->left = insert(node->left, key);
  } else {
    node->right = insert(node->right, key);
  }

  return node;
}

struct Node *min_node(struct Node *root) {
  struct Node *current = root;
  while (current->left != NULL) {
    current = current->left;
  }

  return current;
}

struct Node *delete_node(struct Node *root, int key) {
  if (root == NULL) {
    return root;
  }

  if (key < root->key) {
    root->left = delete_node(root->left, key);
  } else if (key > root->key) {
    root->right = delete_node(root->right, key);
  } else {
    if (root->left == NULL) {
      struct Node *temp = root->right;
      delete root;
      return temp;
    }

    if (root->right == NULL) {
      struct Node *temp = root->left;
      delete root;
      return temp;
    }

    struct Node *temp = min_node(root->right);

    root->key = temp->key;

    root->right = delete_node(root->right, temp->key);
  }

  return root;
}
