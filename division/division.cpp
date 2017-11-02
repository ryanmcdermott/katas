int divide(int a, int b) {
  int divisor = b;
  int current = 1;
  int result = 0;

  if (a == b) {
    return 1;
  }

  if (b > a) {
    return 0;
  }

  while (a > divisor) {
    current <<= 1;
    divisor <<= 1;
  }

  while (current != 0) {
    if (a >= divisor) {
      a -= divisor;
      result |= current;
    }

    divisor >>= 1;
    current >>= 1;
  }

  return result;
}
