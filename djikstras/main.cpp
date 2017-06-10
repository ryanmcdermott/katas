#include "djikstras.hpp"
#include <iostream>

using std::cout;
int main() {
  int seq = 0;
  char source_node = 'A';
  char dest_node = 'G';

  Graph g;
  g.add_vertex('A', {{'B', 1}, {'C', 4}, {'F', 2}});
  g.add_vertex('B', {{'E', 2}});
  g.add_vertex('C', {{'G', 2}, {'D', 4}});
  g.add_vertex('D', {});
  g.add_vertex('E', {{'D', 3}});
  g.add_vertex('F', {{'C', 1}, {'G', 4}});
  g.add_vertex('G', {{'E', 5}});

  cout << "\n";
  cout << "Source node: " << source_node << "\n";
  cout << "Destination node: " << dest_node << "\n";
  cout << "\n";

  for (char vertex : g.djikstra(source_node, dest_node)) {
    cout << "Path from: " << seq << " Node : " << vertex << "\n";
    seq++;
  }

  cout << "Path from: " << seq << " Node : " << source_node << "\n";
}
