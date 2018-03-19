// Time complexity: O(nW)
// Space complexity: O(n)

#include "./knapsack.hpp"

int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int max_weight, int weights[], int values[], int item_count) {
  int dp[item_count + 1][max_weight + 1];

  for (int i = 0; i <= item_count; i++) {
    for (int w = 0; w <= max_weight; w++) {
      if (i == 0 || w == 0) {
        dp[i][w] = 0;
      } else if (weights[i - 1] <= max_weight) {
        dp[i][w] =
            max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
      } else {
        dp[i][w] = dp[i - 1][w];
      }
    }
  }

  return dp[item_count][max_weight];
}
