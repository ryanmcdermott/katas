#include "./permutations.hpp"
#include <assert.h>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<char *> result;
  char str[] = "abc";
  permutations(str, 0, 2, result);

  for (auto const &permutation : result) {
    cout << permutation << "\n";
  }
}
