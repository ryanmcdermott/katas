#include "./stack_two_queues.hpp"
#include <queue>

using std::queue;
class stack_two_queues {
  queue<int> q1, q2;

 public:
  stack_two_queues() {}

  void pop() {
    if (q1.empty()) {
      return;
    }

    while (q1.size() != 1) {
      q2.push(q1.front());
      q1.pop();
    }

    q1.pop();

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }

  void push(int num) {}

  int top() {}
};
