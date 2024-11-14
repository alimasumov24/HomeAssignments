#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string type;

public:
    explicit Weapon(const std::string &type);

    void use() const;
};

#endif // WEAPON_H