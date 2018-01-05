#include "division.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  int result = divide(757, 5);
  assert(result == 151);

  cout << "Dividing 757 by 5 \n";
  cout << "Result is " << result;
}
