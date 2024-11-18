#include <iostream>
using namespace std;
int main() {
  int accNo;
  float amount, balance = 500;

  cout << "Enter the accNo: ";
  cin >> accNo;
  cout << "Enter withdrawal amount: ";
  cin >> amount;

  while (true) {
    try {
      if (amount > balance) {
        throw 0;
      } else {
        balance = balance - amount;
        cout << "\nThe remaining amount: " << balance << endl;
        break;
      }
    } catch (int err) {
      cerr << "Insufficient balance" << endl;
      cout << "Enter the withdrawal amount: ";
      cin >> amount;
    }
  }

  cout << "\n";
  return 0;
}