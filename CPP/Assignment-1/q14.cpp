#include <iostream>
using namespace std;
int main() {
  int r, c;
  cout << "Enter the number of rows: ";
  cin >> r;

  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }

  cout << "\n";
  return 0;
}