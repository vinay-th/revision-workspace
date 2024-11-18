#include <iostream>
using namespace std;
int main() {
  string mail;
  cout << "Enter the mail: ";
  cin >> mail;

  try {
    if (mail.find('@') == string::npos) {
      throw 0;
    } else {
      cout << "\nYour email: " << mail;
    }
  } catch (int err) {
    cerr << "The email is not valid" << endl;
  }

  cout << "\n";
  return 0;
}