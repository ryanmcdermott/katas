#include "dfs_all_paths.h"

int main() {
  Graph g(4);
  g.add_edge(0, 1);
  g.add_edge(0, 2);
  g.add_edge(0, 3);
  g.add_edge(2, 0);
  g.add_edge(2, 1);
  g.add_edge(1, 3);

  g.print_paths(2, 3);

  return 0;
}
