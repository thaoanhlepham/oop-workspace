#include <iostream>

int sum_two_arrays (int array[], int secondarray[], int n) {
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < n; i++) {
    sum1 += array[i];
    sum2 += secondarray[i];
  }
  int sum = sum1 + sum2;
  if (n < 1) {
    return 0;
  }
  return sum;
}