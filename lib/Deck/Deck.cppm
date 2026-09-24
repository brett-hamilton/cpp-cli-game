module;

#include "CardType.h"
#include <vector>

import Card;

export module Deck;

export class Deck {
public:
  Deck() { generateCards(); };

private:
  std::vector<Card *> cards;

  void generateCards() {
    for (int i = 0; i != static_cast<int>(CardType::last); ++i) {
      // Make 4 copies of each card
      for (int j = 0; j != 4; ++j) {
        Card *c = new Card(static_cast<CardType>(i));
        cards.push_back(c);
      }
    }
  }
};