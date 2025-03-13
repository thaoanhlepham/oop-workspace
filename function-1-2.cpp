#include <iostream>

int is_identity(int array[10][10]) {
  int identity = 0;
  int not_identity = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if ((i != j && array[i][j] != 0) || (i == j && array[i][j] != 1)) {
        not_identity++;
      } 
    }
  }
  if (not_identity > 0) {
    identity = 0;
  } else {
    identity = 1;
  }
  return identity;
}