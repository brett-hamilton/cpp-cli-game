module;

#include <iostream>
#include <string>

import Deck;

export module GameManager;

using namespace std;

export class GameManager {
public:
  bool isGameOver;

  // Default Constructor
  GameManager() : isGameOver(false), deck(new Deck()) {};

  void drawMenu() {
    string menu = ".------------.\n"
                  "| .------------.\n"
                  "| | .------------.\n"
                  "| | |            |\n"
                  "| | |   WARISH   |   Press 'Enter'\n"
                  "| | |        .   |      to Play\n"
                  "| | |       / \\  |\n"
                  "| | |      /  /  |\n"
                  "| | |     /  /   |\n"
                  "| | |  ._/__/_.  |\n"
                  "| | |  |_._.__|  |\n"
                  "`-| |   /_/      |\n"
                  "  `-|            |\n"
                  "    `------------`\n";

    cout << menu;
  }

  void dealCards() {}

private:
  Deck *deck;
};