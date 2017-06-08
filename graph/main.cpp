#include "./graph.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  Graph<int> g;
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(1, 2);
  g.add_edge(1, 4);
  g.add_edge(2, 3);
  g.print();

  bool path_betweeen = g.is_path_between(0, 3);
  assert(path_betweeen == true);

  path_betweeen = g.is_path_between(2, 4);
  assert(path_betweeen == false);
}
