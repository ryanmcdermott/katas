#include <assert.h>
#include <iostream>
#include "graph_cycle_detection.hpp"
using std::cout;

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  auto isCyclic = g.isCyclic();
  if (isCyclic) {
    cout << "Graph contains cycle";
  } else {
    cout << "Graph doesn't contain cycle";
  }

  assert(isCyclic == true);
  return 0;
}
