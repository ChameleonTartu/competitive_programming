#include <iostream>
#include <string>

using namespace std;

char toUpper(char ch) {
  if (ch - 'a' < 0)
    return ch;
  return ch - 32;
}

char toLower(char ch) {
  if (ch - 'a' < 0)
    return ch + 32;
  return ch;
}

int main() {
  string text; cin >> text;
  bool all_caps = true;
  for (size_t i = 1LL; i < text.size(); ++i) {
    if ((text[i] - 'a') >= 0)
      all_caps &= false;
  }
  
  if (all_caps) {
    cout << ((text[0] - 'a' < 0) ? toLower(text[0]) : toUpper(text[0]));
    for (size_t i = 1LL; i < text.size(); ++i) {
      cout << toLower(text[i]);
    }
  }
  else {
    cout << text;
  }
 
  cout << endl;

  return 0;
}
