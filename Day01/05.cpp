// if else

#include <iostream>
using namespace std;

int main() {
  int age;

  cout << "What is you age :- ";
  cin >> age;

  if (age >= 18) {
    cout << "Your age is adult";
  } else {
    cout << "Your age is less than 18";
  }

  return 0;
}
