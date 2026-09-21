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
                "| | |            |\n"
                "| | |            |   Press 'Enter'\n"
                "| | |            |      to Play\n"
                "| | |            |\n"
                "| | |            |\n"
                "| | |            |\n"
                "`-| |            |\n"
                "  `-|            |\n"
                "    `------------`\n";

  cout << menu;
}