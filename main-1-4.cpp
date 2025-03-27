#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList p1);

int main() {
  int n = 5;
  PersonList personlist = createPersonList(n);
  PersonList shallowCopyList = shallowCopyPersonList(personlist);
  for (int i = 0; i < n; i++) {
    cout << "Person " << i << ": Name - " << shallowCopyList.people[i].name;
    cout << ", Age - " << shallowCopyList.people[i].age << endl;
  }
  delete[] personlist.people;
  delete[] shallowCopyList.people;
  return 0;
}