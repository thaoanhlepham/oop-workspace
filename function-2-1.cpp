#include <iostream>
#include <string>
using namespace std;

int *readNumbers(int length) {
  int* numbers = new int[length];
  cout << "Enter " << length << " numbers: ";
  for (int i = 0; i < length; i++) {
    cin >> numbers[i];
  }
  return numbers;
}


void hexDigits(int *numbers, int length) {
  char hexDigits[length] = {};
  for (int i = 0; i < length; i++) {
    if (numbers[i] >= 10) {
      switch (numbers[i]) {
        case 10:
          hexDigits[i] = 'A';
          break;
        case 11:
          hexDigits[i] = 'B';
          break;
        case 12:
          hexDigits[i] = 'C';
          break;
        case 13:
          hexDigits[i] = 'D';
          break;
        case 14:
          hexDigits[i] = 'E';
          break;
        case 15:
          hexDigits[i] = 'F';
          break;
        default:
          break;
      }
    } else {
      hexDigits[i] = numbers[i] + '0';
    }
    cout << i << " " << numbers[i] << " " << hexDigits[i] << endl;
  }
}