#include "./graph.hpp"
#include <algorithm>
#include <list>

using std::list;
using std::find;

template <class T> Graph<T>::Graph() { this->adj = new AdjacencyList; }

template <class T> Graph<T>::~Graph() { delete adj; }

template <class T> void Graph<T>::add_edge(T source, T destination) {
  this->adj[source].push_back(destination);
}

template <class T> bool Graph<T>::is_path_between(T source, T destination) {
  list<T> q;
  list<T> visited;

  visited.push_back(source);
  q.push_back(source);

  while (!q.empty()) {
    T item = q.front();
    visited.push_back(item);
    q.pop_front();

    for (auto i = this->adj[item].begin(); i != adj[item].end(); i++) {
      if (find(adj[item].begin(), adj[item].end(), i) != adj[item].end()) {
        if (item == destination) {
          return true;
        }

        q.push_back(i);
      }
    }
  }

  return false;
}
