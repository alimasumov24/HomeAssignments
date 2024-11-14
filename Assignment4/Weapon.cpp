#include "Weapon.h"

Weapon::Weapon(const std::string &type, int damage) : _type(type), _damage(damage) {}

std::string Weapon::getType() const {
    return _type;
}

int Weapon::getDamage() const {
    return _damage;
}

void Weapon::use() const {
    std::cout << "Using weapon: " << _type << " with damage: " << _damage << std::endl;
}