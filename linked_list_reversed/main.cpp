#include "./linked_list_reversed.h"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  Node *head = new Node;
  push(&head, 5);
  push(&head, 9);
  push(&head, 13);
  push(&head, 20);

  print_list(head);

  reverse(&head);

  print_list(head);
  assert(head->next->data == 5);
}
