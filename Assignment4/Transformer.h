#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

enum class Direction {
    LEFT,
    RIGHT
};

class Transformer {
public:
    Transformer();
    Transformer(const std::string &name, int level, int strength, int range, int fuel, int ammo);
    virtual ~Transformer();

    bool move();
    bool turn(Direction dir);
    bool jump();
    bool fire();
    bool ultimate();
    virtual bool transform() = 0; // Чисто виртуальный метод

    // Перегрузка операторов
    friend std::ostream& operator<<(std::ostream &out, const Transformer &t);
    bool operator>(const Transformer &other) const;
    bool operator<(const Transformer &other) const;

protected:
    std::string _name;
    unsigned int _level;
    unsigned int _strength;
    unsigned int _range;
    unsigned int _fuel;
    unsigned int _ammo;
};

#endif // TRANSFORMER_H