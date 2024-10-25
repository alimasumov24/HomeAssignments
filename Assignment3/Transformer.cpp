#include "Transformer.h"
Transformer::Transformer(const std::string& name, int powerLevel, int speed, Weapon* weapon, const Team& team)
    :name(name), powerLevel(powerLevel), speed(speed), weapon(weapon), team(team){}
Transformer::~Transformer() {}
std::string Transformer::getName() const {return name; }
void Transformer::setName(const std::string& name) {this->name = name; }
int Transformer::getPowerLevel() const {return powerLevel; }
void Transformer::setPowerLevel(int powerLevel) {this->powerLevel = powerLevel; }
int Transformer::getSpeed() const { return speed; }
void Transformer::setSpeed(int speed) { this->speed = speed; }
Weapon* Transformer::getWeapon() const { return weapon; }
void Transformer::setWeapon(Weapon* weapon) { this->weapon = weapon; }
void Transformer::transform() const {
    return;
}
void Transformer::attack() const {
    return;
}
