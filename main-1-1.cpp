#include <iostream>
#include "Appliance.h"
using namespace std;

int main() {
  Appliance Appliance1(1800); // First appliance with 1800W power rating

  cout << "Power Rating: " << Appliance1.get_powerRating() << " W" << endl;
  if (Appliance1.get_isOn() == true) {
    cout << "Is On: Yes" << endl;
  } else {
    cout << "Is On: No" << endl;
  }

  Appliance1.turnOn();
  cout << "Turned On." << endl;
  cout << "Is On: Yes" << endl;

  cout << "Power Consumption: " << Appliance1.getPowerConsumption() << " W" << endl;

  Appliance1.turnOff();
  cout << "Turned Off." << endl;
  cout << "Is On: No" << endl;

  return 0;
}