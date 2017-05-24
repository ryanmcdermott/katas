#include <iostream>
#include <assert.h>
#include "binary_search.hpp"

using std::cout;

int main() {
  int sorted_arr[8] = {1, 3, 7, 20, 27, 36, 42, 79};
  int find = 42;
  int found = binary_search(find, sorted_arr);
  assert(found == 6);

  cout << "Binary Search found value 42 in sorted array at index " << found;
}
