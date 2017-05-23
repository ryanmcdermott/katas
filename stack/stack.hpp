#ifndef STACK_HPP_
#define STACK_HPP_

template <typename T>
class Stack {
private:
  T *items;
  int limit;
  int size;
  int position;
public:
  Stack(int limit);
  ~Stack();
  T pop();
  void push(T);
  int getSize();
};

#endif
