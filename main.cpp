#include <iostream>

using namespace std;

string DrawMenu() {
  string pic = ".------.\n"
               "| .------.\n"
               "| | .------.\n"
               "| | |      |\n"
               "| | |      |\n"
               "| | |      |\n"
               "`-| |      |\n"
               "  `-|      |\n"
               "    `------`\n";

  return pic;
}

int main() { cout << "Play Game\n" << DrawMenu() << "\n"; }