#include "./trie.hpp"
#include <string>

using std::string;

void insert(TrieNode *root, string key) {}

struct TrieNode *createNode() {
  struct TrieNode *root = new TrieNode();
  root->isEnd = false;

  for (int i = 0; i < ALPHABET_SIZE; i++) {
    root->children[i] = 0;
  }

  return root;
}

bool search(TrieNode *root, string key) {}
