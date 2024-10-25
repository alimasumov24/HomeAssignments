#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <string>
#include"Weapon.h"
#include"Team.h"
class Transformer {
private:
    std::string name;
    int powerLevel;
    int speed;
    Weapon* weapon;
    Team team;
public:
    Transformer(const std::string& name,int powerLevel,int speed, Weapon* weapon, const Team& team);
    ~Transformer();
    std::string getName()const;
    void setName(const std::string& name);
    int getPowerLevel()const;
    void setPowerLevel(int powerLevel);
    int getSpeed()const;
    void getSpeed(int speed);
    Weapon* getWeapon()const;
    void setWeapon(Weapon* weapon);
    virtual void transform()const;
    virtual void attack()const;
};
#endif
