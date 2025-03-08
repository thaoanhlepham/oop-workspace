#include <iostream>

extern int count_evens(int);

int main() {
  int number = 8;
  std::cout << "The number of even numbers is: " << count_evens(number) << std::endl;
  return 0;
}