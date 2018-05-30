#include "./bitwise_check_set.hpp"
int bitwise_check_set(int number) {
  int count = 0;
  while (number > 0) {
    if (number & 1 == 1) {
      count++;
    }

    number >>= 1;
  }

  return count;
}
