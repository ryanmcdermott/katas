#include "./graph.hpp"
#include <iostream>

using std::cout;

int main() {
  Graph<int> g(4);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(1, 2);
  g.add_edge(2, 0);
  g.add_edge(2, 3);
  g.add_edge(3, 3);
}
