#include <string>
#include <iostream>
using namespace std;

main() {
  /* to count how often particular char occurs */
  string s = "aabbaa";
  int count = 0;
  size_t offset = 0;

  while((offset = s.find('a',offset)) != string::npos) {
    count++;
    offset++;
  }

  cout << "a occurs " << count << " times in aabbaa\n";

  /* to count how often particular string occurs */
  offset = 0;
  count = 0;

  while((offset = s.find("aa",offset)) != string::npos) {
    count++;
    offset = offset+2;
  }

  cout << "aa occurs " << count << " times in aabbaa\n";
}
