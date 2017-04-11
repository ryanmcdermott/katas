#include "find_non_duplicate.hpp"
#include <assert.h>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  vector<int> dups;
  dups.push_back(42);
  dups.push_back(42);
  dups.push_back(42);
  dups.push_back(42);
  dups.push_back(42);
  dups.push_back(5);
  dups.push_back(42);
  dups.push_back(42);
  int non_duplicate = find_non_duplicate(dups);
  cout << non_duplicate;
  assert(non_duplicate == 5);
}
