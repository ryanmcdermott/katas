#include <assert.h>
#include <iostream>
#include "./reverse_digits.hpp"

using std::cout;

int main() {
  int result;

  result = reverse_digits(123);
  assert(result == 321);

  result = reverse_digits(55);
  assert(result == 55);

  result = reverse_digits(291);
  assert(result == 192);

  result = reverse_digits(8);
  assert(result == 8);

  result = reverse_digits(1037);
  assert(result == 7301);
}
