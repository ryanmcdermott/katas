#include "./linked_list_remove_duplicates.hpp"

void push(Node **head, int data) {
  struct Node *new_node = new Node;

  new_node->data = data;
  new_node->next = (*head);
  (*head) = new_node;
}

void linked_list_remove_duplicates(Node *head) {
  Node *current = head;

  Node *next;

  if (current == 0) {
    return;
  } else {
    next = current->next;
  }

  while (current->next != 0) {
    if (current->data == current->next->data) {
      next = current->next->next;
      delete current;
      current = next;
    } else {
      current = current->next;
    }
  }
}
