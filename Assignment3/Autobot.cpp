#include"Autobot.h"
Autobot::Autobot(const std::string& name, int powerLevel, int speed, Weapon* weapon, const Team& team, const std::string& leaderName)
    :Transformer(name, powerLevel, speed, weapon, team), lederName(leaderName){}
std::string Autobot::getLeaderName() 
const { return leaderName; }
void Autobot::setLeaderName(const std::string& leaderName)
{ this->leaderName = leaderName; }
void Autobot::repair() const {
    return;
}