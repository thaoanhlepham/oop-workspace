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

int *readNumbers2(int length) {
  int* numbers2 = new int[length];
  cout << "Enter " << length << " numbers: ";
  for (int i = 0; i < length; i++) {
    cin >> numbers2[i];
  }
  return numbers2;
}


bool equalsArray(int *numbers1, int *numbers2, int length) {
  int equal = 0;
  if (length < 1) {
    return false;
  } 
  for (int i = 0; i < length; i++) {
    if (numbers1[i] == numbers2[i]) {
      equal = 1;
    } else {
      return false;
    }
  }
  if (equal == 1) {
    return true;
  }
}