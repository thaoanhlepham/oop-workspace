#include <iostream>

extern int array_sum(int [], int);

int main() {
  int array[5] = {2,-1,5,-4,9};
  std::cout << "The sum is: " << array_sum(array, 5) << std::endl;
  return 0;
}