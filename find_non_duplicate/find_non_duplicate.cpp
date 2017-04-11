#include <vector>

using std::vector;

int find_non_duplicate(vector<int> dups) {
  int non_duplicate = dups[0];
  for (auto const &value : dups) {
    if (non_duplicate == 0 || non_duplicate == dups[0]) {
      non_duplicate ^= value;
    }
  }

  return non_duplicate;
}
