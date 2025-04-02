#ifndef SUBDIVISION_H
#define SUBDIVISION_H
#include <string>
#include "House.h"
using namespace std;

class Subdivision {
  private:
  string subName;
  int num_max;
  int num_houses;
  House *houses;

  public:
  Subdivision();

  Subdivision(string h_subName, int h_num_houses);

  int get_num_houses();

  string get_subdiv_name();

  House * get_Houses();

  bool add_House(House new_house);

  ~Subdivision();
};

#endif