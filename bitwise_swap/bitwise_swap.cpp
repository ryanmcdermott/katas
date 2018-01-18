#include "./bitwise_swap.hpp"
long bitwise_swap(long x, int i, int j) {
  // if the two bits don't differ, don't swap
  if (((x >> i) & 1) != ((x >> j) & 1)) {
    // OR the two bits together to be changed
    long bitmask = (1L << i) | (1L << j);

    // XOR the bitmask to flip individual bit positions
    x ^= bitmask;
  }

  return x;
}
