#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
  string name, surname;
};
int main() {
  Employee obj;

  obj.name = "Vinay";
  obj.surname = "Thakor";

  cout << "The concated name is: " << obj.name.append(" " + obj.surname);
  //   cout << "The concated name is: " << obj.name + " " + obj.surname;

  cout << "\n";
  return 0;
}