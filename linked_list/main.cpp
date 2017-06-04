#include "linked_list.cpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  LinkedList<int> linked_list;
  linked_list.push_front(25);
  linked_list.push_front(20);
  linked_list.push_front(12);
  linked_list.push_front(7);

  linked_list.print();

  Node<int> *front;
  front = linked_list.pop_front();
  assert(front->data == 7);

  front = linked_list.pop_front();
  assert(front->data == 12);

  front = linked_list.pop_front();
  assert(front->data == 20);

  front = linked_list.pop_front();
  assert(front->data == 25);
}
