#pragma once

#include <ostream>

enum class CardType {
  dragon,
  warlock,
  vampire,
  gargoyle,
  cyclops,
  demon,
  ogre,
  giant,
  troll,
  skeleton,
  goblin,
  cow,
  rat,
  last // not used for card; used for looping through enum cases
};

inline std::ostream &operator<<(std::ostream &os, const CardType type) {
  switch (type) {
  case CardType::rat:
    return os << "Rat";
  case CardType::cow:
    return os << "Cow";
  case CardType::goblin:
    return os << "Goblin";
  case CardType::skeleton:
    return os << "Skeleton";
  case CardType::troll:
    return os << "Troll";
  case CardType::giant:
    return os << "Giant";
  case CardType::ogre:
    return os << "Ogre";
  case CardType::demon:
    return os << "Demon";
  case CardType::cyclops:
    return os << "Cyclops";
  case CardType::gargoyle:
    return os << "Gargoyle";
  case CardType::vampire:
    return os << "Vampire";
  case CardType::warlock:
    return os << "Warlock";
  case CardType::dragon:
    return os << "Dragon";

  default:
    return os << "Unknown";
  }
}
