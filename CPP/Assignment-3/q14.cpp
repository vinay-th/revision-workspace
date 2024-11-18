#include <cctype>
#include <iostream>
#include <string>

using namespace std;
bool isPalindromeStr(string str) {
  int count = str.length();
  string revStr = "";

  for (int i = 0; i <= str.length(); i++) {
    if (str[i] != ' ') {
      str[count] = tolower(str[count]);
      revStr += str[count];
      count--;
    } else {
      continue;
    }
  }
  if (str == revStr) {
    return true;
  } else {
    return false;
  }
}
int main() {
  string str = "Aa a";

  if (isPalindromeStr(str)) {
    cout << "String is palindromic";
  } else {
    cout << "String is palindromic";
  }

  cout << "\n";
  return 0;
}