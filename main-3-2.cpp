#include <iostream>
using namespace std;

extern int *readNumbers1(int length);
extern int *reverseArray(int *numbers1, int length);

int main() {
  int length = 3;
  int* numbers1 = readNumbers1(length);
  int* reversedArray = reverseArray(numbers1, length);
  cout << "The reversed array is: ";
  for (int i = 0; i < length; i++) {
    cout << reversedArray[i] << " ";
  }
  cout << endl;
  delete[] numbers1;
  delete[] reversedArray;
  return 0;
}