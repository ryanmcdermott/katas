#include <assert.h>
#include <iostream>
#include "./exponent.hpp"

using std::cout;

int main() {
  int result;

  result = exponent(2, 5);
  assert(result == 32);

  result = exponent(5, 2);
  assert(result == 25);

  result = exponent(4, 3);
  assert(result == 64);
}
