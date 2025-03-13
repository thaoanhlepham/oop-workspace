#include <iostream>

bool is_palindrome(int integers[], int length) {
  if (length < 1) {
    return false;
  }
  for (int i  = 0; i < length; i++) {
    if (integers[i] != integers[length - i - 1]) {
      return false;
    }
  }
  return true;
}

int sum_array_elements(int integers[], int length) {
  int sum = 0;
  if (is_palindrome(integers, length) == false) {
    return -2;
  }
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}

int sum_if_palindrome(int integers[], int length) {
  int sum_if_palindrome = 0;
  if (is_palindrome(integers, length) == true) {
    sum_if_palindrome = sum_array_elements(integers, length);
  } else {
    return -2;
  }
  return sum_if_palindrome;
}
