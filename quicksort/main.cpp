#include <assert.h>
#include <iostream>
#include "quicksort.hpp"

using std::cout;

void print_array(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    cout << "\n";
  }
}

int main() {
  int arr[] = {4, 12, 2, 35, 17, 11, 13, 5, 7, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  quicksort(arr, 0, n - 1);
  print_array(arr, n);
}