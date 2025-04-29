#include "TV.h"

TV::TV() : Appliance(0), screenSize(0) {}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

void TV::setScreenSize(double scrSize) {
  screenSize = scrSize;
}

double TV::getScreenSize() const {
  return screenSize;
}

double TV::getPowerConsumption() const {
  return get_powerRating() * (screenSize / 10);
}

TV::~TV() {}