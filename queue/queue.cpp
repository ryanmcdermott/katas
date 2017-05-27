#include "./queue.hpp"

template <typename T>
Queue<T>::Queue(int lim) {
  size = 0;
  limit = lim;
  items = new T[lim];
}

template <typename T>
Queue<T>::~Queue() {
  delete[] items;
}

template <typename T>
T Queue<T>::pop_front() {
  T front = items[0];
  for (int i = 0; i < size; i++) {
    items[i] = items[i + 1];
  }
}

template <typename T>
T Queue<T>::front() {
  return items[0];
}

template <typename T>
int Queue<T>::get_size() {
  return size;
}

template <typename T>
void Queue<T>::push_back(T item) {
  items[size] = item;
  size++;
}

template <typename T>
bool Queue<T>::empty() {
  return size == 0;
}
