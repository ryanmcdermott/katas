#include "./linked_list_remove_duplicates.hpp"
#include <iostream>

using std::cout;

void push(Node **head, int data) {
  struct Node *new_node = new Node;

  new_node->data = data;
  new_node->next = (*head);
  (*head) = new_node;
}

void print_list(struct Node *head) {
  struct Node *temp = head;
  while (temp != 0) {
    cout << temp->data << "\n";
    temp = temp->next;
  }

  cout << "\n\n";
}

void linked_list_remove_duplicates(Node *head) {
  Node *current = head;
  Node *next;

  if (current == 0) {
    return;
  }

  while (current->next != 0) {
    if (current->data == current->next->data) {
      next = current->next->next;
      delete current->next;
      current->next = next;
    } else {
      current = current->next;
    }
  }
}
