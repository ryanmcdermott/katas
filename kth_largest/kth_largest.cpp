#include <iostream>
#include <queue>
#include <vector>

using std::priority_queue;
using std::vector;

int kth_largest(vector<int> &arr, int k) {
  priority_queue<int, vector<int>> pq;

  for (int item : arr) {
    pq.push(item);
  }

  while (--k) {
    pq.pop();
  }

  return pq.top();
}
