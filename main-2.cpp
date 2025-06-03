#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"

#include <iostream>
using namespace std;

int main() {
  Ship s(5,5);
  Mine m(6,4);

  cout << "Current ship's position: (" << get<0>(s.getPos()) << ", " << get<1>(s.getPos()) << ")" << endl;
  s.move(3,7);
  cout << "New ship's position: (" << get<0>(s.getPos()) << ", " << get<1>(s.getPos()) << ")" << endl;

  Explosion e = m.explode();
  cout << "Mine exploded. Type changed to: " << m.getType() << endl;

  e.apply(s);
  cout << "Explosion applied to ship. New ship position: (" << get<0>(s.getPos()) << ", " << get<1>(s.getPos()) << ")" << endl;
  cout << "New ship type: " << s.getType() << endl;
}
