#include "./bfs.hpp"
#include <iostream>

using std::cout;

int main() {
  Graph g(4);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(1, 2);
  g.add_edge(2, 0);
  g.add_edge(2, 3);
  g.add_edge(3, 3);

  cout << "BFS from starting node 2: \n \n";
  g.bfs(2);

  return 0;
}
