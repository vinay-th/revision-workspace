#include <iostream>
using namespace std;
template <typename t> t getMax(t arr[], int size) {
  t max = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arrInt[] = {1, 2, 3, 4, 5};
  float arrFloat[] = {1.5, 2.5, 3.5, 4.5, 5.5};
  char arrChar[] = {'a', 'b', 'c', 'd', 'e'};

  cout << getMax(arrInt, 5) << endl;
  cout << getMax(arrFloat, 5) << endl;
  cout << getMax(arrChar, 5) << endl;

  cout << "\n";
  return 0;
}