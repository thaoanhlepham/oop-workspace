#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void print_binary_str(string decimal_number) {
  int digits = 0;
  int decimal = stoi(decimal_number);
  int root_decimal = decimal;

  while (decimal > 0) {
    decimal /= 2;
    digits++;
  }

  decimal = root_decimal;

  int array_decimal[digits];

  for (int i = 0; i < digits; i++) {
    array_decimal[i] = decimal % 2;
    decimal /= 2;
  }

  for (int i = digits - 1; i >= 0; i--) {
    cout << array_decimal[i];
  }

  cout << endl;
}
