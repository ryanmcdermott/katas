#include <algorithm>
#include <iostream>

using std::max;

int lcs(char *x, char *y, int m, int n) {
  int T[m + 1][n + 1];
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0) {
        T[i][j] = 0;
      } else if (x[i - 1] == y[j - 1]) {
        T[i][j] = T[i - 1][j - 1] + 1;
      } else {
        T[i][j] = max(T[i - 1][j], T[i][j - 1]);
      }
    }
  }

  return T[m][n];
}
