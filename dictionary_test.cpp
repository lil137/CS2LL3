/*********************************/
/* tests the Trans_Dict class    */
/*********************************/
#include <iostream>
#include "TranslationDictionary.h"
#include <stdlib.h>

using namespace std;

void tester_function(Trans_Dict& d, string name, vector<string> fr_words);


main() {
    Trans_Dict d1("translist");  
    Trans_Dict d2("translist2");  

    if(!d1.opened_ok) {
      cerr << "dictionary to translist did not open ok\n";
      exit(0);
    }

    if(!d2.opened_ok) {
      cerr << "dictionary to translist2 did not open ok\n";
      exit(0);
    }

    string trans_english;

    if(d1.lookup("maison",trans_english)) {
      cout << "translist trans of maison is " << trans_english << '\n';
    }
    else {
      cout << "no translist trans of maison\n";
    }

    if(d1.lookup("chien",trans_english)) {
      cout << "translist trans of chien is " << trans_english << '\n';
    }
    else {
      cout << "no translist trans of chien\n";
    }

    if(d1.lookup("garcon",trans_english)) {
      cout << "translist trans of garcon is " << trans_english << '\n';
    }
    else {
      cout << "no translist trans of garcon\n";
    }
 

    if(d2.lookup("garcon",trans_english)) {
      cout << "translist2 trans of garcon is " << trans_english << '\n';
    }
    else {
      cout << "no translist2 trans of garcon\n";
    }


    if(d2.lookup("sante",trans_english)) {
      cout << "translist2 trans of sante is " << trans_english << '\n';
    }
    else {
      cout << "no translist2 trans of sante\n";
    }

    if(d2.lookup("maison",trans_english)) {
      cout << "translist2 trans of maison is " << trans_english << '\n';
    }
    else {
      cout << "no translist2 trans of maison\n";
    }

    string test_eng_1 ="house";
    string test_eng_2 = "boy";

    cout << "The french for " << test_eng_1 << " is " << d1.transEngToFren(test_eng_1) << endl;
    
    cout << "The french for " << test_eng_2 << " is " << d2.transEngToFren(test_eng_2) << endl;

    d1.update("bleu","blue");
    cout << d1.lookup("bleu",trans_english) << endl;
    cout << trans_english << endl;
    
    /* you could replace the above series of tests with the following 
       more economical code which use a function to run the tests

     */
    // vector<string> fr_words;
    // fr_words.push_back("maison");
    // fr_words.push_back("chien");
    // fr_words.push_back("garcon");
    // tester_function(d1, "translist", fr_words);

    // fr_words.clear();
    // fr_words.push_back("garcon");
    // fr_words.push_back("sante");
    // fr_words.push_back("maison");
    // tester_function(d2, "translist2", fr_words);

}

void tester_function(Trans_Dict& d, string name, vector<string> fr_words) {
  string trans_english;
  bool found;
  for(unsigned int i=0; i < fr_words.size(); i++) {
    if(d.lookup(fr_words[i],trans_english)) {
      cout << name << " trans of " << fr_words[i] << " is " << trans_english << endl;
    }
    else {
      cout << "no " << name << " trans of " << fr_words[i] << endl;
    }
  }
}
