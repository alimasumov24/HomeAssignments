#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
public:
    Weapon(const std::string &type, int damage);
    std::string getType() const;
    int getDamage() const;
    void use() const;

private:
    std::string _type;
    int _damage;
};

#endif // WEAPON_H