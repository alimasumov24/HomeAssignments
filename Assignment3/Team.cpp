#include "Team.h"
Team::Team(const std::string& teamName): teamName(teamName) {}
srd::string Team::getTeamName() const { return teamName; }
void Team::setTeamName(const std::string& teamName) { this->teamName = teamName; }