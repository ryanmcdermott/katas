#include "./binary_search_tree.hpp"
#include <iostream>

using std::cout;

int main() {
  /*
            50
         /     \
        30      70
       /  \    /  \
     20   40  60   80
 */

  struct Node *root = NULL;
  struct Node *top = NULL;
  root = insert(root, 50);

  top = root;

  root = insert(root, 30);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 70);
  root = insert(root, 60);
  root = insert(root, 80);

  cout << "Inorder traversal of BST \n";
  inorder(root);

  cout << "Delete 50 \n";
  root = delete_node(top, 50);
  cout << "Inorder traversal of the modified tree \n";
  inorder(root);

  return 0;
}
