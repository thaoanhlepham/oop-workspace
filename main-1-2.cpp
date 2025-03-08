#include <iostream>

extern double array_mean(int [], int);

int main() {
  int array[5] = {2,-1,5,-4,9};
  std::cout << "The mean is: " << array_mean(array, 5) << std::endl;
  return 0.0;
}