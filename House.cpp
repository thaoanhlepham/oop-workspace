#include <iostream>
#include "House.h" 
using namespace std;

House::House(): ownerName("") , lotNumber(0) {}

House::House(string h_ownerName, int h_lotNumber) {
  ownerName = h_ownerName;
  lotNumber = h_lotNumber;
}

string House::get_owner_name() {
  return ownerName;
}

int House::get_lot_number() {
  return lotNumber;
}

House::~House() {}
