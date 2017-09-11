#include "interval_tree.hpp"
#include <iostream>
#include <stddef.h>

using std::cout;

IntervalNode *newNode(Interval interval) {
  IntervalNode *inode = new IntervalNode;
  Interval *i = new Interval(interval);

  inode->interval = i;
  inode->max = i->high;
  inode->left = NULL;
  inode->right = NULL;

  return inode;
}

IntervalNode *insert(IntervalNode *root, Interval i) {
  if (root == NULL) {
    return newNode(i);
  }

  int low = root->interval->low;

  if (i.low < low) {
    root->left = insert(root->left, i);
  } else {
    root->right = insert(root->right, i);
  }

  if (root->max < i.high) {
    root->max = i.high;
  }

  return root;
}

bool isOverlap(Interval i1, Interval i2) {
  if (i1.low <= i2.high && i2.low <= i1.high) {
    return true;
  }

  return false;
}

Interval *findOverlaps(IntervalNode *root, Interval i) {
  if (root == NULL) {
    return NULL;
  }

  if (isOverlap(*(root->interval), i)) {
    return root->interval;
  }

  if (root->left != NULL && root->left->max >= i.low) {
    return findOverlaps(root->left, i);
  }

  return findOverlaps(root->right, i);
}

void inorder(IntervalNode *root) {
  if (root == NULL) {
    return;
  }

  inorder(root->left);

  cout << "Low == " << root->interval->low
       << "\nHigh == " << root->interval->high << "\nMax == " << root->max
       << "\n \n";

  inorder(root->right);
}
