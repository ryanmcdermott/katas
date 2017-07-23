#include "shuffle.hpp"
#include <iostream>

using std::cout;

void print_array(int arr[], int n) {
  cout << "Shuffled array: \n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "\n";
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]) - 1;
  shuffle(arr, n);
  print_array(arr, n);
}
