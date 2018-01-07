#include "./trie.hpp"
#include <assert.h>
#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  string keys[] = {"freedom", "free", "freed", "trial", "judgment", "fury"};
  struct TrieNode *root = getTrieNode();
  for (auto &key : keys) {
    insert(root, key);
  }
}
