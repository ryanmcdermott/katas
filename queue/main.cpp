#include <assert.h>
#include <iostream>
#include "./queue.cpp"

using std::cout;

int main() {
  Queue<int> q(6);

  assert(q.empty() == true);

  q.push_back(9);
  q.push_back(11);
  q.push_back(4);
  q.push_back(22);
  q.push_back(100);

  assert(q.get_size() == 5);

  int front = q.front();
  assert(front == 9);

  front = q.pop_front();
  assert(front == 9);

  front = q.front();
  assert(front == 22);
}
