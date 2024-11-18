#include <iostream>
using namespace std;
template <typename T> class Demo {
public:
  T data;
  Demo(T data) { this->data = data; }
  void dataTypeDisplay() {
    cout << "The datatype is : " << typeid(data).name() << endl;
  }
};
int main() {
  Demo obj1(1);
  Demo obj2(39.32);
  Demo obj3('a');

  obj1.dataTypeDisplay();
  obj2.dataTypeDisplay();
  obj3.dataTypeDisplay();

  cout << "\n";
  return 0;
}