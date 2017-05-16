#include "./bfs.hpp"
#include <iostream>
#include <list>

using std::list;
using std::cout;

Graph::Graph(int vertex_count) {
  adj = new list<int>[vertex_count];
  this->vertex_count = vertex_count;
}

void Graph::add_edge(int source, int destination) {
  adj[source].push_back(destination);
}

void Graph::bfs(int source) {
  list<int> q;

  bool *visited = new bool[vertex_count];
  for (int i = 0; i < vertex_count; i++) {
    visited[i] = false;
  }

  visited[source] = true;
  q.push_back(source);

  while (!q.empty()) {
    int item = q.front();
    cout << item;
    q.pop_front();

    for (auto i = adj[item].begin(); i != adj[item].end(); i++) {
      if (!visited[*i]) {
        visited[*i] = true;
        q.push_back(*i);
      }
    }
  }
}
