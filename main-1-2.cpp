#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main() {
  int n = 4;
  PersonList personlist = createPersonList(n);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": Name - " << personlist.people[i].name;
    cout << ", Age - " << personlist.people[i].age << endl;
  }
  delete[] personlist.people;
  return 0;
}