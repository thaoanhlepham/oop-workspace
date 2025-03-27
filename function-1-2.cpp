#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
  PersonList list;
  list.numPeople = n;
  list.people = new Person[n];
  for (int i = 0; i < list.numPeople; i++) {
    list.people[i].name = "Jane Doe";
    list.people[i].age = 1;
  }
  return list;
}