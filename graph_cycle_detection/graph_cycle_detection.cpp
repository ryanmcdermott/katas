#include "graph_cycle_detection.hpp"
#include <list>

using std::list;

Graph::Graph(int vertex_count) {
  this->vertex_count = vertex_count;
  adj = new list<int>[vertex_count];
}

void Graph::addEdge(int source, int destination) {
  adj[source].push_back(destination);
}

bool Graph::isCyclicUtil(int vertex, bool visited[], bool *stack) {
  if (!visited[vertex]) {
    stack[vertex] = true;
    visited[vertex] = true;

    for (list<int>::iterator i = adj[vertex].begin(); i != adj[vertex].end();
         ++i) {
      if (!visited[*i] && isCyclicUtil(*i, visited, stack)) {
        return true;
      } else if (stack[*i]) {
        return true;
      }
    }
  }

  stack[vertex] = false;
  return false;
}

bool Graph::isCyclic() {
  bool *visited = new bool[vertex_count];
  bool *stack = new bool[vertex_count];

  for (int i = 0; i < vertex_count; i++) {
    visited[i] = false;
    stack[i] = false;
  }

  for (int i = 0; i < vertex_count; i++) {
    if (isCyclicUtil(i, visited, stack)) {
      return true;
    }
  }
  return false;
}
