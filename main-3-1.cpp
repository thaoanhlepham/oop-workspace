#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;

int main() {
  House House1(3);

  Appliance* Fridge1 = new Fridge(1500, 15);
  Appliance* Fridge2 = new Fridge(1650, 20);

  Appliance* TV1 = new TV(1800, 30);
  Appliance* TV2 = new TV(1700, 25);

  House1.addAppliance(Fridge1);
  House1.addAppliance(Fridge2);
  House1.addAppliance(TV1);
  House1.addAppliance(TV2);

  cout << "Total power consumption: " << House1.getTotalPowerConsumption() << " W" << endl;

  return 0;
}