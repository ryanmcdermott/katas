#include "./topological_sort.hpp"
#include <iostream>
#include <list>
#include <stack>

using std::list;
using std::stack;
using std::cout;

Graph::Graph(int V) {
  this->V = V;
  adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) { adj[v].push_back(w); }

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &to_visit) {
  visited[v] = true;

  for (list<int>::iterator i = adj[v].begin(); i != adj[v].end(); i++) {
    if (!visited[*i]) {
      topologicalSortUtil(*i, visited, to_visit);
    }
  }

  to_visit.push(v);
}

void Graph::topologicalSort() {
  stack<int> to_visit;
  bool *visited = new bool[V];

  for (int i = 0; i < V; i++) {
    visited[i] = false;
  }

  for (int i = 0; i < V; i++) {
    if (visited[i] == false) {
      topologicalSortUtil(i, visited, to_visit);
    }
  }

  while (to_visit.empty() == false) {
    cout << to_visit.top() << " ";
    to_visit.pop();
  }
}