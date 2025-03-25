#include <iostream>
#include <string>
using namespace std;

extern int *readNumbers(int length);
extern void hexDigits(int *numbers, int length);

int main() {
  int length = 3;
  int* numbers = readNumbers(length);
  hexDigits(numbers, length);
  return 0;
  delete[] numbers;
}