#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

template <class T> struct Node {
  T data;
  Node<T> *next;
};

template <class T> class LinkedList {
private:
  Node<T> *head;

public:
  LinkedList() : head(0) {}
  void push_front(const T item);
  Node<T> *get_front();

  Node<T> *pop_front();
  void print();
  int length = 0;
};

#endif
