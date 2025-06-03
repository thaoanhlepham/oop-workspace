#ifndef gameentity_h
#define gameentity_h

#include <tuple>
using namespace std;

enum GameEntityType 
{
  ExplosionType,
  MineType,
  NoneType,
  ShipType
};

class GameEntity 
{
  protected: 
    tuple<int, int> position; // representing the position of the entity
    GameEntityType type; // representing the type of the entity

  public:
  // default constructor
  GameEntity(): position(0,0), type(GameEntityType::NoneType) {}
  // constructor
    GameEntity(int x, int y, char type): position(x,y) {
      switch (type) {
        case 'E': 
          type = GameEntityType::ExplosionType;
          break;
        case 'M':
          type = GameEntityType::MineType;
          break;
        case 'S':
          type = GameEntityType::ShipType;
          break;
        default:
          type = GameEntityType::NoneType;
          break;
      }
    }
    
    // returns the position of the entity
    tuple<int, int> getPos() const {
      return position;
    }

    // returns the type of the entity
    GameEntityType getType() const {
      return type;
    }

    void setPos(int x, int y) {
      position = make_tuple(x, y);
    }

    void setType(GameEntityType newEntityType) {
      type = newEntityType;
    }
    // virtual destructor
    virtual ~GameEntity() = default;
};

#endif