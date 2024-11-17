#include <iostream>
using namespace std;
int fibonacci(int num) {
  if (num <= 1) {
    return num;
  } else {
    return fibonacci(num - 1) + fibonacci(num - 2);
  }
}
int main() {
  int a;

  cout << "Give the end number to print Fibonacci series: ";
  cin >> a;

  for (int i = 0; i <= a; i++) {
    cout << fibonacci(i) << " ";
  }

  cout << "\n";
  return 0;
}