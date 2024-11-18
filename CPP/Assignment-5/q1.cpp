// 1. Write a program to input n integer numbers and display highest and second
// highest number. Also handle the different exceptions possible to be thrown
// during execution
#include <exception>
#include <iostream>

using namespace std;
void maxAndSecondMax(int arr[], int size) {
  int max = 0;
  int secMax = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) {
      secMax = max;
      max = arr[i];
    }
  }
  cout << "Maximum number: " << max << endl;
  cout << "Second maximum number: " << secMax << endl;
}
int main() {
  int arr[] = {1, 2, 3, 4};
  maxAndSecondMax(arr, 4);

  cout << "\n";
  return 0;
}