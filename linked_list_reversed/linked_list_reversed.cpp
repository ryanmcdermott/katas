#include "./linked_list_reversed.h"
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

void reverse(Node **head) {
  struct Node *prev = 0;
  struct Node *current = *head;
  struct Node *next;
  while (current != 0) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  *head = prev;
}
