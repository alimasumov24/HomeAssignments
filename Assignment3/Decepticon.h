#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "Transformer.h"
class Decepticon : public Transformer{
private:
    bool canFly;
public:
    Decepticon(const std::string& name, int powreLevel, int speed, Weapon* weapon, const Team& team, bool canFly);
bool getCanFly() const;
void setCanFly(bool canFly);
void sabotage() const;
};
#endif

