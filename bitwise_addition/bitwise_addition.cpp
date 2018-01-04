#include "./bitwise_addition.hpp"
int bitwise_addition(int x, int y) {
  while (y != 0) {
    int carry = x & y;
    x ^= y;
    y = carry << 1;
  }

  return x;
}
