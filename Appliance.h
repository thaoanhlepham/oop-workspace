#ifndef appliance_h
#define appliance_h

class Appliance {
  private:
  int powerRating;
  bool isOn;

  public:
  Appliance(); // Default constructor
  Appliance(int powerRating); // Creates an Appliance with a power rating

  int get_powerRating() const; // Getter for powerRating
  bool get_isOn() const; // Getter for isOn

  void set_powerRating(int new_powerRating); // Setter for powerRating
  void set_isOn(bool new_isOn); // Setter for isOn

  // Methods
  void turnOn();
  void turnOff();

  // Virtual function
  virtual double getPowerConsumption() const;

  virtual ~Appliance();
};

#endif 