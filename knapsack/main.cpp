#include "./knapsack.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  int values[] = {60, 100, 120};
  int weights[] = {10, 20, 30};
  int max_weight = 50;
  int item_count = sizeof(values) / sizeof(values[0]);

  int result = knapsack(max_weight, weights, values, item_count);

  assert(result == 220);
  cout << result;
}
