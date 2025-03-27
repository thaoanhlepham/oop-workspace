#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main() {
  int n = 2;
  Person* personarray = createPersonArray(n);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": Name - " << personarray[i].name;
    cout << ", Age - " << personarray[i].age << endl;
  }
  delete[] personarray;
  return 0;
}