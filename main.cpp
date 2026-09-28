import GameManager;
import Utilities;

#include <iostream>
#include <string>

using namespace std;

int main() {
  GameManager *gm = new GameManager();

  // Display menu and get input - "enter" to play
  gm->drawMenu();
  string input;
  getline(cin, input);

  if (!input.empty()) {
    cout << "Exiting...";
    return 0;
  }

  gm->deal();

  while (!gm->isGameOver) {
    gm->playHand();
  }

  // TODO: End game screen
  delete gm; // deallocate
  gm = nullptr;

  return 0;
}
