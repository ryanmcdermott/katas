#include <list>

#ifndef DFS_ALL_ALL_PATHS_H
#define DFS_ALL_ALL_PATHS_H

class Graph {
  int vertex_count;
  std::list<int> *adjacency_list;
  void print_paths_helper(int u, int destination, bool visited[],
                          int path[], int &path_idx);

public:
  Graph(int V);
  void add_edge(int source, int destination);
  void print_paths(int source, int destination);
};

#endif DFS_ALL_ALL_PATHS_H
