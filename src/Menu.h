//
// Created by nasta on 22.04.24.
//

#ifndef CHARACTER_MANAGEMENT_SYSTEM_MENU_H
#define CHARACTER_MANAGEMENT_SYSTEM_MENU_H


#pragma once
#include "Character.h"
#include <vector>

void displayMainMenu();
Character createCharacter();
void viewCharacters(const std::vector<Character>& characters);


#endif //CHARACTER_MANAGEMENT_SYSTEM_MENU_H
