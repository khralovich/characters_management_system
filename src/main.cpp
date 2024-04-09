#include "Character.h"
#include "../Utils/Roll.h"

int main() {
    std::vector<std::string> classes = {"Fighter", "Rogue", "Wizard", "Barbarian", "Monk", "Bard", "Cleric", "Paladin", "Ranger", "Druid", "Warlock", "Sorcerer"};
    std::vector<std::string> races = {"Dwarf", "Elf", "Halfling", "Human", "Dragonborn", "Gnome", "Half-Elf", "Half-Orc", "Tiefling" };
    std::string selectedClass = Roll::chooseClassRace(classes);
    std::string selectedRace = Roll::chooseClassRace(races);

    Character hero("Tavi", selectedRace, selectedClass, Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat());

    hero.displayCharacter();

    return 0;
}