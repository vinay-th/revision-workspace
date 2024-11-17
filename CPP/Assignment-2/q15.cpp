#include <iostream>
#include <math.h>
using namespace std;
int cubeItBaby(int x) { return pow(x, 3); }
int main() {
  cout << "The cube of 5 is " << cubeItBaby(5);

  cout << "\n";
  return 0;
}