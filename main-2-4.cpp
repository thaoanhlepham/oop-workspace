#include <iostream>

extern bool is_ascending(int [], int);

int main() {
  int array[5] = {1,1,3,7,5};
  std::cout << is_ascending(array, 5) << std::endl;
  return 0;
}