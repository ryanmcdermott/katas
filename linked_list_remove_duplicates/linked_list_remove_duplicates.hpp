#ifndef linked_list_remove_duplicates_h_
#define linked_list_remove_duplicates_h_

struct Node {
  int data;
  Node *next;
};

void linked_list_remove_duplicates(Node *head);
void print_list(Node *head);
void push(Node **head, int data);

#endif
