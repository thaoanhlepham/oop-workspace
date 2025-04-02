#include <iostream>
#include "Subdivision.h"
#include "House.h"

Subdivision::Subdivision(): num_houses(0), houses(nullptr)  {
  houses = new House[num_houses];
}

Subdivision::Subdivision(string h_subName, int h_num_houses) {
  subName = h_subName;
  num_max = h_num_houses;
  num_houses = 0;
  houses = new House[num_max];
}

int Subdivision::get_num_houses() {
  return num_houses;
}

string Subdivision::get_subdiv_name() {
  return subName;
}

House * Subdivision::get_Houses() {
  return houses;
}

bool Subdivision::add_House(House new_house) {
  if (Subdivision::get_num_houses() < num_max) {
    houses[num_houses] = new_house;
    num_houses++;
    return true;
    } else {
      return false;
    }
}

Subdivision::~Subdivision() {
  delete[] houses;
}