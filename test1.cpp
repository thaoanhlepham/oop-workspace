#include <iostream>
#include "House.h" 
using namespace std;

int main() {
  House h1;
  cout << "Default owner's name: " << h1.get_owner_name() << ", Default lot number: " << h1.get_lot_number() << endl;

  House h2("Amelia", 20);
  cout << "Owner's name: " << h2.get_owner_name() << ", Lot number: " << h2.get_lot_number() << endl;

  return 0;
}