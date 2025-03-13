#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
  if (number_of_digits <= 0 || number_of_digits >= 30) {
    return -1; 
  }
  int result = 0;
  for (int i = 0; i < number_of_digits; i++) {
    if (binary_digits[i] != 0 && binary_digits[i] != 1) {
      return -1;
    } else {
      result = result * 2 + binary_digits[i]; 
    }
  }
  return result;
}