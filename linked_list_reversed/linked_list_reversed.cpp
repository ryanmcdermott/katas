#include "./linked_list_reversed.h"
#include <iostream>
#include <stdlib.h>

void reverse(Node *current) {
  Node *prev = NULL;
  while (current != NULL) {
    Node *next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
}
