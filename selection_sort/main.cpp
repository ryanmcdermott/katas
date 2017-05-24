#include <iostream>
#include <assert.h>
#include "selection_sort.h"

using std::cout;

int main() {
  int array[] = {100, 12, 3, 87, 1, 5, 2, 47};
  int array_sorted[] = {1, 2, 3, 5, 12, 47, 87, 100};

  int size = sizeof(array) / sizeof(array[0]);
  selection_sort(array, size);

  int previous_number = array_sorted[0];
  for (int i = 0; i < size; i++) {
    cout << array[i];
    cout << "\n";

    assert(array_sorted[i] >= previous_number);
    previous_number = array_sorted[i];
  }
}
