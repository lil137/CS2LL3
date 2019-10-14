#include <string>
#include <iostream>
#include <fstream>
using namespace std;

main() {

  ifstream f;
  f.open("stem_list");

  string stem;
  while(f >> stem) {
    string s;
    s = stem + "ed";
    cout << s << endl;
    s = stem + "ing";
    cout << s << endl;
    s = stem + 's';
    cout << s << endl;
  }
}


