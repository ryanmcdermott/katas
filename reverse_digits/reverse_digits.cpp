#include "./reverse_digits.hpp"
int reverse_digits(int num) {
  int result = 0;
  int num_remaining = num;

  while (num_remaining) {
    result = (result * 10) + (num_remaining % 10);
    num_remaining /= 10;
  }

  return result;
}
