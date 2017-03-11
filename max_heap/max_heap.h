#include <vector>

using std::vector;

struct MaxHeap {
private:
  vector<int> A;
  int parent(int i);
  int _left(int i);
  int _right(int i);
  void swap(vector<int> array, int i, int j);
  void heapify_down(int i);
  void heapify_up(int i);

public:
  int size();
  void push(int key);
  int pop();
  int top();
};
