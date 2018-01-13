#include "./trie.hpp"
#include <string>

using std::string;

void insert(TrieNode *root, string key) {
  struct TrieNode *node = root;
  for (int i = 0; i < key.length(); i++) {
    int index = key[i] - 'a';
    if (!node->children[index]) {
      node->children[index] = createTrieNode();
    }

    root = node->children[index];
  }

  node->isEnd = true;
}

struct TrieNode *createTrieNode() {
  struct TrieNode *root = new TrieNode;
  root->isEnd = false;

  for (int i = 0; i < ALPHABET_SIZE; i++) {
    root->children[i] = 0;
  }

  return root;
}

bool search(TrieNode *root, string key) {
  struct TrieNode *node = root;
  for (int i = 0; i < key.length(); i++) {
    int index = key[i] - 'a';
    if (!node->children[index]) {
      return false;
    }

    root = node->children[index];
  }

  return (node != 0 && node->isEnd == false);
}
