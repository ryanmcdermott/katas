#include "two_sum.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  int target = 17;
  int array[] = {6, 2, 19, 24, 3, 5, 8, 12};
  int *indexes = two_sum(target, array);

  cout << "Two numbers from input array that add to " << target << " are: \n";
  cout << "First number: " << array[indexes[0]];
  cout << "\n";
  cout << "Second number: " << array[indexes[1]];
}
