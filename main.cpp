#include <iostream>
#include "Character.h"

int main() {

    Character hero1("Jan", "Kowalski", "janek@onet.com");
    std::cout << "Hero1: " << hero1.charName << " " << hero1.charRace << " (" << hero1.charClass << ")" << std::endl;

    return 0;
}
