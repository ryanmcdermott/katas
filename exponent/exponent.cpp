#include "./exponent.hpp"
int exponent(int x, int y) {
  if (y == 0) {
    return 1;
  }

  int temp = exponent(x, y / 2);

  if (y % 2 == 0) {
    return temp * temp;
  } else {
    return x * temp * temp;
  }
}
