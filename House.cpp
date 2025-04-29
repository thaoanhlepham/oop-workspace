#include "House.h"
#include <iostream>
using namespace std;

House::House() : numAppliances(0), currentNumAppliances(0), appliances(nullptr) {}

House::House(int numAppliances) : numAppliances(numAppliances), currentNumAppliances(0) {
  appliances = new Appliance*[numAppliances];
  for (int i = 0; i < numAppliances; i++) {
    appliances[i] = nullptr;
  }
}

bool House::addAppliance(Appliance* appliance) {
  if (currentNumAppliances < numAppliances) {
    appliances[currentNumAppliances++] = appliance;
    return true;
  } else {
    return false;
  }
}

double House::getTotalPowerConsumption() const {
  double totalPowerConsumption = 0;
  for (int i = 0; i < currentNumAppliances; i++) {
    totalPowerConsumption += appliances[i]->getPowerConsumption();
  }
  return totalPowerConsumption;
}

House::~House() {
  for (int i = 0; i < numAppliances; i++) {
    delete appliances[i];
  }
  delete[] appliances;
}