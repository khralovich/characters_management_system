#include <iostream>
#include <vector>
#ifndef ROLL_H
#define ROLL_H

class Roll {
public:
    static int rollStat();
    static std::string chooseClassRace(const std::vector<std::string>& listOfClassesRaces);
};

#endif
