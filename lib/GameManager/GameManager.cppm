module;

#include "CardType.h"
#include <iostream>
#include <random>
#include <string>

import Deck;
import Card;
import Utilities;

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
                  "| | |   " +
                  SetTextColor("cyan") + "WARISH" + ResetTextColor() +
                  "   |   " + SetTextColor("red") + "Press 'Enter'\n" +
                  ResetTextColor() + "| | |        " + SetTextColor("yellow") +
                  "." + ResetTextColor() + "   |      " + SetTextColor("red") +
                  "to Play\n" + ResetTextColor() + "| | |       " +
                  SetTextColor("yellow") + "/ \\" + ResetTextColor() +
                  "  |\n"
                  "| | |      " +
                  SetTextColor("yellow") + "/  /" + ResetTextColor() +
                  "  |\n"
                  "| | |     " +
                  SetTextColor("yellow") + "/  /" + ResetTextColor() +
                  "   |\n"
                  "| | |  " +
                  SetTextColor("yellow") + "._/__/_." + ResetTextColor() +
                  "  |\n"
                  "| | |  " +
                  SetTextColor("yellow") + "|_._.__|" + ResetTextColor() +
                  "  |\n"
                  "`-| |   " +
                  SetTextColor("yellow") + "/_/" + ResetTextColor() +
                  "      |\n"
                  "  `-|            |\n"
                  "    `------------`\n";

    cout << menu;
  }

  void deal() { deck->dealCards(player1, player2); }

  void playHand() {
    // Roll attack numbers
    int p1Attack;
    int p2Attack;

    rollAttackValues(p1Attack, p2Attack);

    // Display card details
    drawCards(p1Attack, p2Attack);

    // Fight
    if (p1Attack > player2[0].defense && p2Attack < player1[0].defense) {
      // Player 1 wins hand
      cout << "  Result: Player 1 wins hand!\n";
      player1.push_back(std::move(player2[0]));
      player2.erase(player2.begin());
    } else if (p2Attack > player1[0].defense && p1Attack < player2[0].defense) {
      // Player 2 wins hand
      cout << "  Result: Player 2 wins hand!\n";
      player2.push_back(std::move(player1[0]));
      player1.erase(player1.begin());
    } else {
      // Tie - remove both cards from game
      cout << "  Result: Tie!\n";
      player1.erase(player1.begin());
      player2.erase(player2.begin());
    }

    // Report how many cards left
    cout << "Player 1 card count = " << player1.size() << "\n";
    cout << "Player 2 card count = " << player2.size() << "\n";

    // Check if either hand is empty
    if (player1.empty()) {
      cout << "\n"
           << SetTextColor("yellow") << "     *** PLAYER 1 WINS! ***\n\n"
           << ResetTextColor();
      isGameOver = true;
    } else if (player2.empty()) {
      cout << "\n"
           << SetTextColor("yellow") << "     *** PLAYER 2 WINS! ***\n\n"
           << ResetTextColor();
      isGameOver = true;
    }
  }

private:
  Deck *deck;
  std::vector<Card> player1;
  std::vector<Card> player2;

  void rollAttackValues(int &p1, int &p2) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distrib1(player1[0].minAttack,
                                                player1[0].maxAttack);
    p1 = distrib1(gen);

    std::uniform_int_distribution<int> distrib2(player2[0].minAttack,
                                                player2[0].maxAttack);
    p2 = distrib2(gen);
  }

  void drawCards(int &p1Attack, int &p2Attack) {
    cout << "          Player 1  \n";
    cout << "        ------------\n";
    cout << "        Card: " << player1[0].type << "\n";
    cout << "  Min Attack: " << player1[0].minAttack << "\n";
    cout << "  Max Attack: " << player1[0].maxAttack << "\n";
    cout << "    Defense: " << player1[0].defense << "\n";
    cout << "     *** Rolled Attack ***\n";
    cout << "            *** " << p1Attack << " ***" << "\n\n";

    cout << "          Player 2  \n";
    cout << "        ------------\n";
    cout << "        Card: " << player2[0].type << "\n";
    cout << "  Min Attack: " << player2[0].minAttack << "\n";
    cout << "  Max Attack: " << player2[0].maxAttack << "\n";
    cout << "     Defense: " << player2[0].defense << "\n";
    cout << "     *** Rolled Attack ***\n";
    cout << "            *** " << p2Attack << " ***" << "\n\n";
  }
};