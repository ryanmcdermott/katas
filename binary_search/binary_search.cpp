int binary_search(int needle, int haystack[]) {
  int right = sizeof(haystack);
  int left = 0;

  while (left <= right) {
    int i = (left + right) / 2;

    if (haystack[i] == needle) {
      return i;
    } else if (haystack[i] < needle) {
      left = i + 1;
    } else if (haystack[i] > needle) {
      right = i - 1;
    }
  }

  return -1;
}
