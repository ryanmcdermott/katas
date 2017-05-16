#ifndef BFS_HPP_
#define BFS_HPP_

#include <list>

using std::list;

class Graph {
  int vertex_count;
  list<int> *adj;

public:
  Graph(int vertex_count);
  void add_edge(int source, int destination);
  void bfs(int source);
};

#endif
