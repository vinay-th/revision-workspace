#include <iostream>
using namespace std;
template <typename T> T reverse(T data) {
  T rev = 0, rem = 0;
  for (T i = data; i != 0; i /= 10) {
    rem = i % 10;
    rev = rev * 10 + rem;
  }
  return rev;
}
int main() {
  cout << "Reverse of 123: " << reverse(123);

  cout << "\n";
  return 0;
}