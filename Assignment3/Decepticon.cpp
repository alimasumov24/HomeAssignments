#include "Decepticon.h"
Decepticon::Decepticon(const std::srtring& name, int powerLevel, int speed, Weapon* weapon, const Team& team, bool canFly)
    :Transformer(name, powerLevel, speed, weapon, team), canFly(canFly){}
bool Decepticon::getCanFly() const { return canFly; }
void Decepticon::sabotage() const {
    return;
}