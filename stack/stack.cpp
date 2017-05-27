#include "stack.hpp"

template <typename T> Stack<T>::Stack(int lim) {
  size = 0;
  position = 0;
  limit = lim;
  items = new T[lim];
}

template <typename T> Stack<T>::~Stack() { delete[] items; }

template <typename T> void Stack<T>::push(T item) {
  items[position] = item;
  size++;
  position++;
}

template <typename T> T Stack<T>::pop() {
  size--;
  return items[--position];
}

template <typename T> int Stack<T>::getSize() { return size; }
