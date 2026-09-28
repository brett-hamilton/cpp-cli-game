module;

#include <iostream>
#include <string>

import Deck;
import Card;

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

  void deal() {
    deck->dealCards(player1, player2);
    cout << "player1 card count == " << player1.size() << "\n";
    cout << "player2 card count == " << player2.size() << "\n";
  }

private:
  Deck *deck;
  std::vector<Card> player1;
  std::vector<Card> player2;
};