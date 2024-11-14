#include "Autobot.h"
#include <iostream>

Autobot::Autobot() : Transformer("Autobot", 1, 10, 100, 500, 50) {
    std::cout << "Autobot created.\n";
}

Autobot::Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo)
    : Transformer(name, level, strength, range, fuel, ammo) {
    std::cout << "Autobot " << name << " created.\n";
}

Autobot::~Autobot() {
    std::cout << "Autobot destroyed.\n";
}

bool Autobot::assist() {
    std::cout << "Autobot provides assistance.\n";
    return true;
}

bool Autobot::transform() {
    std::cout << "Autobot transforms.\n";
    return true;
}