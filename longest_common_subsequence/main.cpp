#include <assert.h>
#include <string.h>
#include <iostream>
#include "longest_common_subsequence.hpp"

using std::cout;

int main() {
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";

  int m = strlen(X);
  int n = strlen(Y);

  int lcs_length = lcs(X, Y, m, n);
  cout << "Length of LCS is " << lcs_length;
  assert(lcs_length == 4);
}
