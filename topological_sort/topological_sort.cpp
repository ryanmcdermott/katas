#include "./topological_sort.hpp"
#include <list>
#include <stack>

using std::list;
using std::stack;

Graph::Graph(int V) {
  this->V = V;
  adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) { adj[v].push_back(w); }

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack) {}

void Graph::topologicalSort() {}