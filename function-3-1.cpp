#include <iostream> 

bool is_fanarray(int array[], int n) {
  for (int i = 1; i < (double) n/2; i++) {
    if (n <= 0 || array[i] < array[i-1]) {
      return false;
    }
  }
  return true;
}