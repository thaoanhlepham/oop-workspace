#include <iostream>
 
int median_array(int array[], int n) {
  if (n < 1 || n % 2 == 0) {
    return 0;
  }
  int sorted_array[n];
  // Sort the array
  for (int index = 0; index < n; index++) {
    int minsofar = array[index];
    for (int i = index; i < n; i++) {
      if (array[i] < minsofar) {
        minsofar = array[i];
      } 
    }
    sorted_array[index] = minsofar;
    for (int i = index; i < n; i++) {
      if (array[i] == minsofar) {
        array[i] = array[index];
      }
    }
  }
  // Find the median
  int median = sorted_array[n/2];
  return median;
}