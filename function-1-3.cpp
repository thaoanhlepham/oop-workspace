#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
  PersonList p1;
  p1.numPeople = n;
  p1.people = new Person[n];
  for (int i = 0; i < p1.numPeople; i++) {
    p1.people[i].name = "Jane Doe";
    p1.people[i].age = 1;
  }
  return p1;
}

PersonList deepCopyPersonList(PersonList p1) {
  PersonList deepCopyList;
  deepCopyList.numPeople = p1.numPeople;
  deepCopyList.people = new Person[p1.numPeople];
  for (int i = 0; i < p1.numPeople; i++) {
    deepCopyList.people[i].name = p1.people[i].name;
    deepCopyList.people[i].age = p1.people[i].age;
  }
  return deepCopyList;
}