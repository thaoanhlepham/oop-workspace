#include <iostream>

extern bool is_descending(int [], int);

int main() {
  int array[5] = {4,2,1,1,-2};
  std::cout << is_descending(array, 5) << std::endl;
  return 0;
}