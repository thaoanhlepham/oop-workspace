#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false) {} // Default constructor

Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

// Getters
int Appliance::get_powerRating() const {
  return powerRating;
}

bool Appliance::get_isOn() const {
  return isOn;
}

// Setters
void Appliance::set_powerRating(int new_powerRating) {
  powerRating = new_powerRating;
}

void Appliance::set_isOn(bool new_isOn) {
  isOn = new_isOn;
}

// Methods
void Appliance::turnOn() {
  isOn = true;
}

void Appliance::turnOff() {
  isOn = false;
}

// Virtual function
double Appliance::getPowerConsumption() const {
  return 0;
}

Appliance::~Appliance() {}
