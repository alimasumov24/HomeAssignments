#ifndef TEAM_H
#define TEAM_H
#include <string>
class Team {
private:
    std::string teamName;
public:
    Team(const std::string& teamName);
    std::string getTeamName() const;
    void setTeamName(const std::string& teamName);
};
#endif
