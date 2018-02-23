#include "./convex_hull.hpp"
#include <vector>
using std::vector;

// Find orientation of Point triplet: (p, q, r)
// Returns values as so:
// 0: p, q and r are colinear
// 1: Clockwise
// 2: Counterclockwise
int orientation(Point p, Point q, Point r) {
  // clang-format off
  int value = ((r.x - q.x) * (q.y - p.y)) - 
              ((r.y - q.y) * (q.x - p.x));
  // clang-format on

  if (value == 0) return 0;
  return value > 0 ? 1 : 2;
}

vector<Point> convex_hull(Point points[], int n) {
  vector<Point> hull;

  int l = 0;

  for (int i = 1; i < n; i++) {
    if (points[i].x < points[l].x) {
      l = i;
    }
  }

  int p;
  int q;

  p = l;

  do {
    q = (p + 1) % n;
    hull.push_back(points[p]);

    for (int i = 0; i < n; i++) {
      if (orientation(points[p], points[i], points[q]) == 2) {
        q = i;
      }
    }

    p = q;
  } while (p != l);

  return hull;
}
