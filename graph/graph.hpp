#ifndef GRAPH_HPP_
#define GRAPH_HPP_
#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using std::cout;
using std::unordered_map;
using std::unordered_set;
using std::queue;

template <typename T> class Graph {
private:
  unordered_map<T, unordered_set<T>> adjlist;

public:
  Graph(){};

  void add_edge(T v, T w) { adjlist[v].insert(w); }

  void print() {
    for (auto vert : adjlist) {
      for (auto adj_vert : vert.second) {
        cout << vert.first << " - " << adj_vert << "\n";
      }
    }
  }

  bool is_path_between(T source, T destination) {
    queue<T> q;
    unordered_map<T, bool> visited;
    T vertex = source;

    q.push(vertex);

    visited[source] = true;

    while (!q.empty()) {
      vertex = q.front();
      q.pop();

      for (auto adj : adjlist[vertex]) {
        if (!visited[adj]) {
          if (adj == destination) {
            return true;
          }

          q.push(adj);
          visited[adj] = true;
        }
      }
    }

    return false;
  }
};

#endif
