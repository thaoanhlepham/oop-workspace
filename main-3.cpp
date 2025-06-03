#include "Game.h"
#include <iostream>
using namespace std;

int main() {
  Game game;
  game.initGame(3, 2, 10, 10);
  game.gameLoop(10, 2.0);
  for (GameEntity* entity : game.get_entities()) {
    cout << "Entity Type: " << entity->getType() << endl;
  }
  return 0;
}
