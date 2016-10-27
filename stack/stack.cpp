#include <assert.h>
#include <iostream>

template <typename T>
class Stack {
private:
  T *items;
  int limit;
  int size;
  int position;
public:
  Stack(int limit);
  ~Stack();
  T pop();
  void push(T);
  int getSize();
};

template <typename T>
Stack<T>::Stack(int lim) {
  size = 0;
  position = 0;
  limit = lim;
  items = new T[lim];
}

template <typename T>
Stack<T>::~Stack() {
  delete[] items;
}

template <typename T>
void Stack<T>::push(T item) {
  items[position] = item;
  size++;
  position++;
}

template <typename T>
T Stack<T>::pop() {
  size--;
  return items[--position];
}

template <typename T>
int Stack<T>::getSize() {
  return size;
}

int main() {
  Stack<int> s(10);

  s.push(42);
  s.push(75);
  s.push(100);

  assert(s.getSize() == 3);
  assert(s.pop() == 100);
  assert(s.pop() == 75);
  assert(s.pop() == 42);
}
