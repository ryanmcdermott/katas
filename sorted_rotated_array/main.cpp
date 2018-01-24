#include <assert.h>
#include <iostream>
#include "./sorted_rotated_array.hpp"

using std::cout;

int main() {
  int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 6;

  int result;
  result = sorted_rotated_array(arr, 0, n - 1, key);

  assert(result == 2);
}
