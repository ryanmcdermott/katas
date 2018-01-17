#include <assert.h>
#include <iostream>
#include "./power_set.hpp"

using std::cout;

int main() {
  vector<string> results = power_set("abc", 3);
  for (auto& subset : results) {
    cout << subset << "\n";
  }
}
