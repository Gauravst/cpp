// function with vaule or reference

#include <iostream>
using namespace std;

void addByValue(int x) { x = x + 200; }

void addByReferenc(int &x) { x = x + 50; }

int main() {

  int number = 5;
  cout << "Number is " << number << endl;

  addByValue(number);
  cout << "Added by vaule " << number << endl;

  addByReferenc(number);
  cout << "Added by reference " << number << endl;

  return 0;
}
