#include "./subset_sum.hpp"
bool subset_sum(int set[], int n, int sum) {
  bool subset[n + 1][sum + 1];
  for (int i = 0; i <= n; i++) {
    subset[i][0] = true;
  }

  for (int i = 0; i <= sum; i++) {
    subset[0][i] = false;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= sum; j++) {
      if (j < set[i - 1]) {
        subset[i][j] = subset[i - 1][j];
      } else {
        subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
      }
    }
  }

  return subset[n][sum];
}
