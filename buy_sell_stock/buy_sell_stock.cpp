#include "./buy_sell_stock.hpp"
#include <algorithm>
#include <limits>
#include <vector>

using std::vector;
using std::numeric_limits;
using std::min;
using std::max;

int buy_sell_stock(vector<int> &prices) {
  int current_min_price = numeric_limits<int>::max();
  int max_profit = 0;

  for (auto &price : prices) {
    int max_profit_now = price - current_min_price;
    max_profit = max(max_profit_now, max_profit);
    current_min_price = min(current_min_price, price);
  }

  return max_profit;
}
