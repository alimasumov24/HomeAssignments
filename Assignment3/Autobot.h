#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "Transformer.h"
class Autobot:public Transformer {
private:
    std::string leaderName;
public:
    Autobot(const std::string& name, int powerLevel,int speed, Weapon* weapon, const Team& team, const std::string& leaderName);
    std::string getLeaderName() const;
    void setLeaderName(const std::string& leaderName);
    void repair() const;
};
#endif