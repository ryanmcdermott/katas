#ifndef convex_hull_h_
#define convex_hull_h_
#include <vector>
using std::vector;

struct Point {
  int x;
  int y;
};

vector<Point> convex_hull(Point points[], int n);

#endif
