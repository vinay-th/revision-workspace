#include <iostream>
using namespace std;
int main() {
  int a = 5;
  int b = 10;
  int max = (a > b) ? a : b;

  cout << "Bigger number between " << a << " and " << b << " is " << max;

  cout << "\n";
  return 0;
}