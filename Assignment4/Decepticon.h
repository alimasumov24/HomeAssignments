#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon();
    Decepticon(const std::string &name, int level, int strength, int range, int fuel, int ammo);
    ~Decepticon();

    bool sabotage();
    bool transform() override;
};

#endif // DECEPTICON_H