#include "./matrix_rotate.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

void matrix_rotate(vector<vector<int>> &matrix) {
  int N = matrix[0].size();
  for (int x = 0; x < (N / 2); x++) {
    for (int y = x; y < N - x - 1; y++) {
      int temp = matrix[x][y];
      matrix[x][y] = matrix[y][N - x - 1];
      matrix[y][N - x - 1] = matrix[N - x - 1][N - y - 1];
      matrix[N - x - 1][N - y - 1] = matrix[N - 1 - y][x];
      matrix[N - 1 - y][x] = temp;
    }
  }
}

void print_matrix(vector<vector<int>> matrix) {
  for (auto &row : matrix) {
    for (auto &item : row) {
      cout << item << "\n";
    }
  }
}
