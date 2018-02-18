#ifndef topological_sort_h_
#define topological_sort_h_

#include <list>
#include <stack>

using std::list;
using std::stack;

void topological_sort();

class Graph {
  int V;

  list<int> *adj;

  void topologicalSortUtil(int v, bool visited[], stack<int> &Stack);

 public:
  Graph(int V);
  void addEdge(int v, int w);
  void topologicalSort();
};

#endif
