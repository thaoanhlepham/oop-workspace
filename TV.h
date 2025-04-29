#ifndef tv_h
#define tv_h

#include "Appliance.h"

class TV : public Appliance {
  private:
  double screenSize; // in inches

  public:
  TV();
  TV(int powerRating, double screenSize);

  void setScreenSize(double screenSize);
  double getScreenSize() const;

  double getPowerConsumption() const override;

  ~TV();
};

#endif