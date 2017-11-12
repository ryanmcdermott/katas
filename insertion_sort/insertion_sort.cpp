#include "./insertion_sort.hpp"
void insertion_sort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j -= 1;
    }

    arr[j + 1] = key;
  }
}
