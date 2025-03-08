#include <iostream>

extern double sum_even(double [], int);

int main() {
  double array[5] = {2.5,-1.2,4.0,-3.4,5.0};
  std::cout << "The sum of the elements in the even positions is: " << sum_even(array, 5) << std::endl;
  return 0;
}