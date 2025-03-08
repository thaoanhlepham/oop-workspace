#include <iostream>

extern double weighted_average(int [], int);

int main() {
  int array[6] = {1,2,2,4,1,3};
  std::cout << "The weighted average is: " << weighted_average(array, 6) << std::endl;
  return 0;
}