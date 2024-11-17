#include <iostream>
using namespace std;
class Demo {
private:
  int data;

public:
  Demo(int x) { data = x; }
  friend void showData(Demo &obj);
};
void showData(Demo &obj) { cout << "The data is " << obj.data; }
int main() {
  Demo obj(69);

  showData(obj);

  cout << "\n";
  return 0;
}