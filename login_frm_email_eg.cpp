#include <string>
#include <iostream>

using namespace std;

main() {

  string email = "homer@simpsons.sit.com";

  string login;
  size_t at_pos;
  at_pos = email.find('@');
  size_t len; // for the number of letters before the @
  // 0 1 2 3 ...
  // a b c @ ...
  // so if at_pos==3, then len==3 also
  len = at_pos;
  login = email.substr(0,len);
  cout << "email was: " << email << endl;
  cout << "login is: " << login << endl;

}

