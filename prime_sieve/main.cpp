#include "./prime_sieve.hpp"
#include <assert.h>
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main() {
  int limit = 100;
  vector<int> primes = prime_sieve(limit);
  vector<int> truth{2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                    43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

  for (unsigned int i = 0; i < primes.size(); i++) {
    cout << primes[i] << "\n";
    assert(primes[i] == truth[i]);
  }
}
