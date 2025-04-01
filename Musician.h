#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class Musician {
  private:
  std::string instrument;
  int experience;

  public:
  Musician();

  Musician(std::string m_instrument, int m_experience);

  std::string get_instrument();

  int get_experience();
};

#endif

