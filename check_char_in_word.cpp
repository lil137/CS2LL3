#include <string>
#include <iostream>
#include <fstream>
using namespace std;

main() {

  ifstream f;
  f.open("word_list");

  string word;
  while(f >> word) {
    if(word.find('z') != string::npos) {
      cout << word << endl;
    }
  }
}


