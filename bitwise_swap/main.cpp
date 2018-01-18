#include <assert.h>
#include <iostream>
#include "./bitwise_swap.hpp"

using std::cout;

int main() {
  long result;
  result = bitwise_swap(45, 1, 5);

  // 45: 101101
  // 15: 001111
  //
  // bitwise_swap in this case flips bit 1, which is 0 in 45, and bit 5 which is
  // the first 1
  assert(result == 15);
}
