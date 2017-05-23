#include <unordered_map>

using std::unordered_map;

int array_size(int array[]) {
  int size = 0;
  while (*array) {
    *array++;
    size++;
  }

  return size;
}

int *two_sum(int needle, int haystack[]) {
  int size = array_size(haystack);

  int *indexes = new int[2];
  unordered_map<int, int> lookup;

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
