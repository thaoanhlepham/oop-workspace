#include <iostream>

extern int sum_two_arrays(int [], int [], int);

int main() {
  int secondarray[5] = {-1,6,-7,5,3};
  int array[5] = {2,5,-4,9,-8};
  std::cout << "The sum of two arrays is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
  return 0;
}