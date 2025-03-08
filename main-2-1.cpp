#include <iostream>

extern int min_element(int [], int);

int main() {
  int array[5] = {-2,7,5,-4,9};
  std::cout << "The minimum number is: " << min_element(array, 5) << std::endl;
  return 0;
}