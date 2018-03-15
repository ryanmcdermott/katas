// Time complexity: O(E log(V))
// Space complexity: O(V)

#include "djikstras.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <vector>

using std::vector;
using std::unordered_map;
using std::numeric_limits;

void Graph::add_vertex(char key, unordered_map<char, int> edges) {
  vertices.insert(
      unordered_map<char, const unordered_map<char, int>>::value_type(key,
                                                                      edges));
}

vector<char> Graph::djikstra(char start, char finish) {
  unordered_map<char, int> distances;
  unordered_map<char, char> previous;

  vector<char> nodes;
  vector<char> path;

  auto comparator = [&](char left, char right) {
    return distances[left] > distances[right];
  };

  for (auto &vertex : vertices) {
    if (vertex.first == start) {
      distances[vertex.first] = 0;
    } else {
      distances[vertex.first] = numeric_limits<int>::max();
    }

    nodes.push_back(vertex.first);
    push_heap(begin(nodes), end(nodes), comparator);
  }

  while (!nodes.empty()) {
    pop_heap(begin(nodes), end(nodes), comparator);
    char smallest = nodes.back();
    nodes.pop_back();

    if (smallest == finish) {
      while (previous.find(smallest) != end(previous)) {
        path.push_back(smallest);
        smallest = previous[smallest];
      }

      break;
    }

    for (auto &neighbor : vertices[smallest]) {
      int alt = distances[smallest] + neighbor.second;

      if (alt < distances[neighbor.first]) {
        distances[neighbor.first] = alt;
        previous[neighbor.first] = smallest;
        make_heap(begin(nodes), end(nodes), comparator);
      }
    }
  }

  return path;
}
