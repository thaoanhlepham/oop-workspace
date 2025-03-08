#include <iostream> 

bool is_descending(int array[], int n) {
  for (int i = 1; i < n; i++) {
    if (n <= 0 || array[i] > array[i-1]) {
      return false;
    }
  }
  return true;
}