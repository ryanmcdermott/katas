#ifndef trie_h_
#define trie_h_
#include <string>

using std::string;

const int ALPHABET_SIZE = 26;

struct TrieNode {
  struct TrieNode *children[ALPHABET_SIZE];
  bool isEnd;
};

void insert(TrieNode *root, string key);

struct TrieNode *createTrieNode();

bool search(TrieNode *root, string key);

#endif
