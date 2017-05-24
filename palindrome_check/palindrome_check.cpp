#include <string>

using std::string;

bool palindrome_check(string s1, string s2) {
  if (s1.size() != s2.size()) {
    return false;
  }

  int s1_position = 0;
  int s2_position = s2.size() - 1;
  while (s1_position <= s2_position) {
    if (s1.at(s1_position) == s2.at(s2_position)) {
      s1_position++;
      s2_position--;
    } else {
      return false;
    }
  }

  return true;
}
