#include "./spiral_matrix.hpp"
#include <assert.h>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {
  vector<vector<int>> test{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  vector<int> spiral = spiral_matrix(test);

  assert(spiral[0][0] == 1);
  assert(spiral[0][1] == 2);
  assert(spiral[0][2] == 3);
  assert(spiral[1][0] == 6);
  assert(spiral[1][1] == 9);
  assert(spiral[1][2] == 8);
  assert(spiral[2][0] == 7);
  assert(spiral[2][1] == 4);
  assert(spiral[2][2] == 5);

  for (auto &i : spiral) {
    cout << i;
  }
}
