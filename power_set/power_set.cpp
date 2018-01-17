#include "./power_set.hpp"
#include <math.h>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::vector;
using std::string;

vector<string> power_set(string set, unsigned int set_size) {
  vector<string> results;
  unsigned int power_set_size = pow(2, set_size);

  for (unsigned int i = 0; i < power_set_size; i++) {
    string subset = "";
    for (unsigned int j = 0; j < set_size; j++) {
      if (i & (1 << j)) {
        subset += set[j];
      }
    }

    results.push_back(subset);
  }

  return results;
}
