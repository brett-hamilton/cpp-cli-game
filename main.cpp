import GameManager;
import Utilities;

#include <iostream>
#include <string>

using namespace std;

int main() {
  GameManager *gm = new GameManager();

  // Display menu and get input - "enter" to play
  gm->DrawMenu();
  string input;
  getline(cin, input);

  if (!input.empty()) {
    cout << "Exiting...";
    return 0;
  }

  while (gm->isGameOver) {
    // TODO: Deal cards to player 1 and 2

    // TODO: Resolve turn

    // ** TEMP PLACEHOLDER BEHAVIOR**
    gm->isGameOver = true;
  }

  // End game screen

  return 0;
}
