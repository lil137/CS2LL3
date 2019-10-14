#include <string>
#include <iostream>
using namespace std;

main() {

  string s = "ABba";
  cout << "whole string is: " << s << endl;
  cout << "3rd character is: " << s[2] << " (should be b)\n";

  s[2] = 'B';
  cout << "3rd character is now: " << s[2] << " (should be B)\n";
  cout << "whole string is: " << s << endl;
}
