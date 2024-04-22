#include "Menu.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Character> characters;
    int choice;

    do {
        displayMainMenu();
        std::cin >> choice;
        std::cin.ignore(); // Clear newline after integer input

        switch (choice) {
            case 1:
                characters.push_back(createCharacter());
                std::cout << "Character created successfully!\n";
                break;
            case 2:
                viewCharacters(characters);
                break;
            case 3:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (true);

    return 0;
}
