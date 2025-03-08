#include <iostream>

extern void print_pass_fail(char);

int main() {
  char grade = 'E';
  print_pass_fail(grade);
  return 0;
}