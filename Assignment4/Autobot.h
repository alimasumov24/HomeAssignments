#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot();
    Autobot(const std::string &name, int level, int strength, int range, int fuel, int ammo);
    ~Autobot();

    bool assist();
    bool transform() override;
};

#endif // AUTOBOT_H