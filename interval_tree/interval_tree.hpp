struct Interval {
  int low;
  int high;
};

struct IntervalNode {
  Interval *interval;
  int max;
  IntervalNode *left, *right;
};

IntervalNode *insert(IntervalNode *root, Interval i);
void inorder(IntervalNode *root);
Interval *findOverlaps(IntervalNode *root, Interval i);
