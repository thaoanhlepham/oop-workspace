#include <iostream>
#include "workshop.h"
using namespace std;

int main() {
  // Part 2
  double value = 3.14;  
  cout << "Part 2:" << endl;
  cout << "The value is now: ";
  changeValue(&value); 
  cout << endl;
  return 0;

  // Part 3
  cout << "Part 3:" << endl;
  double a[3] = {2,3,4};
  int n = 3;
  cout << "The content of the array is: ";
  printArray(a,n);
  cout << endl;
  return 0;

  // Part 4:
  cout << "Part 4:" << endl;
  cout << "The maximun value in the array is: " << arrayMax(a,n) << endl;

  // Part 6:
  cout << "Part 6:" << endl;
  int N = 3;
  int M = 5;
  double* array = dynamicArray(N, M);
  cout << "The maximum value is: " << arrayMax(array,N) << endl;
  delete[] array;

  // Part 7:
  cout << "Part 7:" << endl;
  double* seven = dynamicArray(N, M);
  cout << "The elements of the array are: " << endl;
  for (int i = 0; i < N; i++) {
    cout << array[i] << " " << endl;
  }
  delete[] seven;
}