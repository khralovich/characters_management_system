#include "Roll.h"
#include <random>

int Roll::rollStat() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(7, 18);

    return distr(gen);
}

std::string Roll::chooseClassRace(const std::vector<std::string>& listOfClassesRaces) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, listOfClassesRaces.size() - 1);

    return listOfClassesRaces[distr(gen)];
}