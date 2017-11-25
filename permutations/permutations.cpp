#include "./permutations.hpp"
#include <iostream>
#include <string.h>
#include <vector>

using std::vector;

void swap(char *x, char *y) {
  char temp = *x;
  *x = *y;
  *y = temp;
}

void permutations(char *string, int left, int right, vector<char *> &result) {
  if (left == right) {
    char *str = new char[right];
    strcpy(str, string);
    result.push_back(str);
  }

  for (int i = left; i <= right; i++) {
    swap(string + left, string + i);
    permutations(string, left + 1, right, result);
    swap(string + left, string + i);
  }
}
