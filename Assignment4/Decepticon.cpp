#include "Decepticon.h"
#include <iostream>

Decepticon::Decepticon() : Transformer("Decepticon", 1, 10, 100, 500, 50) {
    std::cout << "Decepticon created.\n";
}

Decepticon::Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo)
    : Transformer(name, level, strength, range, fuel, ammo) {
    std::cout << "Decepticon " << name << " created.\n";
}

Decepticon::~Decepticon() {
    std::cout << "Decepticon destroyed.\n";
}

bool Decepticon::sabotage() {
    std::cout << "Decepticon sabotage.\n";
    return true;
}

bool Decepticon::transform() {
    std::cout << "Decepticon transforms.\n";
    return true;
}