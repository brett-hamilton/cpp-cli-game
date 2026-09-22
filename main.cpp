import GameManager;
import Utilities;

#include <iostream>
#include <string>

using namespace std;

int main() {
  // Display menu and get input - "enter" to play
  DrawMenu();
  string input;
  getline(cin, input);

  if (!input.empty()) {
    cout << "Exiting...";
    return 0;
  }

  while (!isGameOver) {
    // TODO: Deal cards to player 1 and 2

    // TODO: Resolve turn

    // ** TEMP PLACEHOLDER BEHAVIOR**
    isGameOver = true;
  }

  // End game screen

  return 0;
}
