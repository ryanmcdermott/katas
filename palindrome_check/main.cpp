#include <assert.h>
#include <iostream>
#include "palindrome_check.hpp"

using std::cout;

int main() {
  assert(palindrome_check("taco", "ocat"));
  assert(palindrome_check("sweet", "teews"));
  assert(!palindrome_check("dennis", "ritchie"));
  assert(!palindrome_check("c++", "c++"));
  return 0;
}
