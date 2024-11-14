#include "Transformer.h"
#include <iostream>

Transformer::Transformer()
    : _name("Unknown"), _level(1), _strength(10), _range(100), _fuel(500), _ammo(50) {
    std::cout << "Transformer created.\n";
}

Transformer::Transformer(const std::string &name, int level, int strength, int range, int fuel, int ammo)
    : _name(name), _level(level), _strength(strength), _range(range), _fuel(fuel), _ammo(ammo) {
    std::cout << "Transformer " << name << " created.\n";
}

Transformer::~Transformer() {
    std::cout << "Transformer destroyed.\n";
}

bool Transformer::move() {
    std::cout << "Transformer moves.\n";
    return true;
}

bool Transformer::turn(Direction dir) {
    std::cout << "Transformer turns.\n";
    return true;
}

bool Transformer::jump() {
    std::cout << "Transformer jumps.\n";
    return true;
}

bool Transformer::fire() {
    std::cout << "Transformer shoots.\n";
    return true;
}

bool Transformer::ultimate() {
    std::cout << "Transformer uses ultimate ability.\n";
    return true;
}

std::ostream& operator<<(std::ostream &out, const Transformer &t) {
    out << "Transformer: " << t._name << ", Level: " << t._level << ", Strength: " << t._strength;
    return out;
}

bool Transformer::operator>(const Transformer &other) const {
    return _strength > other._strength;
}

bool Transformer::operator<(const Transformer &other) const {
    return _strength < other._strength;
}