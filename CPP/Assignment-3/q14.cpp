#include <iostream>
#include <string>
using namespace std;
bool isPalindromeStr(string str) {
  int count = str.length();
  string revStr = "";

  for (int i = 0; i <= str.length(); i++) {
    revStr += str[count];
    count--;
  }
  if (str == revStr) {
    return true;
  } else {
    return false;
  }
}
int main() {
  string str = "aaa";

  if (isPalindromeStr(str)) {
    cout << "String is palindromic";
  } else {
    cout << "String is palindromic";
  }

  cout << "\n";
  return 0;
}