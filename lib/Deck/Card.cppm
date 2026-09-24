module;

#include "CardType.h"

export module Card;

export class Card {
public:
  Card(CardType t) : type(t) {};

private:
  CardType type;
};