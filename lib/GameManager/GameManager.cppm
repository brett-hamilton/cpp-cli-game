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

  void playHand() {
    // Roll attack numbers
    int p1Attack;
    int p2Attack;

    rollAttackValues(p1Attack, p2Attack);

    // Report rolled attack values
    cout << "p1Attack == " << p1Attack << "\n";
    cout << "p2Attack == " << p2Attack << "\n";
    cout << "p1 Defense == " << player1[0].defense << "\n";
    cout << "p2 Defense == " << player2[0].defense << "\n";

    // Fight
    if (p1Attack > player2[0].defense && p2Attack < player1[0].defense) {
      // Player 1 wins hand
      cout << "Player1 wins hand!\n";
      player1.push_back(std::move(player2[0]));
      player2.erase(player2.begin());
    } else if (p2Attack > player1[0].defense && p1Attack < player2[0].defense) {
      // Player 2 wins hand
      cout << "Player2 wins hand!\n";
      player2.push_back(std::move(player1[0]));
      player1.erase(player1.begin());
    } else {
      // Tie - remove both cards from game
      cout << "Tie!\n";
      player1.erase(player1.begin());
      player2.erase(player2.begin());
    }

    // Report how many cards left
    cout << "player1 card count == " << player1.size() << "\n";
    cout << "player2 card count == " << player2.size() << "\n";

    // Check if either hand is empty
    if (player1.empty()) {
      cout << "*** Player2 Wins! ***\n";
      isGameOver = true;
    } else if (player2.empty()) {
      cout << "*** Player1 Wins! ***\n";
      isGameOver = true;
    }
  }

private:
  Deck *deck;
  std::vector<Card> player1;
  std::vector<Card> player2;

  void rollAttackValues(int &p1, int &p2) {
    p1 = 5;
    p2 = 6;
  }
};