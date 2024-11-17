#include <iostream>
#include <string>
using namespace std;
class DaysOfWeek {
public:
  string day(int n) {
    switch (n) {
    case 1:
      return "Sunday";
      break;
    case 2:
      return "Monday";
      break;
    case 3:
      return "Tuesday";
      break;
    case 4:
      return "Wednesday";
      break;
    case 5:
      return "Thursday";
      break;
    case 6:
      return "Friday";
      break;
    case 7:
      return "Saturday";
      break;
    default:
      return "Enter a valid number between 1-7";
    }
  }
};
int main() {
  int n;

  cout << "ENter a number to see which day falls on that number in a week: ";
  cin >> n;

  DaysOfWeek obj;

  cout << "The day that falls on " << n << " day of week is: " << obj.day(n);

  cout << "\n";
  return 0;
}