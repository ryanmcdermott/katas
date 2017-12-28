#include "./prime_sieve.hpp"
#include <set>
#include <vector>

using std::vector;
using std::set;

vector<int> prime_sieve(int n) {
  vector<int> primes;
  set<int> multiples;

  for (int i = 2; i < n + 1; i++) {
    auto found = multiples.find(i);

    if (found == multiples.end()) {
      for (int j = i; j < n + 1; j += i) {
        multiples.insert(j);
      }

      primes.push_back(i);
    }
  }
  return primes;
}
