#ifndef utils_h
#define utils_h

#include "GameEntity.h"
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

class Utils 
{ 
  public:
    // returns a random position with in ia grid
    static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
      int x = rand() % gridWidth;
      int y = rand() % gridHeight;

      return make_tuple(x,y);
    }

    // returns the euclidean distance between two positions
    static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2) {
      int dx = get<0>(pos1) - get<0>(pos2);
      int dy = get<1>(pos1) - get<1>(pos2);

      return sqrt(dx*dx + dy*dy);
    }
};

#endif