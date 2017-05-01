#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::string;
using std::min;

int levenshtein(string s1, string s2) {
  int m = s1.size();
  int n = s2.size();

  vector<vector<int>> d(m + 1, vector<int>(n + 1));
  d[0][0] = 0;

  for (int i = 0; i <= m; i++) {
    d[i][0] = 0;
  }

  for (int j = 0; j <= n; j++) {
    d[0][j] = 0;
  }

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      int cost = s1[i] == s2[j] ? 0 : 1;
      d[i][j] = min({d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + cost});
    }
  }

  return d[m][n];
}
