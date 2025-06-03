#ifndef mine_h
#define mine_h

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity 
{
  public:
    Mine(int x, int y): GameEntity(x, y, 'M') {}

    Explosion explode() {
      setType(GameEntityType::NoneType);
      auto [x, y] = getPos();
      return Explosion(x, y);
    }
};

#endif