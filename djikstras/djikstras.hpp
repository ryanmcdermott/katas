#include <algorithm>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <vector>

using std::vector;
using std::unordered_map;

class Graph {
  unordered_map<char, unordered_map<char, int>> vertices;

public:
  void add_vertex(char key, unordered_map<char, int> edges);
  vector<char> djikstra(char source, char destination);
};
