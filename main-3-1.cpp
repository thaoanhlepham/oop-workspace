#include <iostream>
using namespace std;

extern int *readNumbers1(int length);
extern int *readNumbers2(int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
  int length = 3;
  int* numbers1 = readNumbers1(length);
  int* numbers2 = readNumbers2(length);
  cout << equalsArray(numbers1, numbers2, length) << endl;
  delete[] numbers1;
  delete[] numbers2;
  return 0;
}