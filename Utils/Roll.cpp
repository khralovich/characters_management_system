#include "Roll.h"
#include <random>

int Roll::rollStat() {
    std::random_device rd; // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_int_distribution<> distr(7, 18); // Define the new range from 7 to 18

    return distr(gen); // Return a random number in the range [7, 18]
}

