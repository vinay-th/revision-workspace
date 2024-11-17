#include <iostream>
using namespace std;
int main() {
  bool flag;
  cout << "These are following prime numbers: " << endl;

  for (int i = 1; i <= 100; i++) {
    flag = true;
    if (i == 1 || i == 2) {
      continue;
    } else {
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          flag = false;
          break;
        }
      }

      if (flag) {
        cout << "\033[35m" << i << "\t\033[0m";
      } else {
        cout << i << "\t";
      }
    }
  }

  cout << "\n";
  return 0;
}