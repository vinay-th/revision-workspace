#include <iostream>
#include <string>
using namespace std;
class Student {
private:
  string name;
  int marks;

public:
  void setName(string userName) { name = userName; }
  void setMarks(int mark) { marks = mark; }
  string getName() { return name; }
  int getMarks() { return marks; }
};
int main() {
  Student obj;

  obj.setName("Vinay");
  obj.setMarks(89);

  cout << "The name is : " << obj.getName() << endl;
  cout << "The marks are : " << obj.getMarks();

  cout << "\n";
  return 0;
}