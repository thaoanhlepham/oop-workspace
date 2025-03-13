#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
  int array[4][4] = {{1,2,3,4}, {5,6,7,8} , {1,3,5,7} , {2,4,6,8}};
  cout << "The sum of the elements along the main diagonal is: " << sum_diagonal(array) << endl;
  return 0;
}