#ifndef MAXIMAL_H
#define MAXIMAL_H

#include "Transformer.h"

class Maximal : public Transformer {
public:
    Maximal();
    Maximal(const std::string &name, int level, int strength, int range, int fuel, int ammo);
    ~Maximal();

    bool shield();
    bool transform() override;
};

#endif // MAXIMAL_H