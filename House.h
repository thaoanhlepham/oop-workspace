#ifndef house_h
#define house_h

#include "Appliance.h"

class House {
  private:
  int numAppliances;
  int currentNumAppliances;
  Appliance** appliances;

  public:
  House();
  House(int numAppiances);

  bool addAppliance(Appliance* appliance);

  double getTotalPowerConsumption() const;

  ~House();
};

#endif