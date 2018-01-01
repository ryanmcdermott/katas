#ifndef prim_h_
#define prim_h_

#include <list>
#include <utility>
#include <vector>

using std::vector;
using std::pair;
using std::list;

class Graph {
  int count;
  list<pair<int, int>> *adj;

public:
  Graph(int count);
  void addEdge(int u, int v, int weight);
  vector<pair<int, int>> prim(int source);
};

#endif
