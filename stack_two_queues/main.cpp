#include <assert.h>
#include <iostream>
#include "./stack_two_queues.hpp"

using std::cout;

int main() {
  stack_two_queues stack;
  stack.push(4);
  stack.push(5);
  stack.push(6);
  stack.push(7);

  int result;

  result = stack.top();
  assert(result == 7);
  stack.pop();

  result = stack.top();
  assert(result == 6);
  stack.pop();

  result = stack.top();
  assert(result == 5);
  stack.pop();

  result = stack.top();
  assert(result == 4);
}
