#include "./bitwise_addition.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  int result;

  result = bitwise_addition(4, 5);
  assert(result == 9);

  result = bitwise_addition(13, 2);
  assert(result == 15);

  result = bitwise_addition(1, 2);
  assert(result == 3);

  result = bitwise_addition(100, 100);
  assert(result == 200);
}
