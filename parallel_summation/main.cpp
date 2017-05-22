#include "parallel_summation.hpp"
#include <assert.h>
#include <stdio.h>

int simple_sum(int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }

  return sum;
}

int main() {
  const int thread_count = 4;
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int n = sizeof(array) / sizeof(array[0]);
  int precomputed_sum = simple_sum(array, n);

  int sum = parallel_summation(array, thread_count, n);

  printf("Sum is: %d", sum);
  assert(sum == precomputed_sum);
}
