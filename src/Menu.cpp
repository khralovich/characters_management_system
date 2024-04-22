#include "Menu.h"
#include "../Utils/Roll.h"
#include "Character.h"
#include <iostream>

void displayMainMenu() {
    std::cout << "\nDungeons & Dragons Character Creator\n";
    std::cout << "1. Create Character\n";
    std::cout << "2. View Characters\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
}

Character createCharacter() {
    std::string name;
    std::cout << "Enter character name: ";
    std::getline(std::cin, name);
    std::vector<std::string> classes = {"Fighter", "Rogue", "Wizard", "Barbarian", "Cleric", "Paladin", "Ranger", "Druid", "Sorcerer"};
    std::vector<std::string> races = {"Dwarf", "Elf", "Halfling", "Human", "Dragonborn", "Tiefling" };
    std::string selectedClass = Roll::chooseClassRace(classes);
    std::string selectedRace = Roll::chooseClassRace(races);
    Character character = Character(name, selectedRace, selectedClass, Roll::rollStat(), Roll::rollStat(),
                                           Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat());
    character.displayCharacter();
    return character;

}

void viewCharacters(const std::vector<Character>& characters) {
    if (characters.empty()) {
        std::cout << "No characters available.\n";
    } else {
        std::cout << "\nList of Characters:\n";
        for (Character character : characters) {
            character.displayCharacter();
        }
    }
}
