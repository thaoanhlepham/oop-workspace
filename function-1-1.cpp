#include <iostream>

int sum_diagonal(int array[4][4]) {
  int sum_diagonal = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        sum_diagonal += array [i][j];
      }
    }
  }
  return sum_diagonal;
}