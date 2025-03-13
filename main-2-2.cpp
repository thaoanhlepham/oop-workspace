#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_digits[4] = {1, 1, 0, 1}; 
  cout << binary_to_int(binary_digits, 4) << std::endl; 
  return 0;
}

