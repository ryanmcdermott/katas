#include <iostream>
#include "selection_sort.h"

using std::cout;
using std::swap;

void swap(int array[], int i, int j) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

void selection_sort(int array[], int size) {
  for (int i = 0; i < size; i++) {
    int min = i;

    for (int j = i; j < size; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }

    swap(array, i, min);
  }
}
