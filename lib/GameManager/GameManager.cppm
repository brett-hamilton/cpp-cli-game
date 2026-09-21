module;

#include <iostream>
#include <string>

export module GameManager;

using namespace std;

export void DrawMenu() {
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