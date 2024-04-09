#ifndef CHARACTER_MANAGEMENT_SYSTEM_HERO_H
#define CHARACTER_MANAGEMENT_SYSTEM_HERO_H


#include <string>

class Character {
public:
    Character(std::string charName, std::string charRace, std::string charClass);

    std::string charName;
    std::string charRace;
    std::string charClass;

};

#endif
