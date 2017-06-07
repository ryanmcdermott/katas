#ifndef GRAPH_HPP_
#define GRAPH_HPP_
#include <list>
#include <unordered_map>

using std::list;

template <class T> class Graph {
  using EdgeList = std::list<T>;
  using AdjacencyList = std::unordered_map<T, EdgeList>;

private:
  AdjacencyList *adj;

public:
  Graph();
  ~Graph();
  void add_edge(T source, T destination);
  bool is_path_between(T source, T destination);
};

#endif
