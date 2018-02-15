#include "./n_queens.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

void printBoard(vector<vector<int>> board) {
  int N = board[0].size();
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << board[i][j];
    }
  }
}

bool isMoveOpen(vector<vector<int>> board, int row, int column) {
  int N = board[0].size();
  int i, j = 0;

  for (i = 0; i < column; i++) {
    if (board[row][i]) {
      return false;
    }
  }

  for (i = row, j = column; j >= 0, i >= 0; i--, j--) {
    if (board[i][j]) {
      return false;
    }
  }

  for (i = row, j = column; i < N, j >= 0; i++, j--) {
    if (board[i][j]) {
      return false;
    }
  }

  return true;
}

bool n_queens(vector<vector<int>> board, int column) {
  int N = board[0].size();
  if (column == N) {
    printBoard(board);
    return true;
  }

  for (int i = 0; i < N; i++) {
    if (isMoveOpen(board, i, column)) {
      board[i][column] = 1;
      n_queens(board, column + 1);
      board[i][column] = 0;
    }
  }

  return false;
}
