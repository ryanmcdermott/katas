#ifndef GRAPH_HPP_
#define GRAPH_HPP_
#include <list>
#include <unordered_map>

using std::list;

template <class T> class Graph {
  using Edge = std::pair<T, T>;
  using EdgeList = std::list<Edge>;
  using AdjacencyList = std::unordered_map<T, EdgeList>;

private:
  int vertex_count;
  AdjacencyList *adj;

public:
  Graph(int count);
  ~Graph();
  void add_edge(T source, T destination);
  bool is_path_between(T source, T destination);
};

#endif
