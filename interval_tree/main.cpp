#include "interval_tree.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  Interval ints[] = {{15, 20}, {10, 30}, {17, 19}, {5, 20}, {12, 15}, {30, 40}};
  int n = sizeof(ints) / sizeof(ints[0]);
  IntervalNode *root = NULL;

  for (int i = 0; i < n; i++) {
    root = insert(root, ints[i]);
  }

  // inorder(root);

  Interval i = {6, 7};
  Interval *result = findOverlaps(root, i);

  if (result == NULL) {
    cout << "No overlap with interval \n";
  } else {
    cout << "Yes, overlap with interval: \n";
    cout << "Low: " << result->low << "\nHigh: " << result->high;
  }

  assert(result->low == 5);
  assert(result->high == 20);
}
