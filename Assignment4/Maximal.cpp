#include "Maximal.h"
#include <iostream>

Maximal::Maximal() : Transformer("Maximal", 1, 10, 100, 500, 50) {
    std::cout << "Maximal created.\n";
}

Maximal::Maximal(const std::string &name, int level, int strength, int range, int fuel, int ammo)
    : Transformer(name, level, strength, range, fuel, ammo) {
    std::cout << "Maximal " << name << " created.\n";
}

Maximal::~Maximal() {
    std::cout << "Maximal destroyed.\n";
}

bool Maximal::shield() {
    std::cout << "Maximal activates shield.\n";
    return true;
}

bool Maximal::transform() {
    std::cout << "Maximal transforms.\n";
    return true;
}