#include <iostream>
using namespace std;
class SwapNumbers {
public:
  void swapNums(int a, int b) {
    cout << "The first number before swapping: " << a << endl;
    cout << "The second number before swapping: " << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "The first number after swapping: " << a << endl;
    cout << "The second number after swapping: " << b << endl;
  }
};
int main() {
  int a, b;
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;

  SwapNumbers obj;

  cout << "\n";
  obj.swapNums(a, b);

  cout << "\n";
  return 0;
}