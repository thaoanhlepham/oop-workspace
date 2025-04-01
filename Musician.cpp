#include "Musician.h"

Musician::Musician() {
  instrument = "Null";
  experience = 0;
}

Musician::Musician(std::string m_instrument, int m_experience) {
  instrument = m_instrument;
  experience = m_experience;
}

std::string Musician::get_instrument() {
  return instrument;
}

int Musician::get_experience() {
  return experience;
}
