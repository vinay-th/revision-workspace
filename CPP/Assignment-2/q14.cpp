#include <iostream>
using namespace std;
class Calculator {
public:
  Calculator(int a, int b) {
    cout << "The addition is : " << a + b << endl;
    cout << "The subtraction is : " << a - b << endl;
    cout << "The multiplication is : " << a * b << endl;
    cout << "The division is : " << a / b << endl;
    cout << "The modulo is : " << a % b << endl;
  }
};
int main() {
  Calculator obj(10, 5);

  cout << "\n";
  return 0;
}