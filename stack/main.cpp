#include "stack.cpp"
#include <assert.h>
#include <iostream>

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
