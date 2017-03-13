#include "kth_largest.h"
#include <assert.h>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<int> arr = {7, 9, 1, 4, 20, 3, 16, 12};

  int kth = kth_largest(arr, 3);
  assert(kth == 3);

  cout << kth;
}
