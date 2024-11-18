#include <iostream>
using namespace std;
class Demo {
public:
  int num;
  string name;
  Demo(int num, string name) {
    this->num = num;
    this->name = name;
  }
  void disp() {
    cout << "Number is " << num << endl;
    cout << "Name is " << name << endl;
  }
};
template <class C> void display(C &obj) { obj.disp(); }
int main() {
  string str = "vinay";

  Demo obj(2, str);

  display(obj);

  cout << "\n";
  return 0;
}