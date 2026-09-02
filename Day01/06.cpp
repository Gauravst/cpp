// swich case

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter your day number (1 to 7) : ";
  cin >> number;

  switch (number) {
  case 1:
    cout << "Monday";
    break;

  case 2:
    cout << "Tuesday";
    break;

  case 3:
    cout << "Wednesday";
    break;

  case 4:
    cout << "Thursday";
    break;

  case 5:
    cout << "Friday";
    break;

  case 6:
    cout << "Saturday";
    break;

  default:
    cout << "Day not found";
    break;
  }

  return 0;
}
