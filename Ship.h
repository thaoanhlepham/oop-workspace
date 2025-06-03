#ifndef ship_h
#define ship_h

#include "GameEntity.h"

class Ship : public GameEntity 
{
  public:
    Ship(int x, int y): GameEntity(x, y, 'S') {}

    void move(int dx, int dy) {
      auto [x,y] = getPos();
      setPos(x+dx, y+dy);
    }
};

#endif