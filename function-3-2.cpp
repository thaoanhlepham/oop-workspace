#include <iostream>
using namespace std;

int *readNumbers1(int length) {
  int* numbers1 = new int[length];
  cout << "Enter " << length << " numbers: ";
  for (int i = 0; i < length; i++) {
    cin >> numbers1[i];
  }
  return numbers1;
}

int *reverseArray(int *numbers1, int length) {
  int* reversedArray = new int[length];
  for (int i = 0; i < length; i++) {
    reversedArray[i] = numbers1[length - 1 - i];
  }
  return reversedArray;
}