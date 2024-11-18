#include <iostream>
using namespace std;
template <class C> class Array {
private:
  C *arr;
  int size;

public:
  Array(int size) {
    this->size = size;
    arr = new C[size];
    cout << "\nEnter the data: " << endl;
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }
    cout << "\nEntered the data: " << endl;
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
  }
  ~Array() { delete[] arr; }
};
int main() {
  Array<int> obj(5);
  Array<float> obj1(5);
  Array<char> obj2(5);

  cout << "\n";
  return 0;
}