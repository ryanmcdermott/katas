#include "./graph.hpp"
#include <list>

using std::list;

template <class T> Graph<T>::Graph(int count) {
  this->adj = new AdjacencyList;
  this->vertex_count = count;
}

template <class T> Graph<T>::~Graph() { delete adj; }

template <class T> void Graph<T>::add_edge(T source, T destination) {}

template <class T> bool Graph<T>::is_path_between(T source, T destination) {}
