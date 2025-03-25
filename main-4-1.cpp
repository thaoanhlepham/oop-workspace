#include <iostream>
using namespace std;

extern int *readNumbers(int length);
extern int secondSmallestSum(int *numbers, int length);

int main() {
  int length = 4;
  int* numbers = readNumbers(length);
  int secondSmallest = secondSmallestSum(numbers, length);
  cout << "The second smallest sum of sub-array is: " << secondSmallest << endl;
  delete[] numbers;
  return 0;
}