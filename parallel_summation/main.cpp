#include "parallel_summation.hpp"
#include <iostream>

using std::cout;

int main() {
  const int thread_count = 4;
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

  int sum =
      parallel_summation(array, thread_count, sizeof(array) / sizeof(array[0]));

  cout << sum;
}
