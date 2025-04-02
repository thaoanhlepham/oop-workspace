#include <iostream>
#include <string>
#include "Subdivision.h"
#include "House.h"
using namespace std;

int main() {
  Subdivision subdivision("S1", 5);

  House h1("A", 19);
  House h2("B", 31);
  House h3("C", 15);
  House h4("D", 20);
  House h5("E", 22);
  House h6("F", 18);

  if (subdivision.add_House(h1) == true) {
    cout << "House 1 is added." << endl;
  } else {
    cout << "Failed to add House 1." << endl;
  }
  if (subdivision.add_House(h2) == true) {
    cout << "House 2 is added." << endl;
  } else {
    cout << "Failed to add House 2." << endl;
  }
  if (subdivision.add_House(h3) == true) {
    cout << "House 3 is added." << endl;
  } else {
    cout << "Failed to add House 3." << endl;
  }
  if (subdivision.add_House(h4) == true) {
    cout << "House 4 is added." << endl;
  } else {
    cout << "Failed to add House 4." << endl;
  }
  if (subdivision.add_House(h5) == true) {
    cout << "House 5 is added." << endl;
  } else {
    cout << "Failed to add House 5." << endl;
  }
  if (subdivision.add_House(h6) == true) {
    cout << "House 1 is added." << endl;
  } else {
    cout << "Failed to add House 6." << endl;
  }

  cout << "Current number of houses is: " << subdivision.get_num_houses() << endl;

  return 0;
}