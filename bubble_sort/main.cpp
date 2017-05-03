#include "bubble_sort.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

void print_array(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    cout << "\n";
  }
}

int main() {
  int arr[] = {6, 2, 5, 1, 20, 35, 27, 8, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubble_sort(arr, n);
  print_array(arr, n);
}
