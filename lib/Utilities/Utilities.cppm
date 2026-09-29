module;

#include <iostream>
#include <string>

export module Utilities;

using namespace std;

// Tested only on Arm64 MacOS
export void ClearScreen() { std::cout << "\033[2J\033[H"; }

// Tested only on Arm64 MacOS
export string SetTextColor(string color) {
  if (color == "red") {
    return "\033[31m";
  } else if (color == "yellow") {
    return "\033[33m";
  } else if (color == "cyan") {
    return "\033[36m";
  } else {
    return "\033[32m"; // Default = green
  }
}

// Tested only on Arm64 MacOS
export string ResetTextColor() { return "\033[0m"; }