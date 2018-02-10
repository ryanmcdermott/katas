#include <assert.h>
#include <iostream>
#include <vector>
#include "./matrix_rotate.hpp"

using std::cout;
using std::vector;

int main() {
  vector<vector<int>> matrix;
  matrix.push_back({1, 2, 3, 4});
  matrix.push_back({5, 6, 7, 8});
  matrix.push_back({9, 10, 11, 12});
  matrix.push_back({13, 14, 15, 16});
  matrix_rotate(matrix);
  print_matrix(matrix);
}
