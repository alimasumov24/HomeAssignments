#include "Predacon.h"
Preadacon::Predacon(const std::string& name, int powerLevel, int speed, Weapon* weapon, const Team& team, int stealthLevel)
    :Transformer(name, powerLevel, speed, weapon, team), stealthLevel(stealthLevel) {}
int Preadacon::getStealthLevel() const 
{ return stealthLevel; }
void Preadacon::stealthLevel(int stealthLevel) {this->stealthLevel = stealthLevel; }
void Preadacon::hunt() const {
    return;
}