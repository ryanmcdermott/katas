#include <assert.h>
#include <iostream>
#include "./bitwise_power_of_two.hpp"

using std::cout;

int main() {
  assert(bitwise_power_of_two(31) == false);
  assert(bitwise_power_of_two(32) == true);
  assert(bitwise_power_of_two(2) == true);
  assert(bitwise_power_of_two(1) == false);
  assert(bitwise_power_of_two(89) == false);
  assert(bitwise_power_of_two(5) == false);
  assert(bitwise_power_of_two(64) == true);
  assert(bitwise_power_of_two(128) == true);
  assert(bitwise_power_of_two(256) == true);
}
