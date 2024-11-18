#include <iostream>
using namespace std;
template <typename T1, typename T2> void swap(T1 &x, T2 &y) {
  auto temp = x;
  x = static_cast<T1>(y);
  y = static_cast<T2>(temp);

  cout << x << " " << y;
};
int main() {
  int a = 10, b = 20;
  cout << "Before Swapping: " << a << " " << b << endl;
  swap(a, b);
  cout << "After Swapping: " << a << " " << b << endl;

  float x = 10.5, y = 20.5;
  cout << "Before Swapping: " << x << " " << y << endl;
  swap(x, y);
  cout << "After Swapping: " << x << " " << y;
  cout << "\n";
  return 0;
}