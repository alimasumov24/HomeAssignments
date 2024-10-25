#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Predacon.h"
#include "Weapon.h"
#include "Team.h"
int main() {
    Team autobotTeam("Autobots");
    Team decepticonTeam("Decepticons");
    Weapon autobotWeapon("Blaster");
    Weapon decepticonWeapon("Laser Gun");

    Autobot optimus("Optimus Prime", 100, 80, &autobotWeapon, autobotTeam,"Optimus Prime");
    Decepticon megatron("Megatron", 100, 85, &decepticonWeapon, decepticonTeam, true);
    Predacon tarantula("Tarantulas", 90, 70, &decepticonWeapon, decepticonTeam, 50);
    std::cout << optimus.getName() << " with " <<
    optimus.getWeapon()->getWeaponName() << std::endl;
        std::cout << megatron.getName() << " can fly: " << megatron.getCanFly() << " has stealth level: "
<<
tarantulas.getStealthLevel() << std::endl;
        return 0;
}