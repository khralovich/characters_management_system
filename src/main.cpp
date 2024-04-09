#include "Character.h"
#include "../Utils/Roll.h"

int main() {
    Character hero("Tavi", "Drow", "Paladin", Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat(), Roll::rollStat());

    hero.displayCharacter();

    return 0;
}