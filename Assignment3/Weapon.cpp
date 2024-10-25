#include "Weapon.h"
Weapon::Weapon(const std::string& weaponName)
weaponName(weaponName) {}
std::string Weapon::getWeaponName()
const { return weaponName; }
void Weapon::setWeaponName(const std::string& weaponName)
{ this ->weaponName = weaponName; }