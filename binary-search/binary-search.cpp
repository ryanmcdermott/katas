#include <iostream>
#include <assert.h>

using std::cout;

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

int main() {
  int sorted_arr[8] = {1, 3, 7, 20, 27, 36, 42, 79};
  int find = 42;
  int found = binary_search(find, sorted_arr);
  assert(found == 6);

  cout << "Binary Search found value 42 in sorted array at index " << found;
}
