#include "Character.h"
#include <iostream>

Character::Character(std::string charName, std::string charRace, std::string charClass, int strength, int dexterity, int constitution,
                     int intelligence, int wisdom, int charisma)
        : charName(charName), charRace(charRace), charClass(charClass), strength(strength), dexterity(dexterity), constitution(constitution),
intelligence(intelligence), wisdom(wisdom), charisma(charisma){
}

void Character::displayCharacter() {
    std::cout << "Name: " << charName << "\n"
              << "Race: " << charRace << "\n"
              << "Class: " << charClass << "\n"
              << "Strength: " << strength << "\n"
              << "Dexterity: " << dexterity << "\n"
              << "Constitution: " << constitution << "\n"
              << "Intelligence: " << intelligence << "\n"
              << "Wisdom: " << wisdom << "\n"
              << "Charisma: " << charisma << "\n";
}