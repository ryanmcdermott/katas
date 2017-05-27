#include <assert.h>
#include <iostream>
#include <string>
#include <vector>
#include "levenshtein.hpp"

using std::vector;
using std::cout;
using std::string;

int main() {
  string s1 = "gumbo";
  string s2 = "gambol";
  int distance = levenshtein(s1, s2);

  cout << "Difference between " << s1 << " and " << s2 << " is ";
  cout << distance << " characters";

  assert(distance == 2);
}
