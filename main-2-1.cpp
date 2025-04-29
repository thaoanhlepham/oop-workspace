#include <iostream>
#include "Fridge.h"

using namespace std;
int main() {
  Fridge Fridge1(1500, 20); 
  cout << "Power Rating: " << Fridge1.get_powerRating() << " W" << endl;
  cout << "Volume: " << Fridge1.getVolume() << " litres" << endl;
  cout << "Power Consumption: " << Fridge1.getPowerConsumption() << " W" << endl;
  return 0;
}