#ifndef PREDACON_H
#define PREDACON_H
#include <string>
class Predacon: public Transformer {
private:
    int stealthLevel;
public:
    Preadacon(const std::string& name, int powerLeve, int speed, Weapon* weapon, const Team& team, int stealthLevel);
    int getStealthLevel() const;
    void hunt() const;
};
#endif
