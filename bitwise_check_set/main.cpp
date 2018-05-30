#include <assert.h>
#include <iostream>
#include "./bitwise_check_set.hpp"

using std::cout;

int main() {
  int count;

  count = bitwise_check_set(0);
  assert(count == 0);

  count = bitwise_check_set(1);
  assert(count == 1);

  count = bitwise_check_set(2);
  assert(count == 1);

  count = bitwise_check_set(5);
  assert(count == 2);

  count = bitwise_check_set(11);
  assert(count == 3);

}
