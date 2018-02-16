#include <assert.h>
#include <iostream>
#include "./n_queens.hpp"

using std::cout;

int main() {
  vector<vector<int>> board;
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});
  board.push_back({0, 0, 0, 0, 0, 0, 0, 0});

  n_queens(board, 0);
}
