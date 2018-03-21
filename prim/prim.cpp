// Time complexity: O(E * log(V))
// Space complexity: O(V)

#include "./prim.hpp"
#include <limits.h>
#include <functional>
#include <list>
#include <queue>
#include <utility>
#include <vector>

using std::pair;
using std::list;
using std::vector;
using std::priority_queue;
using std::greater;
using std::make_pair;

Graph::Graph(int count) {
  this->count = count;
  this->adj = new list<pair<int, int>>[count];
}

void Graph::addEdge(int u, int v, int weight) {
  this->adj[u].push_back(make_pair(v, weight));
  this->adj[v].push_back(make_pair(u, weight));
}

vector<pair<int, int>> Graph::prim(int source) {
  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 greater<pair<int, int>>>
      pq;

  vector<int> key(this->count, INT_MAX);
  vector<bool> visited(this->count, false);
  vector<int> parent(this->count, -1);
  vector<pair<int, int>> path;

  pq.push(make_pair(0, source));
  key[source] = 0;

  while (!pq.empty()) {
    int u = pq.top().second;
    pq.pop();

    visited[u] = true;
    for (list<pair<int, int>>::iterator i = adj[u].begin(); i != adj[u].end();
         ++i) {
      int v = (*i).first;
      int weight = (*i).second;

      if (!visited[v] && key[v] > weight) {
        key[v] = weight;
        pq.push(make_pair(weight, v));
        parent[v] = u;
      }
    }
  }

  for (int i = 0; i < this->count; i++) {
    path.push_back(make_pair(parent[i], i));
  }

  return path;
}
