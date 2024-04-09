#include <iostream>
#include "Character.h"

int main() {

    Character hero1("Jannis", "Drow", "Ranger");
    std::cout << "Hero1: " << hero1.charName << ", " << hero1.charRace << " (" << hero1.charClass << ")" << std::endl;

    return 0;
}
