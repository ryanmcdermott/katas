#include "./prim.hpp"
#include <assert.h>
#include <iostream>

using std::cout;

int main() {
  int count = 9;
  Graph g(count);

  g.addEdge(0, 1, 4);
  g.addEdge(0, 7, 8);
  g.addEdge(1, 2, 8);
  g.addEdge(1, 7, 11);
  g.addEdge(2, 3, 7);
  g.addEdge(2, 8, 2);
  g.addEdge(2, 5, 4);
  g.addEdge(3, 4, 9);
  g.addEdge(3, 5, 14);
  g.addEdge(4, 5, 10);
  g.addEdge(5, 6, 2);
  g.addEdge(6, 7, 1);
  g.addEdge(6, 8, 6);
  g.addEdge(7, 8, 7);

  vector<pair<int, int>> spanning_tree = g.prim(0);

  for (auto &p : spanning_tree) {
    cout << p.first << " - " << p.second << "\n";
  }
}
