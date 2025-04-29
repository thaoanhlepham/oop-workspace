#include <iostream>
#include "TV.h"

using namespace std;

int main() {
  TV TV1(1755, 15);
  cout << "Power Rating: " << TV1.get_powerRating() << " W" << endl;
  cout << "Screen Size: " << TV1.getScreenSize() << " inches" << endl;
  cout << "Power Consumption: " << TV1.getPowerConsumption() << " W" << endl;
  return 0;
}