#include <iostream>
#include <vector>

using std::cout;
using std::vector;

vector<int> spiral_matrix(vector<vector<int>> mat) {
  vector<int> spiral;
  int left = 0;
  int top = 0;
  int right = mat[0].size() - 1;
  int down = mat.size() - 1;

  while (top <= down && left <= right) {
    for (int j = left; j <= right; ++j) {
      spiral.push_back(mat[top][j]);
    }
    top++;

    for (int i = top; i <= down; ++i) {
      spiral.push_back(mat[i][right]);
    }
    right--;

    for (int j = right; j >= left; --j) {
      spiral.push_back(mat[down][j]);
    }
    down--;

    for (int i = down; i >= top; --i) {
      spiral.push_back(mat[i][left]);
    }
    left++;
  }

  return spiral;
}
