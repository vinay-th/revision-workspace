#include <iostream>
using namespace std;
int factorial(int x) {
  if (x <= 1)
    return 1;
  else
    return x * factorial(x - 1);
}
int main() {
  int a;

  cout << "Enter the number to find it's factorial: ";
  cin >> a;

  cout << "Factorial for " << a << " is : " << factorial(a);

  cout << "\n";
  return 0;
}