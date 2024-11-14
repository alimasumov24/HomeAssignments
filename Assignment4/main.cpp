#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximal.h"
#include "Weapon.h"

int main() {
    Autobot autobot("Optimus Prime", 10, 100, 200, 500, 100);
    Decepticon decepticon("Megatron", 9, 90, 150, 450, 80);
    Maximal maximal("Optimus Primal", 8, 85, 180, 480, 90);

    Weapon autobotWeapon("Blaster", 50);
    Weapon decepticonWeapon("Cannon", 70);

    autobot.move();
    autobot.assist();
    autobotWeapon.use();

    std::cout << "----------\n";

    decepticon.move();
    decepticon.sabotage();
    decepticonWeapon.use();

    std::cout << "----------\n";

    maximal.move();
    maximal.shield();

    std::cout << "----------\n";

    std::cout << autobot << std::endl;
    std::cout << decepticon << std::endl;
    std::cout << maximal << std::endl;

    return 0;
}