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
    cout << "Exiting...\n";
    return 0;
  }

  gm->deal();

  while (!gm->isGameOver) {
    ClearScreen();
    gm->playHand();

    if (!gm->isGameOver) {
      cout << SetTextColor("red") << " < Press Enter to Continue >"
           << ResetTextColor() << "\n";
      getline(cin, input);

      if (!input.empty()) {
        cout << "Exiting...\n";
        return 0;
      }
    }
  }

  // TODO: End game screen
  delete gm; // deallocate
  gm = nullptr;

  return 0;
}
