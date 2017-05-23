#ifndef QUEUE_HPP_
#define QUEUE_HPP_

template <typename T>
class Queue {
private:
  T *items;
  int size;
  int limit;
public:
  Queue(int lim);
  ~Queue();
  bool empty();
  int get_size();
  T front();
  T pop_front();
  void push_back(T);
};

#endif
