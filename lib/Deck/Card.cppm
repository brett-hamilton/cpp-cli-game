module;

#include "CardType.h"
#include <iostream>

export module Card;

export class Card {
public:
  // Constructor
  Card(CardType t) : type(t) { setStats(); };

  friend std::ostream &operator<<(std::ostream &os, const Card &card) {
    os << "Card: " << card.type;

    return os;
  }

private:
  CardType type;
  int maxAttack;
  int minAttack;
  int defense;

  void setStats() {
    switch (type) {
    case CardType::rat:
      maxAttack = 1;
      minAttack = 0;
      defense = 3;
      break;
    case CardType::cow:
      maxAttack = 3;
      minAttack = 1;
      defense = 10;
      break;
    case CardType::goblin:
      maxAttack = 5;
      minAttack = 2;
      defense = 5;
      break;
    case CardType::skeleton:
      maxAttack = 7;
      minAttack = 3;
      defense = 5;
      break;
    case CardType::troll:
      maxAttack = 9;
      minAttack = 4;
      defense = 7;
      break;
    case CardType::giant:
      maxAttack = 10;
      minAttack = 6;
      defense = 10;
      break;
    case CardType::ogre:
      maxAttack = 13;
      minAttack = 8;
      defense = 10;
      break;
    case CardType::demon:
      maxAttack = 15;
      minAttack = 10;
      defense = 15;
      break;
    case CardType::cyclops:
      maxAttack = 18;
      minAttack = 12;
      defense = 16;
      break;
    case CardType::gargoyle:
      maxAttack = 20;
      minAttack = 16;
      defense = 18;
      break;
    case CardType::vampire:
      maxAttack = 22;
      minAttack = 18;
      defense = 20;
      break;
    case CardType::warlock:
      maxAttack = 25;
      minAttack = 20;
      defense = 25;
      break;
    case CardType::dragon:
      maxAttack = 30;
      minAttack = 24;
      defense = 28;
      break;

    default:
      maxAttack = 0;
      minAttack = 0;
      defense = 0;
    }
  }
};