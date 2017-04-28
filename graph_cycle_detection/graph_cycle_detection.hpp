#include <list>
using std::list;

class Graph {
  int vertex_count;
  list<int> *adj;
  bool isCyclicUtil(int vertex, bool visited[], bool *stack);

public:
  Graph(int vertex_count);
  void addEdge(int source, int destination);
  bool isCyclic();
};
