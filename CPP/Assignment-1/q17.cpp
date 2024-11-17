#include <iostream>
using namespace std;
int main() {
  int r, k;

  cout << "Enter the no of rows: ";
  cin >> r;
  k = r;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < r; j++) {
      if (j >= k)
        cout << "* ";
      else
        cout << " ";
    }
    k--;
    cout << "\n";
  }

  cout << "\n";
  return 0;
}