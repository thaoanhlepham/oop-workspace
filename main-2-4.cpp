#include <iostream>
using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int lenght);
extern int sum_min_max(int integers[], int lenght);

int main() {
  int length = 5;
  int integers[length] = {2,9,4,3,7};
  cout << sum_min_max(integers, length) << endl;
  return 0;
}