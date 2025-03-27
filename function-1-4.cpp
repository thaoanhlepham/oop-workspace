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

PersonList shallowCopyPersonList(PersonList p1) {
  PersonList shallowCopyList;
  shallowCopyList.numPeople = p1.numPeople;
  shallowCopyList.people = p1.people;
  return shallowCopyList;
}