#include "./stack_two_queues.hpp"
#include <queue>

using std::queue;

void stack_two_queues::pop() {
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

void stack_two_queues::push(int num) { q1.push(num); }

int stack_two_queues::top() {
  while (q1.size() != 1) {
    q2.push(q1.front());
    q1.pop();
  }

  int top_item = q1.front();
  q2.push(top_item);

  queue<int> temp = q1;
  q1 = q2;
  q2 = temp;

  return top_item;
}
