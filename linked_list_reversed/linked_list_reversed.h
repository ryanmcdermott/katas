using namespace std;
#include <cstddef>
struct Node {
  int x;
  Node *next;
};

class LinkedList {
public:
  LinkedList() { Node *head = NULL; }

  void addValue(int val) {
    Node *n = new Node();
    n->x = val;
    n->next = head;
    head = n;
  }

  int popValue() {
    Node *n = this->head;
    int ret = n->x;

    head = head->next;
    delete n;
    return ret;
  }

  Node *getHead() { return this->head; }

private:
  Node *head;
};

void reverse(Node *node);
