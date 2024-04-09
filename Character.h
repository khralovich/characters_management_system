#ifndef CHARACTER_MANAGEMENT_SYSTEM_HERO_H
#define CHARACTER_MANAGEMENT_SYSTEM_HERO_H


#include <string>

class Character {
public:
    std::string charName;
    std::string charRace;
    std::string charClass;

    Character(std::string charName, std::string charRace, std::string charClass);
};


#endif
