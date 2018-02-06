#ifndef stack_two_queues_h_
#define stack_two_queues_h_

#include <queue>
using std::queue;

class stack_two_queues {
  queue<int> q1, q2;

 public:
  stack_two_queues() {}

  void pop();

  void push(int num);

  int top();
};

#endif
