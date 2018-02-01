#include <assert.h>
#include <iostream>
#include <vector>
#include "./buy_sell_stock.hpp"

using std::cout;
using std::vector;

int main() {
  vector<int> prices = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
  int result = buy_sell_stock(prices);
  assert(result == 30);
}
