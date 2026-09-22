module;

#include <iostream>

export module Utilities;

using namespace std;

// Tested only on Arm64 MacOS
export void ClearScreen() { std::cout << "\033[2J\033[H"; }