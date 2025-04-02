#ifndef HOUSE_H
#define HOUSE_H
#include <string>
using namespace std;

class House {
  private:
  string ownerName;
  int lotNumber;

  public:
  House();

  House(string h_ownerName, int h_lotNumber);

  string get_owner_name();

  int get_lot_number();

  ~House();
};

#endif