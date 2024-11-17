#include <iostream>
using namespace std;
class Palindrome {
public:
  bool isPalindrome(int a) {
    int rev, rem;
    for (int i = a; i != 0; i /= 10) {
      rem = i % 10;
      rev = rev * 10 + rem;
    }
    if (a == rev) {
      return true;
    } else {
      return false;
    }
  }
};
int main() {
  int a = 123321;

  Palindrome obj;

  if (obj.isPalindrome(a)) {
    cout << "It is palindrome";
  } else {
    cout << "It is not palindrome";
  }

  cout << "\n";
  return 0;
}