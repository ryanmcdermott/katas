#include <iostream>
#include <assert.h>
#include <unordered_map>

using std::unordered_map;
using std::cout;

/**
 * Hack to get a C array size, by moving pointer up until NULL termination
 * and increasing `size` variable.
 *
 * NOTE: Using std::vector is preferred in C++. This is for learning
 * about C arrays and pointers
 */
int array_size(int array[]) {
  int size = 0;
  while (*array) {
    *array++;
    size++;
  }

  return size;
}

int* two_sum(int needle, int haystack[]) {
  int size = array_size(haystack);

  int *indexes = new int[2];
  unordered_map <int, int> lookup;

  for (int i = 0; i < size; ++i) {
    lookup.emplace(haystack[i], i);
  }

  for (int i = 0; i < size; ++i) {
    int subtracted = needle - haystack[i];
    auto search = lookup.find(subtracted);

    if (search != lookup.end()) {
      int first_index = i;
      int second_index = lookup.at(search->first);
      indexes[0] = first_index;
      indexes[1] = second_index;
    }
  }

  return indexes;
}

int main() {
  int target = 17;
  int array[] = {6, 2, 19, 24, 3, 5, 8, 12};
  int *indexes = two_sum(target, array);

  cout << "Two numbers from input array that add to " << target << " are: \n";
  cout << "First number: " << array[indexes[0]];
  cout << "\n";
  cout << "Second number: " << array[indexes[1]];
}
