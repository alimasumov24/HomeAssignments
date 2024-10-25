#ifndef WEAPON_H
#define WEAPON_H
#include <string>
class Weapon {
private:
    std::string weaponName;
public:
Weapon(const std::string& weaponName);
std::string getWeaponName() const;
void setWeaponName(const std::string& weaponName);
};
#endif