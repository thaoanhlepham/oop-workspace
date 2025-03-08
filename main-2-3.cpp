#include <iostream>

extern void two_five_nine(int [], int);

int main() {
  int array[5] = {6,-1,2,-4,1};
  two_five_nine(array, 5);
  return 0;
}