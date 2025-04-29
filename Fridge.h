#ifndef fridge_h
#define fridge_h

#include "Appliance.h"

class Fridge : public Appliance {
  private:
  double volume; // in litres

  public:
  Fridge();
  Fridge(int powerRating, double volume);

  void setVolume(double volume);
  double getVolume() const;

  double getPowerConsumption() const override;

  ~Fridge();
};

#endif