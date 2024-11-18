#include <iostream>
using namespace std;
int main() {
  int n;

  try {
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0) {
      throw invalid_argument("Number is zero");
    } else if (n < 0) {
      throw invalid_argument("Number is negative");
    } else if (n > 0) {
      throw invalid_argument("Number is positive");
    } else {
      throw runtime_error("Invalid input");
    }
  } catch (const runtime_error &err) {
    cout << err.what();
  } catch (const invalid_argument &err) {
    cout << err.what();
  }

  cout << "\n";
  return 0;
}