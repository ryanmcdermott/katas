#include <iostream>
#include <list>

#include "dfs_all_paths.h"

using namespace std;

Graph::Graph(int V) {
  vertex_count = V;
  adjacency_list = new list<int>[vertex_count];
}

void Graph::add_edge(int source, int destination) {
  adjacency_list[source].push_back(destination);
}

void Graph::print_paths(int source, int destination) {
  bool *visited = new bool[vertex_count];
  int *path = new int[vertex_count];
  int path_idx = 0;

  for (int i = 0; i < vertex_count; i++) {
    visited[i] = false;
  }

  print_paths_helper(source, destination, visited, path, path_idx);
}

void Graph::print_paths_helper(int u, int destination, bool visited[], int path[], int &path_idx) {
  visited[u] = true;
  path[path_idx] = u;
  path_idx++;

  if (u == destination) {
    for (int i = 0; i < path_idx; i++) {
      cout << path[i];
    }
  }
  else {
    list<int>::iterator i;
    for (i = adjacency_list[u].begin(); i != adjacency_list[u].end(); i++) {
      if (!visited[*i]) {
        print_paths_helper(*i, destination, visited, path, path_idx);
      }
    }
  }

  path_idx--;
  visited[u] = false;
}
