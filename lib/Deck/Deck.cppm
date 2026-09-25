module;

#include "CardType.h"
#include <iostream>
#include <random>
#include <utility>
#include <vector>

export module Deck;

import Card;

using namespace std;

export class Deck {
public:
  Deck() { generateCards(); };

  // void dealCards(std::vector<Card> &c1, std::vector<Card> &c2, ) {}

private:
  std::vector<Card> cards;

  void generateCards() {
    for (int i = 0; i != static_cast<int>(CardType::last); ++i) {
      // Make 4 copies of each card
      for (int j = 0; j != 4; ++j) {
        cards.emplace_back(static_cast<CardType>(i));
      }
    }

    for (const auto &c : cards) {
      cout << c << " | ";
    }
    cout << "\n";

    shuffle();
  }

  void shuffle() {
    int random;
    std::random_device rd;
    std::mt19937 gen(rd());

    // Durstenfeld shuffle algorithm ("Fisher–Yates shuffle")
    for (int i = cards.size() - 1; i >= 0; --i) {
      std::uniform_int_distribution<int> distrib(0, i);
      random = distrib(gen);
      std::swap(cards[i], cards[random]); // swap cards
    }

    for (const auto &c : cards) {
      cout << c << " | ";
    }

    cout << "\n";
  }
};