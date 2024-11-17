#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter the number of rows: ";
  cin >> a;

  for (int i = a; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << "* ";
    }
    cout << "\n";
  }

  cout << "\n";
  return 0;
}