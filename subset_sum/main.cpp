#include <assert.h>
#include <iostream>
#include "./subset_sum.hpp"

using std::cout;

int main() {
  int set[] = {2, 3, 5, 7, 20};
  int n = sizeof(set) / sizeof(set[0]);
  bool isSubset = subset_sum(set, n, 28);
}
