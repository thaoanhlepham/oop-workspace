#ifndef effect_h
#define effect_h

#include "GameEntity.h"

using namespace std;

class Effect
{
  public: 
    // pure virtual
    // accepts a GameEntity object as input and applies effect to the entity
    virtual void apply(GameEntity& entity) = 0;
    
    // virtual destructor
    virtual ~Effect() = default;
};

#endif