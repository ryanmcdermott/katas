#include "./spiral_matrix.hpp"
#include <assert.h>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {
  vector<vector<int>> test{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  vector<int> spiral = spiral_matrix(test);
  for (auto &i : spiral) {
    cout << i;
  }
}
