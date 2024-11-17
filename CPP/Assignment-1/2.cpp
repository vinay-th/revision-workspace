#include <iostream>
using namespace std;
bool isPrime(int x) {
  for (int i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  int x = 13;

  if (isPrime(x)) {
    cout << "The number " << x << " is prime";
  } else {
    cout << "The number " << x << " is not prime";
  }

  cout << "\n";
  return 0;
}