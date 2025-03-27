#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList p1);

int main() {
  int n = 5;
  PersonList personlist = createPersonList(n);
  PersonList deepCopyList = deepCopyPersonList(personlist);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": Name - " << deepCopyList.people[i].name;
    cout << ", Age - " << deepCopyList.people[i].age << endl;
  }
  delete[] personlist.people;
  delete[] deepCopyList.people;
  return 0;
}