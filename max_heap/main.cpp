#include <iostream>
#include "max_heap.h"

using std::cout;

int main() {
  MaxHeap pq;
  pq.push(3);
  pq.push(2);
  pq.push(15);

  cout << "Size is " << pq.size();

  cout << pq.top() << " ";
  pq.pop();

  cout << pq.top() << " ";
  pq.pop();

  pq.push(5);
  pq.push(4);
  pq.push(45);
}
