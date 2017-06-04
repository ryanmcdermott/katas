#include "linked_list.hpp"
#include <iostream>

using std::cout;

template <class T> void LinkedList<T>::print() {
  Node<T> *node = this->get_front();
  while (node) {
    cout << node->data << "\n";
    node = node->next;
  }
}

template <class T> Node<T> *LinkedList<T>::get_front() { return this->head; }

template <class T> void LinkedList<T>::push_front(T item) {
  Node<T> *node = new Node<T>;
  node->data = item;

  Node<T> *previous_head = head;

  head = node;
  head->next = previous_head;

  this->length += 1;
}

template <class T> Node<T> *LinkedList<T>::pop_front() {
  Node<T> *previous_head = head;
  head = this->head->next;
  this->length -= 1;
  return previous_head;
}
