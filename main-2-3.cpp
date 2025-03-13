#include <iostream>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int lenght);

int main() {
  int integers[5] = {1,2,3,1,1};
  is_palindrome(integers,5);
  cout << sum_if_palindrome(integers,5) << endl;
  return 0;
}