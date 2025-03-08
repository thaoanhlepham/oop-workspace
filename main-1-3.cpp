#include <iostream>

extern int num_count(int [], int, int);

int main() {
  int number = 5;
  int array[6] = {2,5,5,-4,9,5};
  std::cout << "The number of elements is: " << num_count(array, 6, 5) << std::endl;
  return 0;
}