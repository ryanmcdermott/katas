#include <iostream>
#include <vector>

using std::vector;
struct MaxHeap {
private:
  vector<int> A;

  void swap(vector<int> array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }

  int _left(int i) { return 2 * i + 1; }

  int _right(int i) { return 2 * i + 2; }

  int parent(int i) { return (i - 1) / 2; }

  void heapify_up(int i) {
    int left = _left(i);
    int right = _right(i);
    int largest = i;

    if (left < size() && A[i] > A[left]) {
      largest = left;
    }

    if (right < size() && A[i] < A[right]) {
      largest = right;
    }

    if (largest != i) {
      swap(A, i, largest);
      heapify_down(largest);
    }
  }

  void heapify_down(int i) {
    if (i && A[i] > A[parent(i)]) {
      swap(A, i, parent(i));
      heapify_down(parent(i));
    }
  }

public:
  int size() { return A.size(); }

  int pop() {
    if (size() > 0) {
      A[0] = A.back();
      A.pop_back();

      heapify_up(0);
    }
  }

  int top() { return A.at(0); }

  void push(int key) {
    A.push_back(key);
    int i = size() - 1;
    heapify_up(i);
  }
};
