#ifndef game_h
#define game_h

#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

#include <vector>
using namespace std;

class Game 
{
  private:
    vector<GameEntity*> entities;
  
  public:
    vector<GameEntity*> get_entities() const {
      return entities;
    }

    void set_entities(vector<GameEntity*> new_entities) {
      entities = new_entities;
    }

    vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
      // create ship objects and store in the entities vector
      for (int i = 0; i < numShips; i++) {
        auto [x,y] = Utils::generateRandomPos(gridWidth,gridHeight);
        entities.push_back(new Ship(x,y));
      }

      // create mine objects and store in the entities vector
      for (int i = 0; i < numMines; i++) {
        auto [x,y] = Utils::generateRandomPos(gridWidth,gridHeight);
        entities.push_back(new Mine(x,y));
      }

      return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
      for (int i = 0; i < maxIterations; i++) {
        for (GameEntity* entity : entities) {
          if (entity->getType() == GameEntityType::ShipType) {
          Ship* ship = dynamic_cast<Ship*>(entity);
          ship->move(1,0);
          }
        }

        for (GameEntity* entityShip : entities) {
          Ship* ship = dynamic_cast<Ship*>(entityShip);
          auto shipPos = ship->getPos();

          for (GameEntity* entityMine : entities) {
            Mine* mine = dynamic_cast<Mine*>(entityMine);
            auto minePos = mine->getPos();

            double dist = Utils::calculateDistance(shipPos, minePos);

            if (dist <= mineDistanceThreshold) {
              Explosion explosion = mine->explode();
              explosion.apply(*ship);
              break;
            }
          }
        }
        bool allShipsDestroyed = true;
        for (GameEntity* entity : entities) {
          if (entity->getType() == GameEntityType::ShipType) {
            allShipsDestroyed = false;
            break;
          }
        }
      }
    }

    ~Game() {
      for (auto entity : entities) {
        delete entity;
      }
      entities.clear();
    }
  
};



#endif 