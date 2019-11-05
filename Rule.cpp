#include "Rule.h"
#include <iostream>

// make the rule_as_string member be same as 'input'
Rule::Rule(string input) {
  rule_as_string = input;
}

// show the the rule_as_string member
void Rule::show() {
  cout << rule_as_string << endl;
}

  
