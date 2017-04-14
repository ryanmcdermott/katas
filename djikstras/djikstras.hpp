#include <bits/stdc++.h>
using namespace std;

class Graph {
  int V;

  list<pair<int, int>> *adj;

public:
  Graph(int V);

  void addEdge(int u, int v, int w);

  void djikstra(int s);
};
