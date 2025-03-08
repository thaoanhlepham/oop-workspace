#include <iostream>

int min_element(int array[], int n) {
  int minsofar = array[0];
  for (int i = 0; i < n; i++) {
    if (array[i] < minsofar) {
      minsofar = array[i];
    }
  }
  if (n < 1) {
    return 0;
  }
  return minsofar;
}