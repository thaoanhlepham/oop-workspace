#include <iostream>
using namespace std;

void print_scaled(int array[3][3], int scale) {
  int scaled_array[3][3] = {};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scaled_array[i][j] = array[i][j] * scale;
      cout << scaled_array[i][j];
      cout << " ";
    }
    cout << "\n";
  }
  cout << endl;
  return;
}