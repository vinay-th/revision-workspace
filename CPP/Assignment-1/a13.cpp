#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n, a, b;
  int rem, sum = 0, rev = 0;
  cout << "---This program is made to do following operations select the "
          "number of operation that you want to perform--- "
       << endl;
  cout << "1. Sum of 2 digits" << endl;
  cout << "2. Armstrong or not" << endl;
  cout << "3. Palindrome or not" << endl;
  cout << "4. Multiplication of 2 digits" << endl;

  cout << "\nEnter the number of operation to perform it: ";
  cin >> n;

  switch (n) {
  case 1:
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "\nThe sum of 2 numbers is: " << a + b;
    break;
  case 2:
    cout << "Enter number: ";
    cin >> a;

    for (int i = a; i != 0; i /= 10) {
      rem = i % 10;
      sum += pow(rem, 3);
    }
    if (a == sum)
      cout << "The number is armstrong";
    else
      cout << "The number is not armstrong";

    break;
  case 3:
    cout << "Enter number: ";
    cin >> a;
    for (int i = a; i != 0; i /= 10) {
      rem = i % 10;
      rev = rev * 10 + rem;
    }
    if (a == rev)
      cout << "The number is palindrome";
    else
      cout << "The number is not palindrome";

    break;
  default:
    cout << "Enter a valid number to perform any operation";
    break;
  }

  cout << "\n";
  return 0;
}