# War(ish)
<img width="355" height="279" alt="image" src="https://github.com/user-attachments/assets/70dfb76f-dc17-43e0-822f-50d359b88a54" />
<img width="333" height="370" alt="image" src="https://github.com/user-attachments/assets/c5335e27-2d1f-4ec7-9535-d5285fc2c2b7" />
<img width="315" height="388" alt="image" src="https://github.com/user-attachments/assets/7eccb17d-8e0d-4925-b2cf-9ad154df06fb" />

[![CMake CI](https://github.com/brett-hamilton/cpp-cli-game/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/brett-hamilton/cpp-cli-game/actions/workflows/ci.yml)

A simple terminal card game similar to War. The main purpose of this project is to practice C++ syntax and the CMake meta-build system.

## Features

- **Monster Card Types:** Rather than traditional card deck, cards are monster cards with min attack, max attack, and defense statistics
- **Deck Shuffling:** Each game is unique using the Durstenfeld shuffle algorithm (["Fisher–Yates shuffle"](https://en.wikipedia.org/wiki/Fisher–Yates_shuffle)) to shuffle the deck and deal hands to each player
- **Attack & Defense Levels:** As opposed to the classic War card game, the card types have a range of attack values. The attack value is rolled every time the card is played, so each card might not be guaranteed to defeat another card every single time.

## Prerequisites

- `macOS` - there are certain terminal commands like clear screen and changing text color that rely on ANSI escape codes
- `cmake`
- `ninja`

## Installation

Step-by-step instructions to get your development environment running:

1. Clone the repo:
   ```bash
   git clone https://github.com/brett-hamilton/cpp-cli-game.git
   ```
2. Navigate to project directory:
   ```bash
   cd cpp-cli-game
   ```
3. Use CMake to build the project:
   ```bash
   cmake -B build -DCMAKE_CXX_COMPILER=/path/to/your/c++/compiler/of/choice -G Ninja
   cmake --build build
   ```
4. Start the program:
   ```bash
   ./build/Game
   ```

## Notes

This is not a polished repo. The purpose is to create a C++ program without following a tutorial to familiarize myself with C++ syntax and patterns, along with learning CMake, while I go through the book [A Tour of C++ (3rd ed., Stroustrup)](https://www.stroustrup.com/Tour.html).
The game is bare bones and not that fun, but let's be honest: the classic War card game isn't that fun either. Perhaps at a later date I will revisit this repo and add things like improved UI, full ASCII art cards, improved ruleset, etc., but that is mostly an exercise in string
manipulation and I want to continue learning modern C++ programming. Cheers!
