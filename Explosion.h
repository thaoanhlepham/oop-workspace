#ifndef explosion_h
#define explosion_h

#include "GameEntity.h"
#include "Effect.h"
#include <iostream>

class Explosion : public GameEntity, public Effect 
{
  public:
    Explosion(int x, int y): GameEntity(x, y, 'E') {
      setType(GameEntityType::ShipType);
    }

    void apply(GameEntity& entity) override {
      entity.setPos(-1,-1);
      entity.setType(GameEntityType::NoneType);
    }

    ~Explosion() {};
};

#endif
