#include <iostream>

int max_element(int array[], int n) {
  int maxsofar = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i] > maxsofar) {
      maxsofar = array[i];
    }
  }
  if (n < 1) {
    return 0;
  }
  return maxsofar;
}