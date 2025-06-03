#include "Utils.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <tuple>

using namespace std;

int main() {
  srand(time(0));
  auto pos1 = Utils::generateRandomPos(5, 10);
  auto pos2 = Utils::generateRandomPos(5, 10);

  cout << "Position 1: (" << get<0>(pos1) << ", " << get<1>(pos1) << ")" << endl;
  cout << "Position 2: (" << get<0>(pos2) << ", " << get<1>(pos2) << ")" << endl;

  cout << "Distance between positions: " << Utils::calculateDistance(pos1, pos2) << endl;

  return 0;
}
