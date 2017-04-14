#include "djikstras.hpp"
#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <utility>
using namespace std;
typedef pair<int, int> iPair;

Graph::Graph(int V) {
  this->V = V;
  adj = new list<pair<int, int>>[V];
}

void Graph::addEdge(int u, int v, int w) {
  adj[u].push_back(make_pair(v, w));
  adj[v].push_back(make_pair(u, w));
}

void Graph::djikstra(int src) {
  priority_queue<pair<int, int>> pq;
  priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
  vector<pair<int, int>> dist(V, std::numeric_limits<int>::max());
  dist[src] = 0;
  pq.push(make_pair(src, 0));
  while (!pq.empty()) {
    int u = pq.top().first;

    pq.pop();

    for (list<pair<int, int>>::iterator i = adj[u].begin(); i != adj[u].end();
         ++i) {
      int v = (*i).first;
      int neighbor_weight = (*i).second;

      if (dist[v] > dist[u] + neighbor_weight) {
        dist[v] = dist[u] + neighbor_weight;
        pq.push(make_pair(v, dist[v]));
      }
    }
  }

  return dist;
}
