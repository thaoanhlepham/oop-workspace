#include <iostream>
using namespace std;

int main() {
  int number = 75;
  int base = 2;
  int og_num = number;
  int digit_counter = 0;
  while (number / base != 0) {
    if (number / base >= 0) {
      digit_counter++;
      number = number / base;
    }
  }
  number = og_num;
  int digit[digit_counter + 1] = {};
  for (int i = 0; i <= digit_counter; i++) {
    digit[i] = number % base;
    number = number / base;
  }
  cout << "The number " << og_num << " has a binary digit of ";
  for (int i = digit_counter; i >= 0; i--) {
    cout << digit[i];
  }
  cout << endl;
  return 0;
}