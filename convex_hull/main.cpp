#include <assert.h>
#include <iostream>
#include <vector>
#include "./convex_hull.hpp"

using std::vector;
using std::cout;

int main() {
  Point points[] = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};
  int n = sizeof(points) / sizeof(points[0]);
  vector<Point> hull = convex_hull(points, n);

  for (int i = 0; i < hull.size(); i++) {
    cout << "(" << hull[i].x << ", " << hull[i].y << ")\n";
  }
}
