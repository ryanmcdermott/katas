#include <assert.h>
#include <iostream>
#include "./linked_list_remove_duplicates.hpp"

using std::cout;

int main() {
  Node* head = 0;

  push(&head, 20);
  push(&head, 13);
  push(&head, 13);
  push(&head, 11);
  push(&head, 11);
  push(&head, 11);

  cout << "Linked List with duplicates \n";
  print_list(head);

  linked_list_remove_duplicates(head);

  cout << "Linked List without duplicates \n";
  print_list(head);
}
